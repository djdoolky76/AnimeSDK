#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIDEBHOGLDE.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class KOMJPHIMDCN;
namespace System { class Action; }

#define KNAJJIAFNCI_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BB07680)
#define KNAJJIAFNCI_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BB07390)
#define KNAJJIAFNCI_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BB07460)
#define KNAJJIAFNCI_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1BB07750)
#define KNAJJIAFNCI_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BB07500)
#define KNAJJIAFNCI_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BB07600)
#define KNAJJIAFNCI_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BB07760)
#define KNAJJIAFNCI_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1BB07740)
#define KNAJJIAFNCI_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BB07180)
#define KNAJJIAFNCI_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BB07160)
#define KNAJJIAFNCI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BB073A0)
#define KNAJJIAFNCI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB07730)

inline static constexpr unsigned int KNAJJIAFNCI_TypeDefinitionIndex = 10404;

class KNAJJIAFNCI : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::CIDEBHOGLDE DHDJDGFNBOA; // 0x18
	::KOMJPHIMDCN* _KMJDPDLPPFE_k__BackingField; // 0x28
	::KOMJPHIMDCN* EFFAONJBCOG; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::KOMJPHIMDCN* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::KOMJPHIMDCN*))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_CHLEALKAOJO_OFFSET))(this);
	}

	::KOMJPHIMDCN* EKHHIIJOEFN()
	{
		return ((::KOMJPHIMDCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + KNAJJIAFNCI_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
