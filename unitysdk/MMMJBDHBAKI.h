#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define MMMJBDHBAKI_CTOR_OFFSET UNITYSDK_OFFSET(0x189032D0)
#define MMMJBDHBAKI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x189032E0)

inline static constexpr unsigned int MMMJBDHBAKI_TypeDefinitionIndex = 80680;

	class MMMJBDHBAKI : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + MMMJBDHBAKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMJBDHBAKI_EXECUTE_OFFSET))(this);
		}

	};
