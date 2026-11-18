#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFGMELKBLNM.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/System/Object.h"

class LFBHOHENBHM;
namespace System { class Action; }

#define CNPCACCFJMC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x17775330)
#define CNPCACCFJMC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x177750D0)
#define CNPCACCFJMC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x177750E0)
#define CNPCACCFJMC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x17775180)
#define CNPCACCFJMC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x17775280)
#define CNPCACCFJMC_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x177753F0)
#define CNPCACCFJMC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x17774E80)
#define CNPCACCFJMC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x17774E60)
#define CNPCACCFJMC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x17775010)
#define CNPCACCFJMC__CTOR_OFFSET UNITYSDK_OFFSET(0x177753E0)

inline static constexpr unsigned int CNPCACCFJMC_TypeDefinitionIndex = 11472;

class CNPCACCFJMC : public ::System::Object
{
public:
	::LFBHOHENBHM* _KMJDPDLPPFE_k__BackingField; // 0x10
	::DFGMELKBLNM DHDJDGFNBOA; // 0x18
	::LFBHOHENBHM* EFFAONJBCOG; // 0x28
	::System::Boolean DLGKLGKOMHK; // 0x30
	::System::Byte _padding0[0x3];
	::System::Int32 IJDGGCANOFI; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CNPCACCFJMC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CNPCACCFJMC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::LFBHOHENBHM* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::LFBHOHENBHM*))((::PBYTE)hIl2Cpp + CNPCACCFJMC_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNPCACCFJMC_CHLEALKAOJO_OFFSET))(this);
	}
};
