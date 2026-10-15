#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGDADKNPPOL;
namespace RPG::GameCore { class EraRegion; }

#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0_CTOR_OFFSET UNITYSDK_OFFSET(0xCE19740)
#define RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__ONREGIONVISUALSTATECHANGE_B__0_OFFSET UNITYSDK_OFFSET(0xCE1AD50)

namespace RPG::Client
{
	inline static constexpr unsigned int EraFlipperManager___c__DisplayClass33_0_TypeDefinitionIndex = 60511;

	class EraFlipperManager___c__DisplayClass33_0 : public ::System::Object
	{
	public:
		::KGDADKNPPOL* arg1; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnRegionVisualStateChange_b__0(::RPG::GameCore::EraRegion* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::EraRegion*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ERAFLIPPERMANAGER___C__DISPLAYCLASS33_0__ONREGIONVISUALSTATECHANGE_B__0_OFFSET))(this, a1);
		}

	};
}
