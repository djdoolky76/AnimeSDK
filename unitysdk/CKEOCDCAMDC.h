#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define CKEOCDCAMDC_CTOR_OFFSET UNITYSDK_OFFSET(0xD759240)
#define CKEOCDCAMDC_DBPODDAKAJO_OFFSET UNITYSDK_OFFSET(0xD759260)
#define CKEOCDCAMDC_DDCKBMBLMLP_OFFSET UNITYSDK_OFFSET(0xD759400)
#define CKEOCDCAMDC__PHASEEXIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xD759540)
#define CKEOCDCAMDC___EXITTOTOWNBYSERVERQUITNOTIFY_B__2_0_OFFSET UNITYSDK_OFFSET(0xD759590)

inline static constexpr unsigned int CKEOCDCAMDC_TypeDefinitionIndex = 61172;

	class CKEOCDCAMDC : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOCDCAMDC_CTOR_OFFSET))(this);
		}

		::System::Void DBPODDAKAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOCDCAMDC_DBPODDAKAJO_OFFSET))(this);
		}

		::System::Void DDCKBMBLMLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOCDCAMDC_DDCKBMBLMLP_OFFSET))(this);
		}

		::System::Void _PhaseExit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOCDCAMDC__PHASEEXIT_B__1_0_OFFSET))(this);
		}

		::System::Void __ExitToTownByServerQuitNotify_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKEOCDCAMDC___EXITTOTOWNBYSERVERQUITNOTIFY_B__2_0_OFFSET))(this);
		}

	};
