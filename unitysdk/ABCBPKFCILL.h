#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PNIFMEAJAEB;

#define ABCBPKFCILL_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EBF30)
#define ABCBPKFCILL_GAFHBCDPFOM_OFFSET UNITYSDK_OFFSET(0xB0EBE80)
#define ABCBPKFCILL_KDKCABHPPGK_OFFSET UNITYSDK_OFFSET(0xB0EBDD0)

	class ABCBPKFCILL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABCBPKFCILL_CTOR_OFFSET))(this);
		}

		::System::Void KDKCABHPPGK(::PNIFMEAJAEB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNIFMEAJAEB*, ::System::Int32))((::PBYTE)hIl2Cpp + ABCBPKFCILL_KDKCABHPPGK_OFFSET))(this, a1, a2);
		}

		::System::Void GAFHBCDPFOM(::PNIFMEAJAEB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::PNIFMEAJAEB*, ::System::Int32))((::PBYTE)hIl2Cpp + ABCBPKFCILL_GAFHBCDPFOM_OFFSET))(this, a1, a2);
		}

	};
