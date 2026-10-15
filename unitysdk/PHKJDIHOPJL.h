#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;

#define PHKJDIHOPJL_CTOR_OFFSET UNITYSDK_OFFSET(0xC24C410)
#define PHKJDIHOPJL_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xC24BAE0)

inline static constexpr unsigned int PHKJDIHOPJL_TypeDefinitionIndex = 53686;

	class PHKJDIHOPJL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKJDIHOPJL_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + PHKJDIHOPJL_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

	};
