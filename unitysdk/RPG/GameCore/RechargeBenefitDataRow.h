#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RechargeBenefitDataRow; }

#define RPG_GAMECORE_RECHARGEBENEFITDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D943740)
#define RPG_GAMECORE_RECHARGEBENEFITDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D943560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeBenefitDataRow_TypeDefinitionIndex = 14620;

	class RechargeBenefitDataRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID GiftName; // 0x10
		::System::UInt32 ConsumeNum; // 0x20
		::System::UInt32 BenefitID; // 0x24
		::System::UInt32 Reward; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RechargeBenefitDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RechargeBenefitDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RECHARGEBENEFITDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
