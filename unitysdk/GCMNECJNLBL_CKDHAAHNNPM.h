#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define GCMNECJNLBL_CKDHAAHNNPM_CTOR_OFFSET UNITYSDK_OFFSET(0x1597A330)
#define GCMNECJNLBL_CKDHAAHNNPM_DDDMAIBBMAH_OFFSET UNITYSDK_OFFSET(0x1597A440)
#define GCMNECJNLBL_CKDHAAHNNPM_KAOLPGACCID_OFFSET UNITYSDK_OFFSET(0x1597A4A0)
#define GCMNECJNLBL_CKDHAAHNNPM_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1597A370)

inline static constexpr unsigned int GCMNECJNLBL_CKDHAAHNNPM_TypeDefinitionIndex = 49216;

	class GCMNECJNLBL_CKDHAAHNNPM : public ::System::Object
	{
	public:
		::System::Action_1<::System::Object*>* BPGKFFHGDLD; // 0x10
		::System::Single LIGCMPFHGJJ; // 0x18
		::System::Int32 JAIBONACADL; // 0x1C
		::System::Single JDLOGDBCNMI; // 0x20
		::System::Void _ctor(::System::Action_1<::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + GCMNECJNLBL_CKDHAAHNNPM_CTOR_OFFSET))(this, a1);
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
