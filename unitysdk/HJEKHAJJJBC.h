#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JAICEHGFKDI.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class CFLCNBGKGCM;
namespace System { class Action; }

#define HJEKHAJJJBC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1B6134D0)
#define HJEKHAJJJBC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1B6132A0)
#define HJEKHAJJJBC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1B6132B0)
#define HJEKHAJJJBC_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1B6135A0)
#define HJEKHAJJJBC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1B613350)
#define HJEKHAJJJBC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1B613450)
#define HJEKHAJJJBC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1B6135B0)
#define HJEKHAJJJBC_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1B613590)
#define HJEKHAJJJBC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1B613050)
#define HJEKHAJJJBC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1B613030)
#define HJEKHAJJJBC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1B6131E0)
#define HJEKHAJJJBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B613580)

inline static constexpr unsigned int HJEKHAJJJBC_TypeDefinitionIndex = 16485;

class HJEKHAJJJBC : public ::System::Object
{
public:
	::JAICEHGFKDI DHDJDGFNBOA; // 0x10
	::CFLCNBGKGCM* _KMJDPDLPPFE_k__BackingField; // 0x20
	::CFLCNBGKGCM* EFFAONJBCOG; // 0x28
	::System::Action* PLDOELOOFLL; // 0x30
	::System::Boolean DLGKLGKOMHK; // 0x38
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::CFLCNBGKGCM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::CFLCNBGKGCM*))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::CFLCNBGKGCM* EKHHIIJOEFN()
	{
		return ((::CFLCNBGKGCM*(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJEKHAJJJBC_CHLEALKAOJO_OFFSET))(this);
	}
};
