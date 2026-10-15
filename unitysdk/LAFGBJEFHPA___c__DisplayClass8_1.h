#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::Promises { class Promise; }
namespace XLua { class LuaTable; }

#define LAFGBJEFHPA___C__DISPLAYCLASS8_1_CTOR_OFFSET UNITYSDK_OFFSET(0xB5DFDA0)
#define LAFGBJEFHPA___C__DISPLAYCLASS8_1___SHOWROGUETOURNENTRANCEPAGE_B__2_OFFSET UNITYSDK_OFFSET(0xB5DFDB0)

inline static constexpr unsigned int LAFGBJEFHPA___c__DisplayClass8_1_TypeDefinitionIndex = 67832;

	template <typename T>
	class LAFGBJEFHPA___c__DisplayClass8_1 : public ::System::Object
	{
	public:
		::RPG::Client::Promises::Promise* promise; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS8_1_CTOR_OFFSET))(this);
		}

		::System::Void __ShowRogueTournEntrancePage_b__2(::XLua::LuaTable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*))((::PBYTE)hIl2Cpp + LAFGBJEFHPA___C__DISPLAYCLASS8_1___SHOWROGUETOURNENTRANCEPAGE_B__2_OFFSET))(this, a1);
		}

	};
