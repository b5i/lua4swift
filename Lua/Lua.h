@import Foundation;

#ifdef LUA_USE_IOS
@import LuaSource_iOS;
#else
@import LuaSource_macOS;
#endif

//! Project version number for Lua.
FOUNDATION_EXPORT double LuaVersionNumber;

//! Project version string for Lua.
FOUNDATION_EXPORT const unsigned char LuaVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <Lua/PublicHeader.h>

