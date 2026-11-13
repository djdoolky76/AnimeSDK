#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BOFJHGFAJBN.h"

#define KEBGBJKGKCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5D4110)
#define KEBGBJKGKCG_JDJGMHFGAPH_OFFSET UNITYSDK_OFFSET(0x1B5D41B0)
#define KEBGBJKGKCG_JPDHOPECIBM_OFFSET UNITYSDK_OFFSET(0x1B5D4170)
#define KEBGBJKGKCG_LKINLAMMGID_OFFSET UNITYSDK_OFFSET(0x1B5D4120)

inline static constexpr unsigned int KEBGBJKGKCG_TypeDefinitionIndex = 50730;

	class KEBGBJKGKCG : public ::BOFJHGFAJBN
	{
	public:
		::System::Boolean EIIMAEHCGBC; // 0x10
		::System::Byte _padding0[0x7];
		::System::Int64 OHLAKMEJKFA; // 0x18
		::System::Int64 CLLLKOCPFCC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBGBJKGKCG_CTOR_OFFSET))(this);
		}

		::System::Boolean LKINLAMMGID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBGBJKGKCG_LKINLAMMGID_OFFSET))(this);
		}

		::System::Int64 JPDHOPECIBM()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBGBJKGKCG_JPDHOPECIBM_OFFSET))(this);
		}

		::System::Int64 JDJGMHFGAPH()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBGBJKGKCG_JDJGMHFGAPH_OFFSET))(this);
		}

	};
