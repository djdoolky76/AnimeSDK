#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAMCAOCNLGB;
namespace RPG::Client::MechCraft::View { class MechCraftCraftControl; }
namespace System { class String; }

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DDA90)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0x1C6DE6D0)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftCraftControl___c__DisplayClass23_0_TypeDefinitionIndex = 82681;

	class MechCraftCraftControl___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::HAMCAOCNLGB* vm; // 0x10
		::RPG::Client::MechCraft::View::MechCraftCraftControl* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTCRAFTCONTROL___C__DISPLAYCLASS23_0___REFRESH_B__0_OFFSET))(this, a1);
		}

	};
}
