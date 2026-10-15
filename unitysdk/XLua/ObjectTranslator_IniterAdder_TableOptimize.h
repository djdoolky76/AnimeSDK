#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_CCTOR_OFFSET UNITYSDK_OFFSET(0x152C1BB0)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_CTOR_OFFSET UNITYSDK_OFFSET(0x152C3190)
#define XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_INIT_OFFSET UNITYSDK_OFFSET(0x152C1C20)

namespace XLua
{
	class ObjectTranslator_IniterAdder_TableOptimize : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_CTOR_OFFSET))(this);
		}

		static ::System::Void Init(::XLua::LuaEnv* a1, ::XLua::ObjectTranslator* a2)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_OBJECTTRANSLATOR_INITERADDER_TABLEOPTIMIZE_INIT_OFFSET))(a1, a2);
		}

	};
}
