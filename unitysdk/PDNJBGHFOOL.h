#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/FKKPMDKOJML.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define PDNJBGHFOOL_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1B9CBCA0)
#define PDNJBGHFOOL_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1B9CBF30)
#define PDNJBGHFOOL_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1B9CBEA0)
#define PDNJBGHFOOL_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1B9CBE40)
#define PDNJBGHFOOL_PAFNOMFEHPK_OFFSET UNITYSDK_OFFSET(0x1B9CBFC0)
#define PDNJBGHFOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9CBB70)

inline static constexpr unsigned int PDNJBGHFOOL_TypeDefinitionIndex = 57909;

class PDNJBGHFOOL : public ::KBGGKIJMICI
{
public:
	::FKKPMDKOJML JKBLDFBGBPK; // 0x38
	::System::Int32 NACGJJKHEJE; // 0x3C

	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + PDNJBGHFOOL__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJBGHFOOL_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJBGHFOOL_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJBGHFOOL_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNJBGHFOOL_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void PAFNOMFEHPK(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + PDNJBGHFOOL_PAFNOMFEHPK_OFFSET))(this, KOIBHLHLMFC);
	}
};
