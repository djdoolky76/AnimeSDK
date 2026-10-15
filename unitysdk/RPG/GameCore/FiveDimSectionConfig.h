#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSectionConfig; }

#define RPG_GAMECORE_FIVEDIMSECTIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D8160)
#define RPG_GAMECORE_FIVEDIMSECTIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D8050)

namespace RPG::GameCore
{
	class FiveDimSectionConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SectionID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* Indices; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSECTIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSectionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSectionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSECTIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
