#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PPLENNIOBDI_EEOCJBMDLLJ.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define PPLENNIOBDI_BALOFOLGFOA_OFFSET UNITYSDK_OFFSET(0x1D1FA470)
#define PPLENNIOBDI_BNJHEKFGHLD_OFFSET UNITYSDK_OFFSET(0x1D1FA7A0)
#define PPLENNIOBDI_CLLKIIOGCBM_OFFSET UNITYSDK_OFFSET(0x1D1FA420)
#define PPLENNIOBDI_EECEELBCENI_OFFSET UNITYSDK_OFFSET(0x1D1FA6C0)
#define PPLENNIOBDI_EFHHGDPNLLC_OFFSET UNITYSDK_OFFSET(0x1D1FA2E0)
#define PPLENNIOBDI_HEMOHDFDKEG_OFFSET UNITYSDK_OFFSET(0x1D1FA790)
#define PPLENNIOBDI_JMCMKHJJIDI_OFFSET UNITYSDK_OFFSET(0x1D1FA380)
#define PPLENNIOBDI_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1D1FA4C0)
#define PPLENNIOBDI_PEKPJMGIMIM_OFFSET UNITYSDK_OFFSET(0x1D1FA5F0)
#define PPLENNIOBDI_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1D1FA540)
#define PPLENNIOBDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FA590)

inline static constexpr unsigned int PPLENNIOBDI_TypeDefinitionIndex = 67883;

class PPLENNIOBDI : public ::System::Object
{
public:
	::UnityEngine::Events::UnityAction* EJLLGONIIIP; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* IDFAGIEBCIK; // 0x18
	::UnityEngine::Events::UnityAction* PDCBBHACEKA; // 0x20
	::System::String* IKGGPCFAEND; // 0x28
	::PPLENNIOBDI_EEOCJBMDLLJ _EEFGOAJIPNI_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI__CTOR_OFFSET))(this);
	}

	::System::Void EFHHGDPNLLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_EFHHGDPNLLC_OFFSET))(this);
	}

	::System::Void JMCMKHJJIDI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_JMCMKHJJIDI_OFFSET))(this);
	}

	::System::Void CLLKIIOGCBM(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PPLENNIOBDI_CLLKIIOGCBM_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void BALOFOLGFOA(::UnityEngine::Events::UnityAction* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Events::UnityAction*))((::PBYTE)hIl2Cpp + PPLENNIOBDI_BALOFOLGFOA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_PLPONJAKNEB_OFFSET))(this);
	}

	::System::Void PEKPJMGIMIM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_PEKPJMGIMIM_OFFSET))(this);
	}

	::System::Void EECEELBCENI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_EECEELBCENI_OFFSET))(this);
	}

	::PPLENNIOBDI_EEOCJBMDLLJ HEMOHDFDKEG()
	{
		return ((::PPLENNIOBDI_EEOCJBMDLLJ(*)(::PVOID))((::PBYTE)hIl2Cpp + PPLENNIOBDI_HEMOHDFDKEG_OFFSET))(this);
	}

	::System::Void BNJHEKFGHLD(::PPLENNIOBDI_EEOCJBMDLLJ EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::PPLENNIOBDI_EEOCJBMDLLJ))((::PBYTE)hIl2Cpp + PPLENNIOBDI_BNJHEKFGHLD_OFFSET))(this, EGEGIMGMJHN);
	}
};
