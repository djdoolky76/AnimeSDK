#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System { class Object; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define MLGDKFGEKBE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17D49770)
#define MLGDKFGEKBE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17D496A0)
#define MLGDKFGEKBE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17D493F0)
#define MLGDKFGEKBE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D49760)

inline static constexpr unsigned int MLGDKFGEKBE_TypeDefinitionIndex = 62332;

class MLGDKFGEKBE : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* FBIHFNOOPBG; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::GameObject* FICJLJEDNOI; // 0x28
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* OCFLEGNCFIF; // 0x38
	::GCIMMDDIFBJ* EEDABCBODFD; // 0x40
	::UnityEngine::GameObject* POOEPIKINPB; // 0x48
	::KNLFLMMHALL_1<::System::Object*>* HCELOCNANMI; // 0x50
	::LGINJIKKBJA* GHCOFLDPCPE; // 0x58
	::MoleMole::UIGeneralButtonController* IIAPIPEOJCO; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x68
	::MoleMole::MonoGamepadModule* LLILCOICNBM; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLGDKFGEKBE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLGDKFGEKBE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLGDKFGEKBE_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MLGDKFGEKBE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
