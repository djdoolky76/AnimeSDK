#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIInLevelAbyssS2ArtifactDisappearPopWindowController; }
namespace System { class Action; }

#define LBJDAPBCHBA_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1A2EA6E0)
#define LBJDAPBCHBA_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1A2EA790)
#define LBJDAPBCHBA_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1A2EA460)
#define LBJDAPBCHBA_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x1A2EA6A0)
#define LBJDAPBCHBA_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x1A2EA450)
#define LBJDAPBCHBA_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x1A2EA660)
#define LBJDAPBCHBA_OGHHNHFCFMI_OFFSET UNITYSDK_OFFSET(0x1A2EA740)
#define LBJDAPBCHBA__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EA780)

inline static constexpr unsigned int LBJDAPBCHBA_TypeDefinitionIndex = 56154;

class LBJDAPBCHBA : public ::System::Object
{
public:
	::HGAJKHIMKJP* MPBEENOFDMD; // 0x10
	::MoleMole::UIInLevelAbyssS2ArtifactDisappearPopWindowController* JCHGFPODBNC; // 0x18
	::System::Boolean PAGDBKODNOH; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA__CTOR_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_CHCGMACMJLD_OFFSET))(this);
	}

	::System::Void OGHHNHFCFMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_OGHHNHFCFMI_OFFSET))(this);
	}

	static ::LBJDAPBCHBA* COKNIICCODC(::HGAJKHIMKJP* NOMJCGFBFJE)
	{
		return ((::LBJDAPBCHBA*(*)(::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + LBJDAPBCHBA_COKNIICCODC_OFFSET))(NOMJCGFBFJE);
	}
};
