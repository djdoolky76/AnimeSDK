#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HDJIGMBHENE.h"

#define CLOCEKHBDOH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA1E4D0)
#define CLOCEKHBDOH_DBPODDAKAJO_OFFSET UNITYSDK_OFFSET(0xDA1E4F0)
#define CLOCEKHBDOH_DDCKBMBLMLP_OFFSET UNITYSDK_OFFSET(0xDA1E680)
#define CLOCEKHBDOH__PHASEEXIT_B__1_0_OFFSET UNITYSDK_OFFSET(0xDA1E7C0)
#define CLOCEKHBDOH___EXITTOTOWNBYSERVERQUITNOTIFY_B__2_0_OFFSET UNITYSDK_OFFSET(0xDA1E810)

inline static constexpr unsigned int CLOCEKHBDOH_TypeDefinitionIndex = 61178;

	class CLOCEKHBDOH : public ::HDJIGMBHENE
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOCEKHBDOH_CTOR_OFFSET))(this);
		}

		::System::Void DBPODDAKAJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOCEKHBDOH_DBPODDAKAJO_OFFSET))(this);
		}

		::System::Void DDCKBMBLMLP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOCEKHBDOH_DDCKBMBLMLP_OFFSET))(this);
		}

		::System::Void _PhaseExit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOCEKHBDOH__PHASEEXIT_B__1_0_OFFSET))(this);
		}

		::System::Void __ExitToTownByServerQuitNotify_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOCEKHBDOH___EXITTOTOWNBYSERVERQUITNOTIFY_B__2_0_OFFSET))(this);
		}

	};
