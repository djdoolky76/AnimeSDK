#pragma once
#include "unitysdk/unitysdk.h"
class HFLKAOHICMK;
class ICBGIKEMGPE;
class LHDKHAJMJLD;
class MFKLCJHKNBK;

#define KBLELMJDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0x1A45E000)
#define KBLELMJDBEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A45E180)

inline static constexpr unsigned int KBLELMJDBEA_TypeDefinitionIndex = 78079;

	class KBLELMJDBEA
	{
	public:
		::MFKLCJHKNBK* FKINCGODJEP; // 0x90
		::LHDKHAJMJLD* JEMEGKOIGOC; // 0x98
		::ICBGIKEMGPE* OAOLJJHOIOO; // 0xA0
		::HFLKAOHICMK* GGLIEKAILAN; // 0xA8
		::System::Void _ctor(::MFKLCJHKNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKLCJHKNBK*))((::PBYTE)hIl2Cpp + KBLELMJDBEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLELMJDBEA_DISPOSE_OFFSET))(this);
		}

	};
