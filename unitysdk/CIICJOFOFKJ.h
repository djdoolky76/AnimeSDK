#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/LCLAJPMGNJN.h"
#include "unitysdk/System/Object.h"

class BCAKFOBLJDI;
namespace System { class Action; }

#define CIICJOFOFKJ_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17F11B90)
#define CIICJOFOFKJ_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x17F11960)
#define CIICJOFOFKJ_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x17F11970)
#define CIICJOFOFKJ_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x17F11C50)
#define CIICJOFOFKJ_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17F11A10)
#define CIICJOFOFKJ_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17F11B10)
#define CIICJOFOFKJ_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x17F11C70)
#define CIICJOFOFKJ_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x17F11C60)
#define CIICJOFOFKJ_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17F11710)
#define CIICJOFOFKJ_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17F116F0)
#define CIICJOFOFKJ_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17F118A0)
#define CIICJOFOFKJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17F11C40)

inline static constexpr unsigned int CIICJOFOFKJ_TypeDefinitionIndex = 16802;

class CIICJOFOFKJ : public ::System::Object
{
public:
	::BCAKFOBLJDI* EFFAONJBCOG; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::BCAKFOBLJDI* _KMJDPDLPPFE_k__BackingField; // 0x20
	::LCLAJPMGNJN DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_CHLEALKAOJO_OFFSET))(this);
	}

	::BCAKFOBLJDI* EKHHIIJOEFN()
	{
		return ((::BCAKFOBLJDI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::BCAKFOBLJDI* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::BCAKFOBLJDI*))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CIICJOFOFKJ_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
