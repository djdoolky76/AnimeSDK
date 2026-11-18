#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HGAJKHIMKJP;
namespace MoleMole { class UIInLevelAbyssS2ArtifactPurityPopWindowController; }
namespace System { class Action; }

#define OJIHEAPFIJI_CHCGMACMJLD_OFFSET UNITYSDK_OFFSET(0x1B79FE60)
#define OJIHEAPFIJI_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1B79FF10)
#define OJIHEAPFIJI_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x1B79FBD0)
#define OJIHEAPFIJI_HLBKHEFJAPH_OFFSET UNITYSDK_OFFSET(0x1B79FE20)
#define OJIHEAPFIJI_JNENFEELMBP_OFFSET UNITYSDK_OFFSET(0x1B79FBC0)
#define OJIHEAPFIJI_NJIJOCMEKBO_OFFSET UNITYSDK_OFFSET(0x1B79FDE0)
#define OJIHEAPFIJI_OGHHNHFCFMI_OFFSET UNITYSDK_OFFSET(0x1B79FEC0)
#define OJIHEAPFIJI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B79FF00)

inline static constexpr unsigned int OJIHEAPFIJI_TypeDefinitionIndex = 82818;

class OJIHEAPFIJI : public ::System::Object
{
public:
	::HGAJKHIMKJP* NCIKKMJHDAN; // 0x10
	::HGAJKHIMKJP* MPBEENOFDMD; // 0x18
	::MoleMole::UIInLevelAbyssS2ArtifactPurityPopWindowController* JCHGFPODBNC; // 0x20
	::System::Boolean DBBIDCBDBDB; // 0x28
	::System::Boolean PAGDBKODNOH; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI__CTOR_OFFSET))(this);
	}

	::System::Boolean JNENFEELMBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_JNENFEELMBP_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA(::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_HFBPONNNLBA_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJIJOCMEKBO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_NJIJOCMEKBO_OFFSET))(this);
	}

	::System::Int32 HLBKHEFJAPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_HLBKHEFJAPH_OFFSET))(this);
	}

	::System::Void CHCGMACMJLD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_CHCGMACMJLD_OFFSET))(this);
	}

	static ::OJIHEAPFIJI* COKNIICCODC(::HGAJKHIMKJP* NOMJCGFBFJE, ::HGAJKHIMKJP* FAPDDEKECCL)
	{
		return ((::OJIHEAPFIJI*(*)(::HGAJKHIMKJP*, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_COKNIICCODC_OFFSET))(NOMJCGFBFJE, FAPDDEKECCL);
	}

	::System::Void OGHHNHFCFMI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJIHEAPFIJI_OGHHNHFCFMI_OFFSET))(this);
	}
};
