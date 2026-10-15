#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LMHBFGADIMD;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ELANINIDLGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1551BB10)
#define ELANINIDLGJ_DAMJNBFPPIG_OFFSET UNITYSDK_OFFSET(0x1551AE90)
#define ELANINIDLGJ_ELNMLHFNKCA_OFFSET UNITYSDK_OFFSET(0x1551AEF0)
#define ELANINIDLGJ_HMJLPDDIFHD_OFFSET UNITYSDK_OFFSET(0x1551B6F0)
#define ELANINIDLGJ_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x1551B970)
#define ELANINIDLGJ_NJDMJODMLFF_OFFSET UNITYSDK_OFFSET(0x1551AE00)
#define ELANINIDLGJ_OCKDFBGAFNM_OFFSET UNITYSDK_OFFSET(0x1551B430)

	class ELANINIDLGJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LMHBFGADIMD*>* GDEEJGLLLHA; // 0x10
		::System::Int32 NCDEGDCPCHN; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_CTOR_OFFSET))(this);
		}

		::LMHBFGADIMD* NJDMJODMLFF()
		{
			return ((::LMHBFGADIMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_NJDMJODMLFF_OFFSET))(this);
		}

		::System::Boolean DAMJNBFPPIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_DAMJNBFPPIG_OFFSET))(this);
		}

		::System::Void ELNMLHFNKCA(::System::Collections::Generic::IEnumerable_1<::LMHBFGADIMD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::LMHBFGADIMD*>*))((::PBYTE)hIl2Cpp + ELANINIDLGJ_ELNMLHFNKCA_OFFSET))(this, a1);
		}

		::System::Boolean OCKDFBGAFNM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_OCKDFBGAFNM_OFFSET))(this);
		}

		::System::Void HMJLPDDIFHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_HMJLPDDIFHD_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELANINIDLGJ_KHGIKBFDLFB_OFFSET))(this);
		}

	};
