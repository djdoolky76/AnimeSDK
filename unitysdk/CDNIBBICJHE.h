#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AOEEJLMEAAF.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EFDMLBBAGAM;
namespace System { class Action; }

#define CDNIBBICJHE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A53C1B0)
#define CDNIBBICJHE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A53BF80)
#define CDNIBBICJHE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A53BF90)
#define CDNIBBICJHE_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1A53C400)
#define CDNIBBICJHE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A53C030)
#define CDNIBBICJHE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A53C130)
#define CDNIBBICJHE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A53C270)
#define CDNIBBICJHE_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1A53C410)
#define CDNIBBICJHE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A53BD30)
#define CDNIBBICJHE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A53BD10)
#define CDNIBBICJHE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A53BEC0)
#define CDNIBBICJHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A53C260)

inline static constexpr unsigned int CDNIBBICJHE_TypeDefinitionIndex = 14141;

class CDNIBBICJHE : public ::System::Object
{
public:
	::EFDMLBBAGAM* EFFAONJBCOG; // 0x10
	::AOEEJLMEAAF DHDJDGFNBOA; // 0x18
	::System::Action* PLDOELOOFLL; // 0x28
	::EFDMLBBAGAM* _KMJDPDLPPFE_k__BackingField; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CDNIBBICJHE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CDNIBBICJHE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CDNIBBICJHE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::EFDMLBBAGAM* EKHHIIJOEFN()
	{
		return ((::EFDMLBBAGAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDNIBBICJHE_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::EFDMLBBAGAM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EFDMLBBAGAM*))((::PBYTE)hIl2Cpp + CDNIBBICJHE_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}
};
