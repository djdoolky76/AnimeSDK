#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BFNEDOLPIOO.h"

class JGNKIMGPHGC;
namespace MoleMole { class UIGeneralBottomTipsContainerPopWindowController; }
namespace MoleMole { class UIGeneralTutorialTipsRowWidgetController; }
namespace System { class Object; }
namespace System { class String; }

#define JOGIKHIEFDG_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x187544D0)
#define JOGIKHIEFDG_CPOLHKPOMEC_OFFSET UNITYSDK_OFFSET(0x18754C50)
#define JOGIKHIEFDG_HFBPONNNLBA_OFFSET UNITYSDK_OFFSET(0x18754520)
#define JOGIKHIEFDG_LIFLAKLIPHN_OFFSET UNITYSDK_OFFSET(0x18754C40)
#define JOGIKHIEFDG_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x18754AC0)
#define JOGIKHIEFDG__CTOR_OFFSET UNITYSDK_OFFSET(0x187544E0)

inline static constexpr unsigned int JOGIKHIEFDG_TypeDefinitionIndex = 84946;

class JOGIKHIEFDG : public ::BFNEDOLPIOO
{
public:
	::JGNKIMGPHGC* MMCAOEDLJLA; // 0x30
	::MoleMole::UIGeneralBottomTipsContainerPopWindowController* GFANGJBKIBA; // 0x38
	::Il2CppArray<::System::Object*>* NFNIDCMLECF; // 0x40
	::MoleMole::UIGeneralTutorialTipsRowWidgetController* NHJJFLPHAGI; // 0x48
	::System::String* EFAPBHOMALC; // 0x50
	::System::Boolean ICDFHNDJOCE; // 0x58

	::System::Void _ctor(::JGNKIMGPHGC* AMJADGKJAPK, ::System::String* BCJBPGEAIMN, ::Il2CppArray<::System::Object*>* EHEMFBGJOJF)
	{
		return ((::System::Void(*)(::PVOID, ::JGNKIMGPHGC*, ::System::String*, ::Il2CppArray<::System::Object*>*))((::PBYTE)hIl2Cpp + JOGIKHIEFDG__CTOR_OFFSET))(this, AMJADGKJAPK, BCJBPGEAIMN, EHEMFBGJOJF);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void HFBPONNNLBA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_HFBPONNNLBA_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_OENOEFBECOA_OFFSET))(this);
	}

	::System::Void LIFLAKLIPHN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_LIFLAKLIPHN_OFFSET))(this);
	}

	::System::Void CPOLHKPOMEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOGIKHIEFDG_CPOLHKPOMEC_OFFSET))(this);
	}
};
