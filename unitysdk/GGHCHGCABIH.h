#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;

#define GGHCHGCABIH_CTOR_OFFSET UNITYSDK_OFFSET(0x159F8D40)
#define GGHCHGCABIH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x159F8DF0)
#define GGHCHGCABIH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x159F8D50)

inline static constexpr unsigned int GGHCHGCABIH_TypeDefinitionIndex = 60356;

	class GGHCHGCABIH : public ::EFNJLACKEDH
	{
	public:
		::System::Boolean INJJGMIGFFD; // 0x18
		::System::Void _ctor(::BKHHFIJCHEP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*))((::PBYTE)hIl2Cpp + GGHCHGCABIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHCHGCABIH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGHCHGCABIH_HCOFMFKFMDK_OFFSET))(this);
		}

	};
