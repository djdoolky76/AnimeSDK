#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AILLDGBCBGE;
class GGJFAFONDHN;
namespace System { template <typename T> class Action_1; }

#define MKIHACMGGFJ_CFONOLMGMKE_OFFSET UNITYSDK_OFFSET(0xB9923C0)
#define MKIHACMGGFJ_CLGDFDKFMHN_OFFSET UNITYSDK_OFFSET(0xB992410)
#define MKIHACMGGFJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB992260)
#define MKIHACMGGFJ_GOFPKBDJIDD_OFFSET UNITYSDK_OFFSET(0xB9922C0)
#define MKIHACMGGFJ_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xB992450)
#define MKIHACMGGFJ_LHMGOMFKMLB_OFFSET UNITYSDK_OFFSET(0xB992270)
#define MKIHACMGGFJ_NAOFMBFAHIM_OFFSET UNITYSDK_OFFSET(0xB992370)

inline static constexpr unsigned int MKIHACMGGFJ_TypeDefinitionIndex = 49193;

	class MKIHACMGGFJ : public ::System::Object
	{
	public:
		::System::Action_1<::GGJFAFONDHN*>* ECBJHOFHMDF; // 0x10
		::System::Action_1<::GGJFAFONDHN*>* FNPNOPHMBGD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_CTOR_OFFSET))(this);
		}

		::System::Boolean LHMGOMFKMLB(::AILLDGBCBGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AILLDGBCBGE*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_LHMGOMFKMLB_OFFSET))(this, a1);
		}

		::System::Void GOFPKBDJIDD(::GGJFAFONDHN* a1, ::GGJFAFONDHN* a2, ::System::Int32 a3, ::System::Action_1<::GGJFAFONDHN*>* a4, ::System::Action_1<::GGJFAFONDHN*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::GGJFAFONDHN*, ::GGJFAFONDHN*, ::System::Int32, ::System::Action_1<::GGJFAFONDHN*>*, ::System::Action_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_GOFPKBDJIDD_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NAOFMBFAHIM(::System::Action_1<::GGJFAFONDHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_NAOFMBFAHIM_OFFSET))(this, a1);
		}

		::System::Void CFONOLMGMKE(::System::Action_1<::GGJFAFONDHN*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::GGJFAFONDHN*>*))((::PBYTE)hIl2Cpp + MKIHACMGGFJ_CFONOLMGMKE_OFFSET))(this, a1);
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
