#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
class KDFFHMDFALG;

#define GIGPDDIPAPO_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x15A2B9F0)
#define GIGPDDIPAPO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A2BCF0)
#define GIGPDDIPAPO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A2BA90)
#define GIGPDDIPAPO_FJKDMEOBHBA_OFFSET UNITYSDK_OFFSET(0x15A2BAE0)
#define GIGPDDIPAPO_PIJIDIEEIAN_OFFSET UNITYSDK_OFFSET(0x15A2BB30)

inline static constexpr unsigned int GIGPDDIPAPO_TypeDefinitionIndex = 60619;

	class GIGPDDIPAPO : public ::NPEBLEKDAGI
	{
	public:
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x10
		::System::Single JAAMGHJCIED; // 0x18
		::System::Single HAGCHNHIMOH; // 0x1C
		::System::Single PICIJOFPDHL; // 0x20
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
