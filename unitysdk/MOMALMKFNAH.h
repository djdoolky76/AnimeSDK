#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PDHAJLFABDC.h"
#include "unitysdk/System/Object.h"

class FEHLBMPLCOB;
namespace System { class Action; }

#define MOMALMKFNAH_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C08F640)
#define MOMALMKFNAH_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C08F410)
#define MOMALMKFNAH_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C08F420)
#define MOMALMKFNAH_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1C08F8A0)
#define MOMALMKFNAH_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C08F4C0)
#define MOMALMKFNAH_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C08F5C0)
#define MOMALMKFNAH_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C08F700)
#define MOMALMKFNAH_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1C08F890)
#define MOMALMKFNAH_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C08F1C0)
#define MOMALMKFNAH_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C08F1A0)
#define MOMALMKFNAH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C08F350)
#define MOMALMKFNAH__CTOR_OFFSET UNITYSDK_OFFSET(0x1C08F6F0)

inline static constexpr unsigned int MOMALMKFNAH_TypeDefinitionIndex = 15865;

class MOMALMKFNAH : public ::System::Object
{
public:
	::PDHAJLFABDC DHDJDGFNBOA; // 0x10
	::FEHLBMPLCOB* _KMJDPDLPPFE_k__BackingField; // 0x20
	::System::Action* PLDOELOOFLL; // 0x28
	::FEHLBMPLCOB* EFFAONJBCOG; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOMALMKFNAH_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + MOMALMKFNAH_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MOMALMKFNAH_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::FEHLBMPLCOB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FEHLBMPLCOB*))((::PBYTE)hIl2Cpp + MOMALMKFNAH_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::FEHLBMPLCOB* EKHHIIJOEFN()
	{
		return ((::FEHLBMPLCOB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOMALMKFNAH_EKHHIIJOEFN_OFFSET))(this);
	}
};
