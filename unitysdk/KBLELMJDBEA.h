#pragma once
#include "unitysdk/unitysdk.h"
class HFLKAOHICMK;
class ICBGIKEMGPE;
class LHDKHAJMJLD;
class MFKLCJHKNBK;

#define KBLELMJDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xBB9C3C0)
#define KBLELMJDBEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB9C550)

inline static constexpr unsigned int KBLELMJDBEA_TypeDefinitionIndex = 78080;

	class KBLELMJDBEA
	{
	public:
		::ICBGIKEMGPE* OAOLJJHOIOO; // 0x90
		::MFKLCJHKNBK* FKINCGODJEP; // 0x98
		::LHDKHAJMJLD* JEMEGKOIGOC; // 0xA0
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
