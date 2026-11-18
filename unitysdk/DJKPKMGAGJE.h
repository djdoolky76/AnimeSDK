#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/MIKAKCLAIGG.h"
#include "unitysdk/System/Object.h"

class MDAMGPDGAFB;
namespace System { class Action; }

#define DJKPKMGAGJE_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B9A8A80)
#define DJKPKMGAGJE_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B9A8850)
#define DJKPKMGAGJE_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B9A8860)
#define DJKPKMGAGJE_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1B9A8CE0)
#define DJKPKMGAGJE_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B9A8900)
#define DJKPKMGAGJE_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B9A8A00)
#define DJKPKMGAGJE_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B9A8B40)
#define DJKPKMGAGJE_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1B9A8CD0)
#define DJKPKMGAGJE_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B9A8600)
#define DJKPKMGAGJE_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B9A85E0)
#define DJKPKMGAGJE_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B9A8790)
#define DJKPKMGAGJE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9A8B30)

inline static constexpr unsigned int DJKPKMGAGJE_TypeDefinitionIndex = 11462;

class DJKPKMGAGJE : public ::System::Object
{
public:
	::MDAMGPDGAFB* EFFAONJBCOG; // 0x10
	::MIKAKCLAIGG DHDJDGFNBOA; // 0x18
	::MDAMGPDGAFB* _KMJDPDLPPFE_k__BackingField; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::MDAMGPDGAFB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MDAMGPDGAFB*))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_CHLEALKAOJO_OFFSET))(this);
	}

	::MDAMGPDGAFB* EKHHIIJOEFN()
	{
		return ((::MDAMGPDGAFB*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJKPKMGAGJE_EKHHIIJOEFN_OFFSET))(this);
	}
};
