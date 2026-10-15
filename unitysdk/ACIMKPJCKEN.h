#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;

#define ACIMKPJCKEN_CTOR_OFFSET UNITYSDK_OFFSET(0xB120DC0)
#define ACIMKPJCKEN_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xB120D50)

inline static constexpr unsigned int ACIMKPJCKEN_TypeDefinitionIndex = 53681;

	class ACIMKPJCKEN : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACIMKPJCKEN_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + ACIMKPJCKEN_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

	};
