#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define GCMNECJNLBL_CKDHAAHNNPM_CTOR_OFFSET UNITYSDK_OFFSET(0x15985300)
#define GCMNECJNLBL_CKDHAAHNNPM_DDDMAIBBMAH_OFFSET UNITYSDK_OFFSET(0x15985410)
#define GCMNECJNLBL_CKDHAAHNNPM_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x15985470)
#define GCMNECJNLBL_CKDHAAHNNPM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x15985340)

	class GCMNECJNLBL_CKDHAAHNNPM : public ::System::Object
	{
	public:
		::System::Action* BPGKFFHGDLD; // 0x10
		::System::Int32 JAIBONACADL; // 0x18
		::System::Single LIGCMPFHGJJ; // 0x1C
		::System::Single JDLOGDBCNMI; // 0x20
		::System::Void _ctor(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CKDHAAHNNPM_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean PAGKOAEOLKA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CKDHAAHNNPM_PAGKOAEOLKA_OFFSET))(this);
		}

		::System::Void DDDMAIBBMAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CKDHAAHNNPM_DDDMAIBBMAH_OFFSET))(this);
		}

		::System::Void KAOLPGACCID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CKDHAAHNNPM_KAOLPGACCID_OFFSET))(this);
		}

	};
