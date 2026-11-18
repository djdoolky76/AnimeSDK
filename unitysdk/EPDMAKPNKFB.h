#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define EPDMAKPNKFB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x169B35B0)
#define EPDMAKPNKFB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x169B34A0)
#define EPDMAKPNKFB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169B31F0)
#define EPDMAKPNKFB__CTOR_OFFSET UNITYSDK_OFFSET(0x169B35A0)

inline static constexpr unsigned int EPDMAKPNKFB_TypeDefinitionIndex = 44420;

class EPDMAKPNKFB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* LKCPFCFFILO; // 0x18
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x20
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x28
	::UnityEngine::UI::Text* KGALLHPOJIB; // 0x30
	::UnityEngine::GameObject* MLANHMGFNHP; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x48
	::UnityEngine::GameObject* FDJHEBHLJLD; // 0x50
	::UnityEngine::GameObject* HMOODFDNIPN; // 0x58
	::FGCOIBFFCHB* LNGHMAOGLAN; // 0x60
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x68
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x70
	::UnityEngine::GameObject* JEAKFDDHAEC; // 0x78
	::UnityEngine::GameObject* LHNDOEOOOOC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDMAKPNKFB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDMAKPNKFB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPDMAKPNKFB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPDMAKPNKFB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
