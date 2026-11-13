#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define FOLFFPOMJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x187572F0)
#define FOLFFPOMJAB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18757300)

inline static constexpr unsigned int FOLFFPOMJAB_TypeDefinitionIndex = 80702;

	class FOLFFPOMJAB : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + FOLFFPOMJAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLFFPOMJAB_EXECUTE_OFFSET))(this);
		}

	};
