#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KMMMFMMGLAN;
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define GIPBBKCIALO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3F2020)
#define GIPBBKCIALO_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A3F2030)

inline static constexpr unsigned int GIPBBKCIALO_TypeDefinitionIndex = 80687;

	class GIPBBKCIALO : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::KMMMFMMGLAN* JJBOPOPCOCH; // 0x18
		::LMFOOOLDECA* PDENFEFCAGN; // 0x20
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + GIPBBKCIALO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIPBBKCIALO_EXECUTE_OFFSET))(this);
		}

	};
