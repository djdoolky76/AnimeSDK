#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FKKIAHNJCBC;

#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xD6722F0)
#define RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xD672530)

namespace RPG::Client::MechCraft::View
{
	inline static constexpr unsigned int MechCraftTalentedPartnerHeadControl___c__DisplayClass7_0_TypeDefinitionIndex = 79832;

	class MechCraftTalentedPartnerHeadControl___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::FKKIAHNJCBC* vm; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MECHCRAFT_VIEW_MECHCRAFTTALENTEDPARTNERHEADCONTROL___C__DISPLAYCLASS7_0___REFRESH_B__0_OFFSET))(this);
		}

	};
}
