#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define HBJFGFAFGDN_CTOR_OFFSET UNITYSDK_OFFSET(0x15BFE090)
#define HBJFGFAFGDN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15BFE0A0)

inline static constexpr unsigned int HBJFGFAFGDN_TypeDefinitionIndex = 77963;

	class HBJFGFAFGDN : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + HBJFGFAFGDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBJFGFAFGDN_EXECUTE_OFFSET))(this);
		}

	};
