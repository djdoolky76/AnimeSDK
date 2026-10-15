#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define LEHLJKCJFKH_CTOR_OFFSET UNITYSDK_OFFSET(0xB653FE0)
#define LEHLJKCJFKH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB654080)
#define LEHLJKCJFKH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB653FF0)

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
