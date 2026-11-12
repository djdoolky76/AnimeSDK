#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define LEHLJKCJFKH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEEAA10)
#define LEHLJKCJFKH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xBEEAAB0)
#define LEHLJKCJFKH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xBEEAA20)

inline static constexpr unsigned int LEHLJKCJFKH_TypeDefinitionIndex = 61647;

	class LEHLJKCJFKH : public ::EFNJLACKEDH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + LEHLJKCJFKH_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHLJKCJFKH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LEHLJKCJFKH_HCOFMFKFMDK_OFFSET))(this);
		}

	};
