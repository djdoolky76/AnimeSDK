#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define LEHLJKCJFKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB64D4C0)
#define LEHLJKCJFKH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB64D560)
#define LEHLJKCJFKH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB64D4D0)

inline static constexpr unsigned int LEHLJKCJFKH_TypeDefinitionIndex = 60362;

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
