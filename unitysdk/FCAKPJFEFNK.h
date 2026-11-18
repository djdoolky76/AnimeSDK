#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LJCHJBBAKEA.h"
#include "unitysdk/System/Object.h"

class DONFCCJNHMI;
namespace System { class Action; }

#define FCAKPJFEFNK_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5A14C0)
#define FCAKPJFEFNK_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5A1290)
#define FCAKPJFEFNK_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5A12A0)
#define FCAKPJFEFNK_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1A5A1720)
#define FCAKPJFEFNK_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5A1340)
#define FCAKPJFEFNK_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5A1440)
#define FCAKPJFEFNK_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5A1580)
#define FCAKPJFEFNK_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1A5A1710)
#define FCAKPJFEFNK_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5A1040)
#define FCAKPJFEFNK_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5A1020)
#define FCAKPJFEFNK_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5A11D0)
#define FCAKPJFEFNK__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5A1570)

inline static constexpr unsigned int FCAKPJFEFNK_TypeDefinitionIndex = 15198;

class FCAKPJFEFNK : public ::System::Object
{
public:
	::LJCHJBBAKEA DHDJDGFNBOA; // 0x10
	::DONFCCJNHMI* _KMJDPDLPPFE_k__BackingField; // 0x20
	::DONFCCJNHMI* EFFAONJBCOG; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::DONFCCJNHMI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DONFCCJNHMI*))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::DONFCCJNHMI* EKHHIIJOEFN()
	{
		return ((::DONFCCJNHMI*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCAKPJFEFNK_CHLEALKAOJO_OFFSET))(this);
	}
};
