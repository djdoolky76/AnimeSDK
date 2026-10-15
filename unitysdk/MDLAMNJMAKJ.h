#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define MDLAMNJMAKJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB8AD5A0)
#define MDLAMNJMAKJ_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0xB8AD640)
#define MDLAMNJMAKJ_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB8AD5B0)

	class MDLAMNJMAKJ : public ::EFNJLACKEDH
	{
	public:
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDLAMNJMAKJ_HCOFMFKFMDK_OFFSET))(this);
		}

	};
