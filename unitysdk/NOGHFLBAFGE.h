#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace XLua { class LuaTable; }

#define NOGHFLBAFGE_CTOR_OFFSET UNITYSDK_OFFSET(0xBCEBE80)

inline static constexpr unsigned int NOGHFLBAFGE_TypeDefinitionIndex = 59428;

	class NOGHFLBAFGE : public ::System::Object
	{
	public:
		::XLua::LuaTable* KOOHFEPIHBD; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOGHFLBAFGE_CTOR_OFFSET))(this);
		}

	};
