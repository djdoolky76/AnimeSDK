#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNDGMKNLGDG.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class EMAABGCONJO;
namespace System { class Action; }

#define MGBBHBNLCAF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1BA933D0)
#define MGBBHBNLCAF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1BA931A0)
#define MGBBHBNLCAF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1BA931B0)
#define MGBBHBNLCAF_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1BA936B0)
#define MGBBHBNLCAF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1BA93250)
#define MGBBHBNLCAF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1BA93350)
#define MGBBHBNLCAF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1BA934A0)
#define MGBBHBNLCAF_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1BA93490)
#define MGBBHBNLCAF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1BA92EC0)
#define MGBBHBNLCAF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1BA92EA0)
#define MGBBHBNLCAF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1BA930E0)
#define MGBBHBNLCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA93480)

inline static constexpr unsigned int MGBBHBNLCAF_TypeDefinitionIndex = 10745;

class MGBBHBNLCAF : public ::System::Object
{
public:
	::EMAABGCONJO* _KMJDPDLPPFE_k__BackingField; // 0x10
	::EMAABGCONJO* EFFAONJBCOG; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::HNDGMKNLGDG DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::EMAABGCONJO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::EMAABGCONJO*))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::EMAABGCONJO* EKHHIIJOEFN()
	{
		return ((::EMAABGCONJO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGBBHBNLCAF_EKHHIIJOEFN_OFFSET))(this);
	}
};
