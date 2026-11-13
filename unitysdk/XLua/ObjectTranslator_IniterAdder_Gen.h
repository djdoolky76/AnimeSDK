#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_CCTOR_OFFSET UNITYSDK_OFFSET(0xE8CA5E0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C9E70)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_INIT_OFFSET UNITYSDK_OFFSET(0xE910A90)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_00_OFFSET UNITYSDK_OFFSET(0xE8CA6A0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_01_OFFSET UNITYSDK_OFFSET(0xE8D2FE0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_02_OFFSET UNITYSDK_OFFSET(0xE8DC7A0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_03_OFFSET UNITYSDK_OFFSET(0xE8E5810)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_04_OFFSET UNITYSDK_OFFSET(0xE8EE090)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_05_OFFSET UNITYSDK_OFFSET(0xE8F6B40)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_06_OFFSET UNITYSDK_OFFSET(0xE8FEEA0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_07_OFFSET UNITYSDK_OFFSET(0xE9084D0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_OFFSET UNITYSDK_OFFSET(0xE8CA650)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_00_OFFSET UNITYSDK_OFFSET(0xE910B00)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_01_OFFSET UNITYSDK_OFFSET(0xE918860)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_02_OFFSET UNITYSDK_OFFSET(0xE920D80)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_03_OFFSET UNITYSDK_OFFSET(0xE928D30)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_04_OFFSET UNITYSDK_OFFSET(0xE9306C0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_05_OFFSET UNITYSDK_OFFSET(0xE938100)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_06_OFFSET UNITYSDK_OFFSET(0xE93F710)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_07_OFFSET UNITYSDK_OFFSET(0xE948000)

namespace XLua
{
	inline static constexpr unsigned int ObjectTranslator_IniterAdder_Gen_TypeDefinitionIndex = 51126;

	class ObjectTranslator_IniterAdder_Gen : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_CTOR_OFFSET))(this);
		}

		static ::System::Void RegisterCast()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_OFFSET))();
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_INIT_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_00()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_00_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_00(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_00_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_01()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_01_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_01(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_01_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_02()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_02_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_02(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_02_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_03()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_03_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_03(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_03_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_04()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_04_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_04(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_04_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_05()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_05_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_05(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_05_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_06()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_06_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_06(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_06_OFFSET))(a1, a2);
		}

		static ::System::Void RegisterCast_07()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERCAST_07_OFFSET))();
		}

		static ::System::Void RegisterPushAndGetAndUpdate_07(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_GEN_REGISTERPUSHANDGETANDUPDATE_07_OFFSET))(a1, a2);
		}

	};
}
