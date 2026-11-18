#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DOHPDHLIKHN.h"
#include "unitysdk/KBGGKIJMICI.h"

namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CMGBFEPHNFG_ACBAKBHIMJC_OFFSET UNITYSDK_OFFSET(0x1203F7C0)
#define CMGBFEPHNFG_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x1203F970)
#define CMGBFEPHNFG_GPGLNOBDBGJ_OFFSET UNITYSDK_OFFSET(0x1203FA00)
#define CMGBFEPHNFG_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1203F930)
#define CMGBFEPHNFG_PKKEDOIKDHB_OFFSET UNITYSDK_OFFSET(0x1203FA90)
#define CMGBFEPHNFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1203F780)

inline static constexpr unsigned int CMGBFEPHNFG_TypeDefinitionIndex = 74270;

class CMGBFEPHNFG : public ::KBGGKIJMICI
{
public:
	::System::Void _ctor(::System::Int32 HKHHHJHCGKL, ::DOHPDHLIKHN OBNIAHNMHPF, ::System::Int32 APJGHNMKNDK, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::DOHPDHLIKHN, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*))((::PBYTE)hIl2Cpp + CMGBFEPHNFG__CTOR_OFFSET))(this, HKHHHJHCGKL, OBNIAHNMHPF, APJGHNMKNDK, KOIBHLHLMFC);
	}

	::System::Void ACBAKBHIMJC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGBFEPHNFG_ACBAKBHIMJC_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGBFEPHNFG_OKJCHFGIKBH_OFFSET))(this);
	}

	::System::Void CMFOMGGDPPA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGBFEPHNFG_CMFOMGGDPPA_OFFSET))(this);
	}

	::System::Void GPGLNOBDBGJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMGBFEPHNFG_GPGLNOBDBGJ_OFFSET))(this);
	}

	::System::Void PKKEDOIKDHB(::System::EventArgs* AIOFFPDEDFB)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + CMGBFEPHNFG_PKKEDOIKDHB_OFFSET))(this, AIOFFPDEDFB);
	}
};
