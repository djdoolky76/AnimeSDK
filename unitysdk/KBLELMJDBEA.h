#pragma once
#include "unitysdk/unitysdk.h"
class HFLKAOHICMK;
class ICBGIKEMGPE;
class LHDKHAJMJLD;
class MFKLCJHKNBK;

#define KBLELMJDBEA_CTOR_OFFSET UNITYSDK_OFFSET(0xB312290)
#define KBLELMJDBEA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB312420)

inline static constexpr unsigned int KBLELMJDBEA_TypeDefinitionIndex = 75753;

	class KBLELMJDBEA
	{
	public:
		::HFLKAOHICMK* GGLIEKAILAN; // 0x90
		::MFKLCJHKNBK* FKINCGODJEP; // 0x98
		::ICBGIKEMGPE* OAOLJJHOIOO; // 0xA0
		::LHDKHAJMJLD* JEMEGKOIGOC; // 0xA8
		::System::Void _ctor(::MFKLCJHKNBK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MFKLCJHKNBK*))((::PBYTE)hIl2Cpp + KBLELMJDBEA_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLELMJDBEA_DISPOSE_OFFSET))(this);
		}

	};
