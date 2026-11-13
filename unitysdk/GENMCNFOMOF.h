#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NOJEJFMMCEG.h"
class FPNHGPEICOG;

#define GENMCNFOMOF_CTOR_OFFSET UNITYSDK_OFFSET(0x17CE4540)
#define GENMCNFOMOF_ILOHHJDPDBE_OFFSET UNITYSDK_OFFSET(0x17CE3D80)

inline static constexpr unsigned int GENMCNFOMOF_TypeDefinitionIndex = 54847;

	class GENMCNFOMOF : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GENMCNFOMOF_CTOR_OFFSET))(this);
		}

		::System::Boolean ILOHHJDPDBE(::FPNHGPEICOG* a1, ::FPNHGPEICOG* a2, ::NOJEJFMMCEG a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::FPNHGPEICOG*, ::FPNHGPEICOG*, ::NOJEJFMMCEG))((::PBYTE)hIl2Cpp + GENMCNFOMOF_ILOHHJDPDBE_OFFSET))(this, a1, a2, a3);
		}

	};
