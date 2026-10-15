#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;

#define ADGLBEFDICE_CTOR_OFFSET UNITYSDK_OFFSET(0xB138E10)
#define ADGLBEFDICE_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0xB138A30)

inline static constexpr unsigned int ADGLBEFDICE_TypeDefinitionIndex = 53682;

	class ADGLBEFDICE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADGLBEFDICE_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + ADGLBEFDICE_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

	};
