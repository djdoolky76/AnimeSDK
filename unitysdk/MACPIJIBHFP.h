#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OEIFBAOFJPM.h"
class CMLCFCEKKLN;
class DDFBIDHLOPI;
namespace RPG::GameCore { class FiveDimLeverSwitchConfig; }

#define MACPIJIBHFP_EPHIKGMGPMM_OFFSET UNITYSDK_OFFSET(0x1C923150)
#define MACPIJIBHFP_FPMGCNEANEC_OFFSET UNITYSDK_OFFSET(0x1C922DE0)
#define MACPIJIBHFP_GLFOKKHJELO_OFFSET UNITYSDK_OFFSET(0x1C922EA0)
#define MACPIJIBHFP_IJIHKMMOLPE_OFFSET UNITYSDK_OFFSET(0x1C922FD0)
#define MACPIJIBHFP_KMKFOOCNJEE_OFFSET UNITYSDK_OFFSET(0x1C9232D0)

	class MACPIJIBHFP : public ::System::Object
	{
	public:
		static ::CMLCFCEKKLN* FPMGCNEANEC(::DDFBIDHLOPI* a1)
		{
			return ((::CMLCFCEKKLN*(*)(::DDFBIDHLOPI*))((::PBYTE)hIl2Cpp + MACPIJIBHFP_FPMGCNEANEC_OFFSET))(a1);
		}

		static ::System::Boolean GLFOKKHJELO(::DDFBIDHLOPI* a1)
		{
			return ((::System::Boolean(*)(::DDFBIDHLOPI*))((::PBYTE)hIl2Cpp + MACPIJIBHFP_GLFOKKHJELO_OFFSET))(a1);
		}

		static ::System::Void IJIHKMMOLPE(::DDFBIDHLOPI* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig* a2, ::OEIFBAOFJPM a3)
		{
			return ((::System::Void(*)(::DDFBIDHLOPI*, ::RPG::GameCore::FiveDimLeverSwitchConfig*, ::OEIFBAOFJPM))((::PBYTE)hIl2Cpp + MACPIJIBHFP_IJIHKMMOLPE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EPHIKGMGPMM(::DDFBIDHLOPI* a1, ::RPG::GameCore::FiveDimLeverSwitchConfig* a2, ::OEIFBAOFJPM a3)
		{
			return ((::System::Void(*)(::DDFBIDHLOPI*, ::RPG::GameCore::FiveDimLeverSwitchConfig*, ::OEIFBAOFJPM))((::PBYTE)hIl2Cpp + MACPIJIBHFP_EPHIKGMGPMM_OFFSET))(a1, a2, a3);
		}

		static ::System::Void KMKFOOCNJEE(::DDFBIDHLOPI* a1)
		{
			return ((::System::Void(*)(::DDFBIDHLOPI*))((::PBYTE)hIl2Cpp + MACPIJIBHFP_KMKFOOCNJEE_OFFSET))(a1);
		}

	};
