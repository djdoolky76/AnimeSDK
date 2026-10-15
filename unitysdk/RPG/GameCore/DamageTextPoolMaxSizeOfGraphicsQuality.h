#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DamageTextMobilePoolConfig; }
namespace RPG::GameCore { class DamageTextPoolMaxSizeOfGraphicsQuality; }

#define RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F2830)
#define RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F2770)

namespace RPG::GameCore
{
	class DamageTextPoolMaxSizeOfGraphicsQuality : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DamageTextMobilePoolConfig* Mobile; // 0x10
		::RPG::GameCore::DamageTextMobilePoolConfig* NonMobile; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DamageTextPoolMaxSizeOfGraphicsQuality* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DamageTextPoolMaxSizeOfGraphicsQuality*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DAMAGETEXTPOOLMAXSIZEOFGRAPHICSQUALITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
