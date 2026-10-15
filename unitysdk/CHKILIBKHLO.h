#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LEMPCCICHAA.h"
class MLPJPKIJGGF;
namespace System { class Exception; }
namespace System { class String; }

#define CHKILIBKHLO_CTOR_OFFSET UNITYSDK_OFFSET(0xCF55470)
#define CHKILIBKHLO_DLJPFLBIEKH_OFFSET UNITYSDK_OFFSET(0xCF551B0)
#define CHKILIBKHLO_EFOHNMGNCNK_OFFSET UNITYSDK_OFFSET(0xCF55140)
#define CHKILIBKHLO_FMJBFKGPEPP_OFFSET UNITYSDK_OFFSET(0xCF55300)
#define CHKILIBKHLO_KAJOBJFIAMJ_OFFSET UNITYSDK_OFFSET(0xCF550D0)
#define CHKILIBKHLO_OBGMNDEELJM_OFFSET UNITYSDK_OFFSET(0xCF55370)

	class CHKILIBKHLO : public ::LEMPCCICHAA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKILIBKHLO_CTOR_OFFSET))(this);
		}

		::System::String* KAJOBJFIAMJ()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKILIBKHLO_KAJOBJFIAMJ_OFFSET))(this);
		}

		::System::Void EFOHNMGNCNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKILIBKHLO_EFOHNMGNCNK_OFFSET))(this);
		}

		::System::Void DLJPFLBIEKH(::MLPJPKIJGGF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLPJPKIJGGF*))((::PBYTE)hIl2Cpp + CHKILIBKHLO_DLJPFLBIEKH_OFFSET))(this, a1);
		}

		::System::Void FMJBFKGPEPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHKILIBKHLO_FMJBFKGPEPP_OFFSET))(this);
		}

		::System::Void OBGMNDEELJM(::System::Exception* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + CHKILIBKHLO_OBGMNDEELJM_OFFSET))(this, a1);
		}

	};
