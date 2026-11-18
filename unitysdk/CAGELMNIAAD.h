#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ILNPFAABPEH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class AAEKLMLLKJP;
namespace System { class Action; }

#define CAGELMNIAAD_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x15737D40)
#define CAGELMNIAAD_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x15737B10)
#define CAGELMNIAAD_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x15737B20)
#define CAGELMNIAAD_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x15737E00)
#define CAGELMNIAAD_FINALIZE_OFFSET UNITYSDK_OFFSET(0x15737BC0)
#define CAGELMNIAAD_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x15737CC0)
#define CAGELMNIAAD_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x15737E10)
#define CAGELMNIAAD_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x15737FA0)
#define CAGELMNIAAD_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x157378C0)
#define CAGELMNIAAD_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x157378A0)
#define CAGELMNIAAD_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x15737A50)
#define CAGELMNIAAD__CTOR_OFFSET UNITYSDK_OFFSET(0x15737DF0)

inline static constexpr unsigned int CAGELMNIAAD_TypeDefinitionIndex = 9539;

class CAGELMNIAAD : public ::System::Object
{
public:
	::AAEKLMLLKJP* _KMJDPDLPPFE_k__BackingField; // 0x10
	::System::Action* PLDOELOOFLL; // 0x18
	::AAEKLMLLKJP* EFFAONJBCOG; // 0x20
	::ILNPFAABPEH DHDJDGFNBOA; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CAGELMNIAAD_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CAGELMNIAAD_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_BHLAEBMEOLO_OFFSET))(this);
	}

	::AAEKLMLLKJP* EKHHIIJOEFN()
	{
		return ((::AAEKLMLLKJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CAGELMNIAAD_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LFDIBLLPICO(::AAEKLMLLKJP* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AAEKLMLLKJP*))((::PBYTE)hIl2Cpp + CAGELMNIAAD_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAGELMNIAAD_CHLEALKAOJO_OFFSET))(this);
	}
};
