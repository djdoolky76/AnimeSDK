#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/B51Racing/B51RacingFallingLandingQteJudgeResult.h"
#include "unitysdk/System/Object.h"

#define JHGIHBAADPA_CTOR_OFFSET UNITYSDK_OFFSET(0xB9D33E0)
#define JHGIHBAADPA_FHLALJENMHB_OFFSET UNITYSDK_OFFSET(0xB9D3140)
#define JHGIHBAADPA_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB9D33A0)
#define JHGIHBAADPA_GET_PRESSSTATEDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0xB9D33C0)
#define JHGIHBAADPA_HAHDKBGEKHO_OFFSET UNITYSDK_OFFSET(0xB9D3330)
#define JHGIHBAADPA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB9D32B0)
#define JHGIHBAADPA_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xB9D3260)
#define JHGIHBAADPA_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB9D33B0)
#define JHGIHBAADPA_SET_PRESSSTATEDELAYSECONDS_OFFSET UNITYSDK_OFFSET(0xB9D33D0)

inline static constexpr unsigned int JHGIHBAADPA_TypeDefinitionIndex = 84659;

	class JHGIHBAADPA : public ::System::Object
	{
	public:
		::System::Single APNFJECJODF; // 0x10
		::System::Single KMHCAIPONMO; // 0x14
		::System::Single FEIHGBCIGLC; // 0x18
		::System::Single _PressStateDelaySeconds_k__BackingField; // 0x1C
		::System::Boolean _IsActive_k__BackingField; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGIHBAADPA_CTOR_OFFSET))(this);
		}

		::System::Void FHLALJENMHB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JHGIHBAADPA_FHLALJENMHB_OFFSET))(this, a1, a2);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGIHBAADPA_KHGIKBFDLFB_OFFSET))(this);
		}

		::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult JLANKNHFKCN(::System::Single a1)
		{
			return ((::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHGIHBAADPA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult HAHDKBGEKHO()
		{
			return ((::RPG::Client::B51Racing::B51RacingFallingLandingQteJudgeResult(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGIHBAADPA_HAHDKBGEKHO_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGIHBAADPA_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JHGIHBAADPA_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Single get_PressStateDelaySeconds()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGIHBAADPA_GET_PRESSSTATEDELAYSECONDS_OFFSET))(this);
		}

		::System::Void set_PressStateDelaySeconds(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHGIHBAADPA_SET_PRESSSTATEDELAYSECONDS_OFFSET))(this, a1);
		}

	};
