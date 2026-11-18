#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEFHKFLNLJH.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class DEMKNAMPDDB;
namespace System { class Action; }

#define GNIEOIPGMAM_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1A5C4210)
#define GNIEOIPGMAM_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1A5C3FE0)
#define GNIEOIPGMAM_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1A5C3FF0)
#define GNIEOIPGMAM_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1A5C42E0)
#define GNIEOIPGMAM_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1A5C4090)
#define GNIEOIPGMAM_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1A5C4190)
#define GNIEOIPGMAM_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1A5C42F0)
#define GNIEOIPGMAM_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1A5C42D0)
#define GNIEOIPGMAM_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1A5C3D90)
#define GNIEOIPGMAM_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1A5C3D70)
#define GNIEOIPGMAM_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1A5C3F20)
#define GNIEOIPGMAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C42C0)

inline static constexpr unsigned int GNIEOIPGMAM_TypeDefinitionIndex = 14174;

class GNIEOIPGMAM : public ::System::Object
{
public:
	::DEMKNAMPDDB* _KMJDPDLPPFE_k__BackingField; // 0x10
	::DEMKNAMPDDB* EFFAONJBCOG; // 0x18
	::DEFHKFLNLJH DHDJDGFNBOA; // 0x20
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::DEMKNAMPDDB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::DEMKNAMPDDB*))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_CHLEALKAOJO_OFFSET))(this);
	}

	::DEMKNAMPDDB* EKHHIIJOEFN()
	{
		return ((::DEMKNAMPDDB*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + GNIEOIPGMAM_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
