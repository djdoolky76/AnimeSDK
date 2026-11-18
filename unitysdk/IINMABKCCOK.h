#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"

class AJKCDEGOMDM;
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Globalization { class CultureInfo; }

#define IINMABKCCOK_ADNCEBJBPBN_OFFSET UNITYSDK_OFFSET(0x1014EE80)
#define IINMABKCCOK_BPJBOFLIGFB_OFFSET UNITYSDK_OFFSET(0x1014E500)
#define IINMABKCCOK_CKIBNLHLCJH_OFFSET UNITYSDK_OFFSET(0x1014E660)
#define IINMABKCCOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1014E170)
#define IINMABKCCOK_EMANAPPLNCJ_OFFSET UNITYSDK_OFFSET(0x1014EC80)
#define IINMABKCCOK_GCJJCNIOBJG_OFFSET UNITYSDK_OFFSET(0x1014EDF0)
#define IINMABKCCOK_GOCINBNPPAH_OFFSET UNITYSDK_OFFSET(0x1014EEA0)
#define IINMABKCCOK_HNLEPAHOMJH_OFFSET UNITYSDK_OFFSET(0x1014ED50)
#define IINMABKCCOK_LAEAAGNEHNN_OFFSET UNITYSDK_OFFSET(0x1014EBE0)
#define IINMABKCCOK_LHKLBDOIKNK_OFFSET UNITYSDK_OFFSET(0x1014EE90)
#define IINMABKCCOK_LPFGDKIFDLM_OFFSET UNITYSDK_OFFSET(0x1014E300)
#define IINMABKCCOK_ONCREATE_OFFSET UNITYSDK_OFFSET(0x1014E250)
#define IINMABKCCOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1014E480)

inline static constexpr unsigned int IINMABKCCOK_TypeDefinitionIndex = 39780;

class IINMABKCCOK
{
public:
	::System::Globalization::CultureInfo* ALOKOAPIJPD; // 0x10
	::System::Collections::Generic::List_1<::AJKCDEGOMDM*>* EDGHPKJEHDF; // 0x18
	::System::Boolean _GLGAAMLKNNF_k__BackingField; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK__CTOR_OFFSET))(this);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_DISPOSE_OFFSET))(this);
	}

	::System::Void OnCreate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_ONCREATE_OFFSET))(this);
	}

	::System::Void BPJBOFLIGFB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_BPJBOFLIGFB_OFFSET))(this);
	}

	::System::Void LAEAAGNEHNN(::AJKCDEGOMDM* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJKCDEGOMDM*))((::PBYTE)hIl2Cpp + IINMABKCCOK_LAEAAGNEHNN_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Boolean EMANAPPLNCJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_EMANAPPLNCJ_OFFSET))(this);
	}

	::System::Void HNLEPAHOMJH(::MoleMole::LanguageType CBMOOALPNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + IINMABKCCOK_HNLEPAHOMJH_OFFSET))(this, CBMOOALPNHB);
	}

	::System::Void GCJJCNIOBJG(::AJKCDEGOMDM* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AJKCDEGOMDM*))((::PBYTE)hIl2Cpp + IINMABKCCOK_GCJJCNIOBJG_OFFSET))(this, NKMKJFCBBCK);
	}

	::System::Void ADNCEBJBPBN(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IINMABKCCOK_ADNCEBJBPBN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Globalization::CultureInfo* LHKLBDOIKNK()
	{
		return ((::System::Globalization::CultureInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_LHKLBDOIKNK_OFFSET))(this);
	}

	::System::Void CKIBNLHLCJH(::MoleMole::LanguageType CBMOOALPNHB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LanguageType))((::PBYTE)hIl2Cpp + IINMABKCCOK_CKIBNLHLCJH_OFFSET))(this, CBMOOALPNHB);
	}

	::System::Boolean GOCINBNPPAH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_GOCINBNPPAH_OFFSET))(this);
	}

	::System::Void LPFGDKIFDLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IINMABKCCOK_LPFGDKIFDLM_OFFSET))(this);
	}
};
