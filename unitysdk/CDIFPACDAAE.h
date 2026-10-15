#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingTREventType.h"
#include "unitysdk/System/Object.h"
class GHMGGIHEHJE;
class JIJBCGDANLJ;
class KPDKCEAFBHI;
namespace RPG::Client::RoadRash { class MonoRoadRashGameSettings; }
namespace RPG::Client::RoadRash { class RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig; }
namespace RPG::GameCore { class B51RacingTREventRow; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CDIFPACDAAE_BNCGONPKIHA_OFFSET UNITYSDK_OFFSET(0xC769B80)
#define CDIFPACDAAE_CTOR_OFFSET UNITYSDK_OFFSET(0xC769390)
#define CDIFPACDAAE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC769470)
#define CDIFPACDAAE_GDALOHIALKP_OFFSET UNITYSDK_OFFSET(0xC7697F0)
#define CDIFPACDAAE_GET_DETECTORCONFIG_OFFSET UNITYSDK_OFFSET(0xC769510)
#define CDIFPACDAAE_GHCEDOMCCNG_OFFSET UNITYSDK_OFFSET(0xC769F10)
#define CDIFPACDAAE_GJNHELMCHLG_OFFSET UNITYSDK_OFFSET(0xC76A270)
#define CDIFPACDAAE_IFDIFKNOOOE_OFFSET UNITYSDK_OFFSET(0xC76A0C0)
#define CDIFPACDAAE_NLGNOELNBJM_OFFSET UNITYSDK_OFFSET(0xC769530)
#define CDIFPACDAAE_ODFMJCEEAIP_OFFSET UNITYSDK_OFFSET(0xC769EA0)
#define CDIFPACDAAE_SET_DETECTORCONFIG_OFFSET UNITYSDK_OFFSET(0xC769520)

inline static constexpr unsigned int CDIFPACDAAE_TypeDefinitionIndex = 75927;

	class CDIFPACDAAE : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::B51RacingTREventType, ::System::Collections::Generic::List_1<::System::UInt32>*>* CMDHEKHIKIK; // 0x10
		::KPDKCEAFBHI* PDENFEFCAGN; // 0x18
		::JIJBCGDANLJ* EEFMDEHLLFI; // 0x20
		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* _DetectorConfig_k__BackingField; // 0x28
		::System::Void _ctor(::JIJBCGDANLJ* a1, ::KPDKCEAFBHI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JIJBCGDANLJ*, ::KPDKCEAFBHI*))((::PBYTE)hIl2Cpp + CDIFPACDAAE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIFPACDAAE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* get_DetectorConfig()
		{
			return ((::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIFPACDAAE_GET_DETECTORCONFIG_OFFSET))(this);
		}

		::System::Void set_DetectorConfig(::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::RoadRashGameSettingsConfigure_RoadRashTREventDetectorConfig*))((::PBYTE)hIl2Cpp + CDIFPACDAAE_SET_DETECTORCONFIG_OFFSET))(this, a1);
		}

		::System::Void NLGNOELNBJM(::RPG::Client::RoadRash::MonoRoadRashGameSettings* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::RoadRash::MonoRoadRashGameSettings*))((::PBYTE)hIl2Cpp + CDIFPACDAAE_NLGNOELNBJM_OFFSET))(this, a1);
		}

		::System::Void GDALOHIALKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIFPACDAAE_GDALOHIALKP_OFFSET))(this);
		}

		::System::Boolean BNCGONPKIHA(::GHMGGIHEHJE* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHMGGIHEHJE*, ::System::UInt32))((::PBYTE)hIl2Cpp + CDIFPACDAAE_BNCGONPKIHA_OFFSET))(this, a1, a2);
		}

		::System::Int32 GHCEDOMCCNG(::GHMGGIHEHJE* a1, ::RPG::GameCore::B51RacingTREventType a2)
		{
			return ((::System::Int32(*)(::PVOID, ::GHMGGIHEHJE*, ::RPG::GameCore::B51RacingTREventType))((::PBYTE)hIl2Cpp + CDIFPACDAAE_GHCEDOMCCNG_OFFSET))(this, a1, a2);
		}

		::System::Void IFDIFKNOOOE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIFPACDAAE_IFDIFKNOOOE_OFFSET))(this);
		}

		::System::Boolean ODFMJCEEAIP(::RPG::GameCore::B51RacingTREventRow* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::B51RacingTREventRow*))((::PBYTE)hIl2Cpp + CDIFPACDAAE_ODFMJCEEAIP_OFFSET))(this, a1);
		}

		::System::UInt32 GJNHELMCHLG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIFPACDAAE_GJNHELMCHLG_OFFSET))(this);
		}

	};
