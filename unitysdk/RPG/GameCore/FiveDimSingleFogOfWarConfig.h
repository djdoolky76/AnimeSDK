#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSingleFogOfWarConfig; }

#define RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6DC450)
#define RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6DC300)

namespace RPG::GameCore
{
	class FiveDimSingleFogOfWarConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 LocalFogID; // 0x10
		::System::UInt32 GlobalFogID; // 0x14
		::Il2CppArray<::System::UInt32>* SectionIDList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSingleFogOfWarConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSingleFogOfWarConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSINGLEFOGOFWARCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
