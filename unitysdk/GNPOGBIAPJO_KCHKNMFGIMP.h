#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define GNPOGBIAPJO_KCHKNMFGIMP_BDNJFEENOOF_OFFSET UNITYSDK_OFFSET(0x14D063F0)
#define GNPOGBIAPJO_KCHKNMFGIMP_ECPLGPKBKEL_OFFSET UNITYSDK_OFFSET(0x14D06670)
#define GNPOGBIAPJO_KCHKNMFGIMP_ENADCIEBIBL_OFFSET UNITYSDK_OFFSET(0x7489B0)

inline static constexpr unsigned int GNPOGBIAPJO_KCHKNMFGIMP_TypeDefinitionIndex = 82747;

struct alignas(4) GNPOGBIAPJO_KCHKNMFGIMP
{
	::System::Single FBGDCNKADOA; // 0x10
	::System::Single FMGAKGMJFKM; // 0x14
	::System::Single ILHNGLGGBNP; // 0x18
	::System::Single LLJPJPLEMBL; // 0x1C

	::System::Void ENADCIEBIBL(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNPOGBIAPJO_KCHKNMFGIMP_ENADCIEBIBL_OFFSET))(this, OHOGDOMNHNK, JBCNPOHMGPE);
	}

	static ::System::Void ECPLGPKBKEL(::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 KBHFBLJPFJH, ::UnityEngine::Color JBBFCGAMDHI, ::System::Single NCCDJLDKFGA, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Void(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GNPOGBIAPJO_KCHKNMFGIMP_ECPLGPKBKEL_OFFSET))(OHOGDOMNHNK, KBHFBLJPFJH, JBBFCGAMDHI, NCCDJLDKFGA, MDPPNMIPDMP);
	}

	static ::System::Void BDNJFEENOOF(::UnityEngine::Color JBBFCGAMDHI, ::System::Single NCCDJLDKFGA, ::UnityEngine::Vector3 OHOGDOMNHNK, ::UnityEngine::Vector3 JBCNPOHMGPE)
	{
		return ((::System::Void(*)(::UnityEngine::Color, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GNPOGBIAPJO_KCHKNMFGIMP_BDNJFEENOOF_OFFSET))(JBBFCGAMDHI, NCCDJLDKFGA, OHOGDOMNHNK, JBCNPOHMGPE);
	}
};
