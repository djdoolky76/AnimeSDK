#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HHALNDDDNOD.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LHILFIKBGEP;
namespace System { class Action; }

#define GLMHOHDBBMN_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1746AE30)
#define GLMHOHDBBMN_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1746AC00)
#define GLMHOHDBBMN_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1746AC10)
#define GLMHOHDBBMN_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1746AF00)
#define GLMHOHDBBMN_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1746ACB0)
#define GLMHOHDBBMN_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1746ADB0)
#define GLMHOHDBBMN_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1746AF10)
#define GLMHOHDBBMN_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1746AEF0)
#define GLMHOHDBBMN_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1746A970)
#define GLMHOHDBBMN_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1746A940)
#define GLMHOHDBBMN_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1746AB00)
#define GLMHOHDBBMN__CTOR_OFFSET UNITYSDK_OFFSET(0x1746AEE0)

inline static constexpr unsigned int GLMHOHDBBMN_TypeDefinitionIndex = 15920;

class GLMHOHDBBMN : public ::System::Object
{
public:
	::LHILFIKBGEP* EFFAONJBCOG; // 0x10
	::LHILFIKBGEP* _KMJDPDLPPFE_k__BackingField; // 0x18
	::System::Action* PLDOELOOFLL; // 0x20
	::HHALNDDDNOD DHDJDGFNBOA; // 0x28
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::LHILFIKBGEP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LHILFIKBGEP*))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::LHILFIKBGEP* EKHHIIJOEFN()
	{
		return ((::LHILFIKBGEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLMHOHDBBMN_CHLEALKAOJO_OFFSET))(this);
	}
};
