#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EHGPCEMPJEO.h"

class KCPEDLEBJMH;
class OOANHJJCKJK;
namespace MoleMole { class ConfigTempleLevelUpEvent; }

#define AAEMKJBMJAB_DLJPIEFFNOG_OFFSET UNITYSDK_OFFSET(0x142081E0)
#define AAEMKJBMJAB_LNBCHCBJEAK_OFFSET UNITYSDK_OFFSET(0x142090E0)
#define AAEMKJBMJAB_MLFCLDIAJAK_OFFSET UNITYSDK_OFFSET(0x14209170)
#define AAEMKJBMJAB_OJJFKBLCBCF_OFFSET UNITYSDK_OFFSET(0x14207E40)
#define AAEMKJBMJAB__CTOR_OFFSET UNITYSDK_OFFSET(0x14207C80)

inline static constexpr unsigned int AAEMKJBMJAB_TypeDefinitionIndex = 75783;

class AAEMKJBMJAB : public ::EHGPCEMPJEO
{
public:
	// static const ::System::String* CLHOHNOGCBP; // 0x0
	// static const ::System::String* AICHEJFBHEB; // 0x0
	// static const ::System::String* ANJCOCKKMAL; // 0x0
	::KCPEDLEBJMH* OLHDBGPNCKI; // 0x28
	::KCPEDLEBJMH* NJABEIPBOOI; // 0x30

	::System::Void _ctor(::OOANHJJCKJK* EGGAALCPEPL, ::MoleMole::ConfigTempleLevelUpEvent* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::OOANHJJCKJK*, ::MoleMole::ConfigTempleLevelUpEvent*))((::PBYTE)hIl2Cpp + AAEMKJBMJAB__CTOR_OFFSET))(this, EGGAALCPEPL, DFMKILICPFB);
	}

	::System::Void OJJFKBLCBCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_OJJFKBLCBCF_OFFSET))(this);
	}

	::System::Void DLJPIEFFNOG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_DLJPIEFFNOG_OFFSET))(this);
	}

	::System::Void LNBCHCBJEAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_LNBCHCBJEAK_OFFSET))(this);
	}

	::System::Void MLFCLDIAJAK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAEMKJBMJAB_MLFCLDIAJAK_OFFSET))(this);
	}
};
