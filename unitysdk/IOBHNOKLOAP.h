#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEEEMFAEDLN.h"
class CLFIGBPHLHI;
class IOBHNOKLOAP;

#define IOBHNOKLOAP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x164FDC40)
#define IOBHNOKLOAP_CLONE_OFFSET UNITYSDK_OFFSET(0x164FDCC0)
#define IOBHNOKLOAP_CTOR_OFFSET UNITYSDK_OFFSET(0x164FDCA0)
#define IOBHNOKLOAP_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x164FDE40)
#define IOBHNOKLOAP_REVERSE_OFFSET UNITYSDK_OFFSET(0x164FDD50)
#define IOBHNOKLOAP_STEP_OFFSET UNITYSDK_OFFSET(0x164FDDE0)

	class IOBHNOKLOAP : public ::LEEEMFAEDLN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBHNOKLOAP_CTOR_OFFSET))(this);
		}

		static ::IOBHNOKLOAP* BPLPBPMEODA()
		{
			return ((::IOBHNOKLOAP*(*)())((::PBYTE)hIl2Cpp + IOBHNOKLOAP_BPLPBPMEODA_OFFSET))();
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBHNOKLOAP_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOBHNOKLOAP_REVERSE_OFFSET))(this);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IOBHNOKLOAP_STEP_OFFSET))(this, a1);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IOBHNOKLOAP_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
