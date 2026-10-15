#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define BODEFMODBLM_CTOR_OFFSET UNITYSDK_OFFSET(0xC18D300)
#define BODEFMODBLM_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC18D310)

inline static constexpr unsigned int BODEFMODBLM_TypeDefinitionIndex = 77964;

	class BODEFMODBLM : public ::System::Object
	{
	public:
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x10
		::LMFOOOLDECA* PDENFEFCAGN; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BODEFMODBLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEFMODBLM_EXECUTE_OFFSET))(this);
		}

	};
