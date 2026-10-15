#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define FOLFFPOMJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x158F74E0)
#define FOLFFPOMJAB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x158F74F0)

inline static constexpr unsigned int FOLFFPOMJAB_TypeDefinitionIndex = 77968;

	class FOLFFPOMJAB : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + FOLFFPOMJAB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOLFFPOMJAB_EXECUTE_OFFSET))(this);
		}

	};
