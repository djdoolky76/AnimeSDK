#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class JCLBAEHIBLA;

#define EFCNEGMKHMH_CTOR_OFFSET UNITYSDK_OFFSET(0x13A48EA0)
#define EFCNEGMKHMH_DMJKBKMKKCG_OFFSET UNITYSDK_OFFSET(0x13A48FE0)
#define EFCNEGMKHMH_HCOFMFKFMDK_OFFSET UNITYSDK_OFFSET(0x13A48FA0)
#define EFCNEGMKHMH_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x13A48EC0)

inline static constexpr unsigned int EFCNEGMKHMH_TypeDefinitionIndex = 60366;

	class EFCNEGMKHMH : public ::EFNJLACKEDH
	{
	public:
		::JCLBAEHIBLA* NOKJFPPOHKM; // 0x18
		::System::Boolean JDPGFIBLFOP; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::JCLBAEHIBLA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::JCLBAEHIBLA*))((::PBYTE)hIl2Cpp + EFCNEGMKHMH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCNEGMKHMH_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Boolean HCOFMFKFMDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCNEGMKHMH_HCOFMFKFMDK_OFFSET))(this);
		}

		::System::Void DMJKBKMKKCG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFCNEGMKHMH_DMJKBKMKKCG_OFFSET))(this);
		}

	};
