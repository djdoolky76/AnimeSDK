#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileEntryInfo.h"
#include "unitysdk/BinaryBundleLib/Runtime/BinaryBundleFileInfo.h"
#include "unitysdk/DPOOEICEKLM.h"
#include "unitysdk/GECFLLHCLNG.h"
#include "unitysdk/System/ValueType.h"

#define DLFHKFAOHGI_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x3FDD20)
#define DLFHKFAOHGI_BIALKFGDEME_OFFSET UNITYSDK_OFFSET(0x388B30)
#define DLFHKFAOHGI_CFIDGLBJDLP_OFFSET UNITYSDK_OFFSET(0x1E5E9FA0)
#define DLFHKFAOHGI_DNCKHOMPAJM_OFFSET UNITYSDK_OFFSET(0x907FD0)
#define DLFHKFAOHGI_HDLDALIJMFI_OFFSET UNITYSDK_OFFSET(0x907FE0)
#define DLFHKFAOHGI_MGEBJJMMOBJ_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define DLFHKFAOHGI_NADACBGJAFC_OFFSET UNITYSDK_OFFSET(0x1E5E9C00)
#define DLFHKFAOHGI_OOKGGNONBLG_OFFSET UNITYSDK_OFFSET(0x359320)
#define DLFHKFAOHGI_PHBAPLDGKKK_OFFSET UNITYSDK_OFFSET(0x1E5E98C0)
#define DLFHKFAOHGI__CTOR_OFFSET UNITYSDK_OFFSET(0x907F40)

inline static constexpr unsigned int DLFHKFAOHGI_TypeDefinitionIndex = 34100;

struct alignas(4) DLFHKFAOHGI
{
	::GECFLLHCLNG _EMCFMJBMKLB_k__BackingField; // 0x10
	::System::Byte _padding0[0x4];
	::System::Int64 _BMICDFCIFCO_k__BackingField; // 0x18
	::BinaryBundleLib::Runtime::BinaryBundleFileInfo _GCLLIKIFJMP_k__BackingField; // 0x20
	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo _ELOMMNMNNBJ_k__BackingField; // 0x38
	::DPOOEICEKLM _HBLEIHCPMMP_k__BackingField; // 0x60
	::DPOOEICEKLM _JPHEAIBAOID_k__BackingField; // 0x64

	::System::Void _ctor(::System::Int64 DKCLIOPFHGA, ::GECFLLHCLNG MIDGBLDKHMI, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo MMINIKHNEOP, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo IBENMLFFCFG, ::DPOOEICEKLM DKOFFFNEFJC, ::DPOOEICEKLM INPIMGKMMON)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int64, ::GECFLLHCLNG, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::DPOOEICEKLM, ::DPOOEICEKLM))((::PBYTE)hIl2Cpp + DLFHKFAOHGI__CTOR_OFFSET))(this, DKCLIOPFHGA, MIDGBLDKHMI, MMINIKHNEOP, IBENMLFFCFG, DKOFFFNEFJC, INPIMGKMMON);
	}

	::System::Int64 MGEBJJMMOBJ()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_MGEBJJMMOBJ_OFFSET))(this);
	}

	::GECFLLHCLNG OOKGGNONBLG()
	{
		return ((::GECFLLHCLNG(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_OOKGGNONBLG_OFFSET))(this);
	}

	/*
	static ::DLFHKFAOHGI PHBAPLDGKKK(::System::Int64 MGMDLMBEDJF, ::DPOOEICEKLM KBAAILHLNOD)
	{
		return ((::DLFHKFAOHGI(*)(::System::Int64, ::DPOOEICEKLM))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_PHBAPLDGKKK_OFFSET))(MGMDLMBEDJF, KBAAILHLNOD);
	}
	*/

	::DPOOEICEKLM APCKPKCNFJE()
	{
		return ((::DPOOEICEKLM(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_APCKPKCNFJE_OFFSET))(this);
	}

	::DPOOEICEKLM DNCKHOMPAJM()
	{
		return ((::DPOOEICEKLM(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_DNCKHOMPAJM_OFFSET))(this);
	}

	::BinaryBundleLib::Runtime::BinaryBundleFileInfo BIALKFGDEME()
	{
		return ((::BinaryBundleLib::Runtime::BinaryBundleFileInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_BIALKFGDEME_OFFSET))(this);
	}

	/*
	static ::DLFHKFAOHGI NADACBGJAFC(::System::Int64 MGMDLMBEDJF, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo HMMMOCJAEOA, ::DPOOEICEKLM JOACFGLAGAD)
	{
		return ((::DLFHKFAOHGI(*)(::System::Int64, ::BinaryBundleLib::Runtime::BinaryBundleFileInfo, ::DPOOEICEKLM))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_NADACBGJAFC_OFFSET))(MGMDLMBEDJF, HMMMOCJAEOA, JOACFGLAGAD);
	}
	*/

	/*
	static ::DLFHKFAOHGI CFIDGLBJDLP(::System::Int64 MGMDLMBEDJF, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo HMMMOCJAEOA, ::DPOOEICEKLM JOACFGLAGAD)
	{
		return ((::DLFHKFAOHGI(*)(::System::Int64, ::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo, ::DPOOEICEKLM))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_CFIDGLBJDLP_OFFSET))(MGMDLMBEDJF, HMMMOCJAEOA, JOACFGLAGAD);
	}
	*/

	::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo HDLDALIJMFI()
	{
		return ((::BinaryBundleLib::Runtime::BinaryBundleFileEntryInfo(*)(::PVOID))((::PBYTE)hIl2Cpp + DLFHKFAOHGI_HDLDALIJMFI_OFFSET))(this);
	}
};
