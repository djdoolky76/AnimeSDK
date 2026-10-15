#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ChenLing/ChenLingSoldierTeamType.h"
#include "unitysdk/System/Object.h"
class ALMFLCJCHKP;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define CNIKNHIFBHL_AGMLGLKNMAM_OFFSET UNITYSDK_OFFSET(0xDA4D6D0)
#define CNIKNHIFBHL_CEPJHGNMKJD_OFFSET UNITYSDK_OFFSET(0xDA4D3F0)
#define CNIKNHIFBHL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4D0D0)
#define CNIKNHIFBHL_DNPDNBCCCIA_OFFSET UNITYSDK_OFFSET(0xDA4D1B0)
#define CNIKNHIFBHL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDA4D0E0)
#define CNIKNHIFBHL_IJEPAJIMDPA_OFFSET UNITYSDK_OFFSET(0xDA4D4C0)
#define CNIKNHIFBHL_NLKBOAJDKBM_OFFSET UNITYSDK_OFFSET(0xDA4D120)

inline static constexpr unsigned int CNIKNHIFBHL_TypeDefinitionIndex = 77959;

	class CNIKNHIFBHL : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_EXECUTE_OFFSET))(this);
		}

		::System::Boolean NLKBOAJDKBM(::ALMFLCJCHKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_NLKBOAJDKBM_OFFSET))(this, a1);
		}

		::System::Void DNPDNBCCCIA(::ALMFLCJCHKP* a1, ::ALMFLCJCHKP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_DNPDNBCCCIA_OFFSET))(this, a1, a2);
		}

		::System::Void CEPJHGNMKJD(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_CEPJHGNMKJD_OFFSET))(this, a1);
		}

		::System::Void IJEPAJIMDPA(::ALMFLCJCHKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ALMFLCJCHKP*))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_IJEPAJIMDPA_OFFSET))(this, a1);
		}

		::System::Int32 AGMLGLKNMAM(::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::ChenLing::ChenLingSoldierTeamType, ::System::Int32))((::PBYTE)hIl2Cpp + CNIKNHIFBHL_AGMLGLKNMAM_OFFSET))(this, a1, a2);
		}

	};
