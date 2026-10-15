#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFNJLACKEDH.h"
class BKHHFIJCHEP;
class EEKIILDAMOL;

#define MGLOKMFANDD_CTOR_OFFSET UNITYSDK_OFFSET(0xB922450)
#define MGLOKMFANDD_EEBFMFBOIHN_OFFSET UNITYSDK_OFFSET(0xB922530)
#define MGLOKMFANDD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xB922460)

inline static constexpr unsigned int MGLOKMFANDD_TypeDefinitionIndex = 60377;

	class MGLOKMFANDD : public ::EFNJLACKEDH
	{
	public:
		::EEKIILDAMOL* DBMHCIDGGLF; // 0x18
		::System::UInt32 MOMHJEFJDOF; // 0x20
		::System::Void _ctor(::BKHHFIJCHEP* a1, ::System::UInt32 a2, ::EEKIILDAMOL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::BKHHFIJCHEP*, ::System::UInt32, ::EEKIILDAMOL*))((::PBYTE)hIl2Cpp + MGLOKMFANDD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLOKMFANDD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void EEBFMFBOIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGLOKMFANDD_EEBFMFBOIHN_OFFSET))(this);
		}

	};
