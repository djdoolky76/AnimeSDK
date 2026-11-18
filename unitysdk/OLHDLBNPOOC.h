#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LCGMOEAGJJC.h"
#include "unitysdk/System/Object.h"

class CKIJDGAALLM;
namespace System { class Action; }

#define OLHDLBNPOOC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17FE2DF0)
#define OLHDLBNPOOC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17FE2BC0)
#define OLHDLBNPOOC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17FE2BD0)
#define OLHDLBNPOOC_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x17FE2EB0)
#define OLHDLBNPOOC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17FE2C70)
#define OLHDLBNPOOC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17FE2D70)
#define OLHDLBNPOOC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17FE2EC0)
#define OLHDLBNPOOC_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x17FE3050)
#define OLHDLBNPOOC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17FE2970)
#define OLHDLBNPOOC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17FE2950)
#define OLHDLBNPOOC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17FE2B00)
#define OLHDLBNPOOC__CTOR_OFFSET UNITYSDK_OFFSET(0x17FE2EA0)

inline static constexpr unsigned int OLHDLBNPOOC_TypeDefinitionIndex = 17684;

class OLHDLBNPOOC : public ::System::Object
{
public:
	::CKIJDGAALLM* EFFAONJBCOG; // 0x10
	::CKIJDGAALLM* _KMJDPDLPPFE_k__BackingField; // 0x18
	::LCGMOEAGJJC DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_CHLEALKAOJO_OFFSET))(this);
	}

	::CKIJDGAALLM* EKHHIIJOEFN()
	{
		return ((::CKIJDGAALLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::CKIJDGAALLM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CKIJDGAALLM*))((::PBYTE)hIl2Cpp + OLHDLBNPOOC_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}
};
