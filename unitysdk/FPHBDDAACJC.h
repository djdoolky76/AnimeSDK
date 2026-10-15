#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class Airline; }

#define FPHBDDAACJC_DIFNADAEMFB_OFFSET UNITYSDK_OFFSET(0x2E785B0)
#define FPHBDDAACJC_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x2E785F0)
#define FPHBDDAACJC_HHINHHJBHNA_OFFSET UNITYSDK_OFFSET(0x2E785D0)
#define FPHBDDAACJC_JFNGKBKANPE_OFFSET UNITYSDK_OFFSET(0x2E787E0)
#define FPHBDDAACJC_LNLFOJLNKCE_OFFSET UNITYSDK_OFFSET(0x2E78680)
#define FPHBDDAACJC_LPJOFJCLGMP_OFFSET UNITYSDK_OFFSET(0x2E78760)
#define FPHBDDAACJC_OKMDAGAADBA_OFFSET UNITYSDK_OFFSET(0x2E786F0)

inline static constexpr unsigned int FPHBDDAACJC_TypeDefinitionIndex = 59784;

	struct alignas(8) FPHBDDAACJC
	{
		::RPG::Client::Airline* BBLOHCHKFKD; // 0x10
		::UnityEngine::Vector3 JFAGECNFHJL; // 0x18
		::System::Single BBFOLEOPPPL; // 0x24
		::System::Single BJNKIKNBFOJ; // 0x28
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x2C
		::UnityEngine::Vector3 MJHEOHOADGF; // 0x38
		::UnityEngine::Quaternion NCBBBANOECE; // 0x44
		::UnityEngine::Vector3 DIFNADAEMFB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHBDDAACJC_DIFNADAEMFB_OFFSET))(this);
		}

		::UnityEngine::Vector3 HHINHHJBHNA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHBDDAACJC_HHINHHJBHNA_OFFSET))(this);
		}

		::System::Void DLAILGNMFGI(::RPG::Client::Airline* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Airline*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FPHBDDAACJC_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 LNLFOJLNKCE()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHBDDAACJC_LNLFOJLNKCE_OFFSET))(this);
		}

		::UnityEngine::Vector3 OKMDAGAADBA()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHBDDAACJC_OKMDAGAADBA_OFFSET))(this);
		}

		::System::Void LPJOFJCLGMP(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + FPHBDDAACJC_LPJOFJCLGMP_OFFSET))(this, a1, a2);
		}

		::System::Void JFNGKBKANPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHBDDAACJC_JFNGKBKANPE_OFFSET))(this);
		}

	};
