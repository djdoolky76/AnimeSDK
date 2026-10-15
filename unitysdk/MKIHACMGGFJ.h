#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AILLDGBCBGE;
class GGJFAFONDHN;
namespace System { class Action; }

#define MKIHACMGGFJ_CFONOLMGMKE_OFFSET UNITYSDK_OFFSET(0xB9981E0)
#define MKIHACMGGFJ_CLGDFDKFMHN_OFFSET UNITYSDK_OFFSET(0xB998230)
#define MKIHACMGGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB998080)
#define MKIHACMGGFJ_GOFPKBDJIDD_OFFSET UNITYSDK_OFFSET(0xB9980E0)
#define MKIHACMGGFJ_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xB998270)
#define MKIHACMGGFJ_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0xB998090)
#define MKIHACMGGFJ_NAOFMBFAHIM_OFFSET UNITYSDK_OFFSET(0xB998190)

	class MKIHACMGGFJ : public ::System::Object
	{
	public:
		::System::Action* FNPNOPHMBGD; // 0x10
		::System::Action* ECBJHOFHMDF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_CTOR_OFFSET))(this);
		}

		::System::Boolean LHMGOMFKMLB(::AILLDGBCBGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AILLDGBCBGE*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void GOFPKBDJIDD(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2, ::System::Int32 a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*, ::System::Int32, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_GOFPKBDJIDD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NAOFMBFAHIM(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_NAOFMBFAHIM_OFFSET))(this, a1);
		}

		::System::Void CFONOLMGMKE(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_CFONOLMGMKE_OFFSET))(this, a1);
		}

		::System::Void CLGDFDKFMHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_CLGDFDKFMHN_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_KHNCMBEFIKI_OFFSET))(this, a1);
		}

	};
