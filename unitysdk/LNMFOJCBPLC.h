#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
class FNHGDJOJACD;

#define LNMFOJCBPLC_MHCCKABLLNJ_OFFSET UNITYSDK_OFFSET(0xE630)
#define LNMFOJCBPLC_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0x1B300)

inline static constexpr unsigned int LNMFOJCBPLC_TypeDefinitionIndex = 56954;

	struct alignas(8) LNMFOJCBPLC
	{
		::FNHGDJOJACD* JFFKGAPHAMP; // 0x10
		::System::Single GFCFHLJEHMC; // 0x18
		::RPG::MVector3 LJDHGFECMHJ; // 0x1C
		::System::Void PJPFIHFAHGO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMFOJCBPLC_PJPFIHFAHGO_OFFSET))(this);
		}

		::System::Boolean MHCCKABLLNJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNMFOJCBPLC_MHCCKABLLNJ_OFFSET))(this);
		}

	};
