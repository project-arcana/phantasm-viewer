#include <nexus/app.hh>

#include <phantasm-viewer/pv.hh>

// not intended for execution, just to check that the api compiles
APP("pv api")
{
    // conventions:
    // - draw_xyz / fill_xyz?
    // - global vs local functions (pv::xyz vs c.xyz)
    //   -> state is always local!

    // features:
    // - materials / textures
    // - transformations
    // - 2D / 3D / 2-in-3-D / seamless 2D-3D
    // - 2D scenes mapped somehow into 3D (important for debugging conceptual spaces)
    // - lighting
    // - styling
    // - instancing
    // - picking
    // - arbitrary additional data
    // - layers
    // - introspection
    // - persistence / caching
    // - labels / "measurements"
    // - constraint based geometry

    // open questions:
    // - how to do efficient styling?
    // - how to do efficient transformations?
    // - how to do efficient custom attributes?
    // - how to do culling?
    // - pen / brush system?

    // custom attributes:
    // - each custom attribute has a "stack"
    //   -> maybe the stack is only "local" and we store "attribute streams" in a count + values format
    // - values can be pushed or popped
    // - materials have access to all attributes
    // - preparing GPU data "compiles" the attribute stacks
    //   -> checkpointing
    //   -> local indices
    //   -> uniforms where appropriate

    // ideas:
    // - 2_px as user-defined literal?
    // - tg::color literals

    // basic primitives
    {
        // 2D

        // 3D
    }
}
