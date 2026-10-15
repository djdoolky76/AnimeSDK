#pragma once
#include "unitysdk/unitysdk.h"
class HFLKAOHICMK;
class ICBGIKEMGPE;
class LHDKHAJMJLD;
class MFKLCJHKNBK;

#define KBLELMJDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB30B770)
#define KBLELMJDBEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB30B900)

inline static constexpr unsigned int KBLELMJDBEA_TypeDefinitionIndex = 75752;

	class KBLELMJDBEA
	{
	public:
		::LHDKHAJMJLD* JEMEGKOIGOC; // 0x90
		::MFKLCJHKNBK* FKINCGODJEP; // 0x98
		::HFLKAOHICMK* GGLIEKAILAN; // 0xA0
		::ICBGIKEMGPE* OAOLJJHOIOO; // 0xA8
		::System::Void _ctor(::MFKLCJHKNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKLCJHKNBK*))((::PBYTE)hIl2Cpp + KBLELMJDBEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLELMJDBEA_DISPOSE_OFFSET))(this);
		}

	};
