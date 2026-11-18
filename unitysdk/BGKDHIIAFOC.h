#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ECDPIABFOLP.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class IHPGAMNPOLG;
namespace System { class Action; }

#define BGKDHIIAFOC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1577ED20)
#define BGKDHIIAFOC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1577EAF0)
#define BGKDHIIAFOC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1577EB00)
#define BGKDHIIAFOC_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1577EF80)
#define BGKDHIIAFOC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1577EBA0)
#define BGKDHIIAFOC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1577ECA0)
#define BGKDHIIAFOC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1577EDE0)
#define BGKDHIIAFOC_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1577EF70)
#define BGKDHIIAFOC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1577E8A0)
#define BGKDHIIAFOC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1577E880)
#define BGKDHIIAFOC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1577EA30)
#define BGKDHIIAFOC__CTOR_OFFSET UNITYSDK_OFFSET(0x1577EDD0)

inline static constexpr unsigned int BGKDHIIAFOC_TypeDefinitionIndex = 10163;

class BGKDHIIAFOC : public ::System::Object
{
public:
	::IHPGAMNPOLG* _KMJDPDLPPFE_k__BackingField; // 0x10
	::ECDPIABFOLP DHDJDGFNBOA; // 0x18
	::IHPGAMNPOLG* EFFAONJBCOG; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::IHPGAMNPOLG* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::IHPGAMNPOLG*))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_CHLEALKAOJO_OFFSET))(this);
	}

	::IHPGAMNPOLG* EKHHIIJOEFN()
	{
		return ((::IHPGAMNPOLG*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGKDHIIAFOC_EKHHIIJOEFN_OFFSET))(this);
	}
};
