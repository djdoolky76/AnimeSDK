#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/DesignDataShortNameHash.h"
class DIBNHEICGAF;
class FDEFKDGAIBG;
class IOCHHFCPICD;
namespace RPG::Client { class DesignDataMgr; }
namespace System { class String; }

#define AGKEILLNKIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C428CF0)
#define AGKEILLNKIC_GKJANNLBOOH_OFFSET UNITYSDK_OFFSET(0x1C428EB0)
#define AGKEILLNKIC_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C428E70)
#define AGKEILLNKIC_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1C428D00)
#define AGKEILLNKIC_PIHIHEGGAHC_1_OFFSET UNITYSDK_OFFSET(0x1C429360)
#define AGKEILLNKIC_PIHIHEGGAHC_OFFSET UNITYSDK_OFFSET(0x1C4290F0)

	class AGKEILLNKIC : public ::System::Object
	{
	public:
		::FDEFKDGAIBG* AFBEFGELJLI; // 0x10
		::RPG::Client::DesignDataMgr* FAAIABAMEAM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKEILLNKIC_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKEILLNKIC_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKEILLNKIC_HADOHLNHHGB_OFFSET))(this);
		}

		::IOCHHFCPICD* GKJANNLBOOH()
		{
			return ((::IOCHHFCPICD*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGKEILLNKIC_GKJANNLBOOH_OFFSET))(this);
		}

		::DIBNHEICGAF* PIHIHEGGAHC(::System::String* a1, ::DIBNHEICGAF* a2)
		{
			return ((::DIBNHEICGAF*(*)(::PVOID, ::System::String*, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + AGKEILLNKIC_PIHIHEGGAHC_OFFSET))(this, a1, a2);
		}

		::IOCHHFCPICD* PIHIHEGGAHC_1(::RPG::Client::DesignDataShortNameHash a1, ::DIBNHEICGAF* a2)
		{
			return ((::IOCHHFCPICD*(*)(::PVOID, ::RPG::Client::DesignDataShortNameHash, ::DIBNHEICGAF*))((::PBYTE)hIl2Cpp + AGKEILLNKIC_PIHIHEGGAHC_1_OFFSET))(this, a1, a2);
		}

	};
