#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HALBNHFMFKI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CBCEOBPCLBD;
namespace System { class Action; }

#define CHFIOHAKBCO_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18789AC0)
#define CHFIOHAKBCO_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x18789890)
#define CHFIOHAKBCO_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187898A0)
#define CHFIOHAKBCO_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x18789D20)
#define CHFIOHAKBCO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18789940)
#define CHFIOHAKBCO_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18789A40)
#define CHFIOHAKBCO_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x18789B80)
#define CHFIOHAKBCO_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x18789D10)
#define CHFIOHAKBCO_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18789640)
#define CHFIOHAKBCO_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18789620)
#define CHFIOHAKBCO_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x187897D0)
#define CHFIOHAKBCO__CTOR_OFFSET UNITYSDK_OFFSET(0x18789B70)

inline static constexpr unsigned int CHFIOHAKBCO_TypeDefinitionIndex = 13362;

class CHFIOHAKBCO : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::HALBNHFMFKI DHDJDGFNBOA; // 0x18
	::CBCEOBPCLBD* _KMJDPDLPPFE_k__BackingField; // 0x28
	::CBCEOBPCLBD* EFFAONJBCOG; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::CBCEOBPCLBD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CBCEOBPCLBD*))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::CBCEOBPCLBD* EKHHIIJOEFN()
	{
		return ((::CBCEOBPCLBD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHFIOHAKBCO_CHLEALKAOJO_OFFSET))(this);
	}
};
