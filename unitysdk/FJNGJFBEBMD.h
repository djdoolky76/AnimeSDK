#pragma once
#include "unitysdk/unitysdk.h"

#define FJNGJFBEBMD_CTOR_OFFSET UNITYSDK_OFFSET(0x157D6E80)
#define FJNGJFBEBMD_GGNBOEIMEPM_OFFSET UNITYSDK_OFFSET(0x157D6710)
#define FJNGJFBEBMD_IDGNPDMICLA_OFFSET UNITYSDK_OFFSET(0x157D6A20)
#define FJNGJFBEBMD_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x157D6AA0)

inline static constexpr unsigned int FJNGJFBEBMD_TypeDefinitionIndex = 68695;

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
