#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMFOOOLDECA;
class OMNJCDDMLHI;

#define PJNIJPDLPKN_CTOR_OFFSET UNITYSDK_OFFSET(0xC29C9B0)
#define PJNIJPDLPKN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC29C9C0)

	class PJNIJPDLPKN : public ::System::Object
	{
	public:
		::LMFOOOLDECA* PDENFEFCAGN; // 0x10
		::OMNJCDDMLHI* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::OMNJCDDMLHI* a1, ::LMFOOOLDECA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::OMNJCDDMLHI*, ::LMFOOOLDECA*))((::PBYTE)hIl2Cpp + PJNIJPDLPKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJNIJPDLPKN_EXECUTE_OFFSET))(this);
		}

	};
