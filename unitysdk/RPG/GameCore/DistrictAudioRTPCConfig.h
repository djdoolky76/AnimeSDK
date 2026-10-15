#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DistrictAudioRTPCConfig; }
namespace System { class String; }

#define RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6188E0)
#define RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D618690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DistrictAudioRTPCConfig_TypeDefinitionIndex = 17262;

	class DistrictAudioRTPCConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* RTPCName; // 0x10
		::System::Single RTPCValue; // 0x18
		::System::Boolean IsRandom; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single RandomFrequncy; // 0x20
		::System::Single RTPCRangeMin; // 0x24
		::System::Single RTPCRangeMax; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DistrictAudioRTPCConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DistrictAudioRTPCConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DISTRICTAUDIORTPCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
