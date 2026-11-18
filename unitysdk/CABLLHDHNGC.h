#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KECPLIFGOCJ.h"
#include "unitysdk/PMDMDIOJILN.h"
#include "unitysdk/System/Object.h"

class HFBHNDDEPLE;
namespace System { class Action; }

#define CABLLHDHNGC_BHLAEBMEOLO_OFFSET UNITYSDK_OFFSET(0x1C523050)
#define CABLLHDHNGC_BMNMLAIJJGF_OFFSET UNITYSDK_OFFSET(0x1C522E20)
#define CABLLHDHNGC_CHLEALKAOJO_OFFSET UNITYSDK_OFFSET(0x1C522E30)
#define CABLLHDHNGC_EKHHIIJOEFN_OFFSET UNITYSDK_OFFSET(0x1C5232B0)
#define CABLLHDHNGC_FINALIZE_OFFSET UNITYSDK_OFFSET(0x1C522ED0)
#define CABLLHDHNGC_FPMKEGMLNHG_OFFSET UNITYSDK_OFFSET(0x1C522FD0)
#define CABLLHDHNGC_KMIMGEDAMCE_OFFSET UNITYSDK_OFFSET(0x1C523120)
#define CABLLHDHNGC_LFDIBLLPICO_OFFSET UNITYSDK_OFFSET(0x1C523110)
#define CABLLHDHNGC_LNFENFDLMIG_OFFSET UNITYSDK_OFFSET(0x1C522BD0)
#define CABLLHDHNGC_OFHECOHPAKG_OFFSET UNITYSDK_OFFSET(0x1C522BB0)
#define CABLLHDHNGC_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1C522D60)
#define CABLLHDHNGC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C523100)

inline static constexpr unsigned int CABLLHDHNGC_TypeDefinitionIndex = 15502;

class CABLLHDHNGC : public ::System::Object
{
public:
	::System::Action* PLDOELOOFLL; // 0x10
	::PMDMDIOJILN DHDJDGFNBOA; // 0x18
	::HFBHNDDEPLE* _KMJDPDLPPFE_k__BackingField; // 0x28
	::HFBHNDDEPLE* EFFAONJBCOG; // 0x30
	::System::Int32 IJDGGCANOFI; // 0x38
	::System::Boolean DLGKLGKOMHK; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC__CTOR_OFFSET))(this);
	}

	::System::Boolean OFHECOHPAKG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_OFHECOHPAKG_OFFSET))(this);
	}

	::System::Void LNFENFDLMIG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_LNFENFDLMIG_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_FINALIZE_OFFSET))(this);
	}

	::System::Void FPMKEGMLNHG(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + CABLLHDHNGC_FPMKEGMLNHG_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BMNMLAIJJGF(::KECPLIFGOCJ GFCJHNHLFEF)
	{
		return ((::System::Void(*)(::PVOID, ::KECPLIFGOCJ))((::PBYTE)hIl2Cpp + CABLLHDHNGC_BMNMLAIJJGF_OFFSET))(this, GFCJHNHLFEF);
	}

	::System::Void BHLAEBMEOLO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_BHLAEBMEOLO_OFFSET))(this);
	}

	::System::Void LFDIBLLPICO(::HFBHNDDEPLE* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::HFBHNDDEPLE*))((::PBYTE)hIl2Cpp + CABLLHDHNGC_LFDIBLLPICO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KMIMGEDAMCE(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + CABLLHDHNGC_KMIMGEDAMCE_OFFSET))(this, LJBPECKCCEA);
	}

	::HFBHNDDEPLE* EKHHIIJOEFN()
	{
		return ((::HFBHNDDEPLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_EKHHIIJOEFN_OFFSET))(this);
	}

	::System::Void CHLEALKAOJO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CABLLHDHNGC_CHLEALKAOJO_OFFSET))(this);
	}
};
