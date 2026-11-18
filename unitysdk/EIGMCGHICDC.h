#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define EIGMCGHICDC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1699D270)
#define EIGMCGHICDC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1699D1A0)
#define EIGMCGHICDC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1699CF60)
#define EIGMCGHICDC__CTOR_OFFSET UNITYSDK_OFFSET(0x1699D260)

inline static constexpr unsigned int EIGMCGHICDC_TypeDefinitionIndex = 63255;

class EIGMCGHICDC : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IMDLHCPGEDN; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x28
	::UnityEngine::UI::Text* MFKBCHAJOGK; // 0x30
	::UnityEngine::UI::Text* OPKDLALOLEB; // 0x38
	::UnityEngine::UI::Text* GDANPDNHLDC; // 0x40
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x48
	::UnityEngine::GameObject* GDLCCFGKNBD; // 0x50
	::UnityEngine::GameObject* FLNDHNJHCEM; // 0x58
	::UnityEngine::GameObject* ECKHKKIOLJD; // 0x60
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x68
	::MoleMole::MonoGamepadSelectable* KDAGHGAKCFA; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGMCGHICDC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGMCGHICDC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EIGMCGHICDC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EIGMCGHICDC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
