#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MNJKHKCHKLI;
namespace RPG::Client::MechCraft::View { class MechCraftExamStartControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0_CTOR_OFFSET UNITYSDK_OFFSET(0xE0D3380)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xE0D37C0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xE0D3900)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__2_OFFSET UNITYSDK_OFFSET(0xE0D3A50)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftExamStartControl___c__DisplayClass8_0_TypeDefinitionIndex = 82742;

	class MechCraftExamStartControl___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MNJKHKCHKLI* vm; // 0x10
		::RPG::Client::MechCraft::View::MechCraftExamStartControl* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0_CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__0_OFFSET))(this, a1);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__1_OFFSET))(this);
		}

		::System::Void __Refresh_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTEXAMSTARTCONTROL___C__DISPLAYCLASS8_0___REFRESH_B__2_OFFSET))(this);
		}

	};
}
