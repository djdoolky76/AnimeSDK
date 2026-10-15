#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
class KDFFHMDFALG;

#define GIGPDDIPAPO_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x15A373F0)
#define GIGPDDIPAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A376F0)
#define GIGPDDIPAPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A37490)
#define GIGPDDIPAPO_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0x15A374E0)
#define GIGPDDIPAPO_PIJIDIEEIAN_OFFSET UNITYSDK_OFFSET(0x15A37530)

	class GIGPDDIPAPO : public ::NPEBLEKDAGI
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Single HAGCHNHIMOH; // 0x18
		::System::Single PICIJOFPDHL; // 0x1C
		::System::Single JAAMGHJCIED; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGPDDIPAPO_CTOR_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + GIGPDDIPAPO_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIGPDDIPAPO_DISPOSE_OFFSET))(this);
		}

		::System::Void FJKDMEOBHBA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GIGPDDIPAPO_FJKDMEOBHBA_OFFSET))(this, a1);
		}

		::System::Void PIJIDIEEIAN(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GIGPDDIPAPO_PIJIDIEEIAN_OFFSET))(this, a1, a2, a3);
		}

	};
