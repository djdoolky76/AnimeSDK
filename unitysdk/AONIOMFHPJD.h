#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENFBLKAMAFO.h"
#include "unitysdk/System/Object.h"

class HCKCLDGFHAA;
class NPLECDKJONF;
namespace MoleMole { class UICinemaPlayPageController; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AONIOMFHPJD_FMOHGFBHJDP_OFFSET UNITYSDK_OFFSET(0xF77C7C0)
#define AONIOMFHPJD_GIGGAHIFMNE_OFFSET UNITYSDK_OFFSET(0xF77C420)
#define AONIOMFHPJD_HHDPNIDNBHB_OFFSET UNITYSDK_OFFSET(0xF77C760)
#define AONIOMFHPJD_IBMHOFMGAPM_OFFSET UNITYSDK_OFFSET(0xF77B580)
#define AONIOMFHPJD_OHIPPFPIBNL_OFFSET UNITYSDK_OFFSET(0xF77B2F0)
#define AONIOMFHPJD_PDNGJJBLAHM_OFFSET UNITYSDK_OFFSET(0xF77BE00)
#define AONIOMFHPJD__CTOR_OFFSET UNITYSDK_OFFSET(0xF77B2E0)

inline static constexpr unsigned int AONIOMFHPJD_TypeDefinitionIndex = 68897;

class AONIOMFHPJD : public ::System::Object
{
public:
	::NPLECDKJONF* PHEFBJBIAAM; // 0x10
	::System::Collections::Generic::List_1<::ENFBLKAMAFO>* PHPDCPDFHCE; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::HCKCLDGFHAA*>* GDHPPPLHBJM; // 0x20
	::System::Action* FMEOGKNCBEO; // 0x28
	::MoleMole::UICinemaPlayPageController* ALGCBKHJOHL; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::ENFBLKAMAFO>* JNJJHMDCICI; // 0x38
	::System::Int32 LICICCJIPNG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONIOMFHPJD__CTOR_OFFSET))(this);
	}

	::System::Void OHIPPFPIBNL(::System::Int32 MOKIIDFLKGC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AONIOMFHPJD_OHIPPFPIBNL_OFFSET))(this, MOKIIDFLKGC);
	}

	::System::Void IBMHOFMGAPM(::System::Int32 LICICCJIPNG, ::System::Action* IBPMELDIGBK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + AONIOMFHPJD_IBMHOFMGAPM_OFFSET))(this, LICICCJIPNG, IBPMELDIGBK);
	}

	::System::Void GIGGAHIFMNE(::System::Int32 INEFBGPCJBC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AONIOMFHPJD_GIGGAHIFMNE_OFFSET))(this, INEFBGPCJBC);
	}

	::System::Void HHDPNIDNBHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONIOMFHPJD_HHDPNIDNBHB_OFFSET))(this);
	}

	::System::Void FMOHGFBHJDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONIOMFHPJD_FMOHGFBHJDP_OFFSET))(this);
	}

	::System::Void PDNGJJBLAHM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AONIOMFHPJD_PDNGJJBLAHM_OFFSET))(this);
	}
};
