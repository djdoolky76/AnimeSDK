#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KKAKDKDKNKM.h"

#define NPMNBIGNDMO_CLEAR_OFFSET UNITYSDK_OFFSET(0xBD10200)
#define NPMNBIGNDMO_CTOR_OFFSET UNITYSDK_OFFSET(0xBD10440)
#define NPMNBIGNDMO_NOMLNGPMDLO_OFFSET UNITYSDK_OFFSET(0xBD10250)

inline static constexpr unsigned int NPMNBIGNDMO_TypeDefinitionIndex = 70868;

	class NPMNBIGNDMO : public ::KKAKDKDKNKM
	{
	public:
		::System::Single BEJHNOKAGGF; // 0x48
		// static const ::System::Object OOHALKCBMAF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMNBIGNDMO_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPMNBIGNDMO_CLEAR_OFFSET))(this);
		}

		::System::Void NOMLNGPMDLO(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPMNBIGNDMO_NOMLNGPMDLO_OFFSET))(this, a1, a2);
		}

	};
