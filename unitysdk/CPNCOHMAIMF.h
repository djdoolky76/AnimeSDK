#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GDCGONFKPBO.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class HCHEJNILHDD;
namespace System { class Action; }

#define CPNCOHMAIMF_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x18795510)
#define CPNCOHMAIMF_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x187952E0)
#define CPNCOHMAIMF_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x187952F0)
#define CPNCOHMAIMF_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x187955E0)
#define CPNCOHMAIMF_FINALIZE_OFFSET UNITYSDK_OFFSET(0x18795390)
#define CPNCOHMAIMF_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x18795490)
#define CPNCOHMAIMF_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x187955F0)
#define CPNCOHMAIMF_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x187955D0)
#define CPNCOHMAIMF_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x18795080)
#define CPNCOHMAIMF_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x18795060)
#define CPNCOHMAIMF_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x18795220)
#define CPNCOHMAIMF__CTOR_OFFSET UNITYSDK_OFFSET(0x187955C0)

inline static constexpr unsigned int CPNCOHMAIMF_TypeDefinitionIndex = 15187;

class CPNCOHMAIMF : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::GDCGONFKPBO DHDJDGFNBOA; // 0x18
	::HCHEJNILHDD* EFFAONJBCOG; // 0x28
	::HCHEJNILHDD* _KMJDPDLPPFE_k__BackingField; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_CHLEALKAOJO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::HCHEJNILHDD* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HCHEJNILHDD*))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::HCHEJNILHDD* EKHHIIJOEFN()
	{
		return ((::HCHEJNILHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CPNCOHMAIMF_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}
};
