#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/NJBGJIIDAOM.h"
#include "unitysdk/System/Object.h"

class DOPNMMHJODP;
namespace System { class Action; }

#define FJJBMADMOAN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B107060)
#define FJJBMADMOAN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B106E30)
#define FJJBMADMOAN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B106E40)
#define FJJBMADMOAN_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1B107120)
#define FJJBMADMOAN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B106EE0)
#define FJJBMADMOAN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B106FE0)
#define FJJBMADMOAN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B107140)
#define FJJBMADMOAN_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1B107130)
#define FJJBMADMOAN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B106BE0)
#define FJJBMADMOAN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B106BC0)
#define FJJBMADMOAN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B106D70)
#define FJJBMADMOAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1B107110)

inline static constexpr unsigned int FJJBMADMOAN_TypeDefinitionIndex = 16704;

class FJJBMADMOAN : public ::System::Object
{
public:
	::NJBGJIIDAOM DHDJDGFNBOA; // 0x10
	::System::Action* PLDOELOOFLL; // 0x20
	::DOPNMMHJODP* EFFAONJBCOG; // 0x28
	::DOPNMMHJODP* _KMJDPDLPPFE_k__BackingField; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + FJJBMADMOAN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + FJJBMADMOAN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_BHLAEBMEOLO_OFFSET))(this);
	}

	::DOPNMMHJODP* EKHHIIJOEFN()
	{
		return ((::DOPNMMHJODP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::DOPNMMHJODP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DOPNMMHJODP*))((::PBYTE)hIl2Cpp + FJJBMADMOAN_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + FJJBMADMOAN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJJBMADMOAN_CHLEALKAOJO_OFFSET))(this);
	}
};
