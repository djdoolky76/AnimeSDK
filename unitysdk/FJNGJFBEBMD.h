#pragma once
#include "unitysdk/unitysdk.h"

#define FJNGJFBEBMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA8C020)
#define FJNGJFBEBMD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x1AA8B8B0)
#define FJNGJFBEBMD_IDGNPDMICLA_OFFSET UNITYSDK_OFFSET(0x1AA8BBC0)
#define FJNGJFBEBMD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x1AA8BC40)

inline static constexpr unsigned int FJNGJFBEBMD_TypeDefinitionIndex = 70647;

	class FJNGJFBEBMD
	{
	public:
		::System::Single HPCHCEFOKJB; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNGJFBEBMD_CTOR_OFFSET))(this);
		}

		::System::Void GGNBOEIMEPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNGJFBEBMD_GGNBOEIMEPM_OFFSET))(this);
		}

		::System::Void IDGNPDMICLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJNGJFBEBMD_IDGNPDMICLA_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FJNGJFBEBMD_LJOLGCNKIEH_OFFSET))(this, a1);
		}

	};
