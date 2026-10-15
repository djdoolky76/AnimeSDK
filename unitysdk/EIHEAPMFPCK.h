#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;

#define EIHEAPMFPCK_CTOR_OFFSET UNITYSDK_OFFSET(0x154C8170)
#define EIHEAPMFPCK_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0x154C6B10)

	class EIHEAPMFPCK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIHEAPMFPCK_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + EIHEAPMFPCK_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

	};
