#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSimpleProjectileRandomVelItem; }

#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6AE880)
#define RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6AE660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimSimpleProjectileRandomVelItem_TypeDefinitionIndex = 18588;

	class FiveDimSimpleProjectileRandomVelItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 RandVelLowerBound; // 0x10
		::RPG::MVector3 RandVelUpperBound; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSimpleProjectileRandomVelItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSIMPLEPROJECTILERANDOMVELITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
