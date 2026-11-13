#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define BODEFMODBLM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A7829F0)
#define BODEFMODBLM_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A782A00)

inline static constexpr unsigned int BODEFMODBLM_TypeDefinitionIndex = 80699;

	class BODEFMODBLM : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + BODEFMODBLM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BODEFMODBLM_EXECUTE_OFFSET))(this);
		}

	};
