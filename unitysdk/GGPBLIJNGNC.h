#pragma once
#include "unitysdk/unitysdk.h"

#define GGPBLIJNGNC_ABJEAOFLEMP_OFFSET UNITYSDK_OFFSET(0x2E7B4F0)
#define GGPBLIJNGNC_GET_USEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xC200)
#define GGPBLIJNGNC_JIFDKLOLIAM_OFFSET UNITYSDK_OFFSET(0x2E7B540)
#define GGPBLIJNGNC_KKLEKNMOJGB_OFFSET UNITYSDK_OFFSET(0x2E7B4E0)
#define GGPBLIJNGNC_MIKLAEBGDPC_OFFSET UNITYSDK_OFFSET(0x2E7B490)
#define GGPBLIJNGNC_SET_USEFULLSCREENBLOCK_OFFSET UNITYSDK_OFFSET(0xE7630)

inline static constexpr unsigned int GGPBLIJNGNC_TypeDefinitionIndex = 80501;

	struct alignas(4) GGPBLIJNGNC
	{
		::System::Boolean _UseFullScreenBlock_k__BackingField; // 0x10
		::System::Boolean NJFMHIGGHPD; // 0x11
		::System::Boolean LMFJCONGPKL; // 0x12
		::System::Boolean get_UseFullScreenBlock()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_GET_USEFULLSCREENBLOCK_OFFSET))(this);
		}

		::System::Void set_UseFullScreenBlock(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_SET_USEFULLSCREENBLOCK_OFFSET))(this, a1);
		}

		::System::Boolean MIKLAEBGDPC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_MIKLAEBGDPC_OFFSET))(this);
		}

		::System::Void KKLEKNMOJGB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_KKLEKNMOJGB_OFFSET))(this, a1);
		}

		::System::Boolean ABJEAOFLEMP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_ABJEAOFLEMP_OFFSET))(this);
		}

		::System::Void JIFDKLOLIAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGPBLIJNGNC_JIFDKLOLIAM_OFFSET))(this, a1);
		}

	};
