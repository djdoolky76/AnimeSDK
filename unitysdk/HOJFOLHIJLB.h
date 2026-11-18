#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class NHFJJFFCDFM;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class KNLFLMMHALL_1;

#define HOJFOLHIJLB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B1B7E0)
#define HOJFOLHIJLB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B1B6F0)
#define HOJFOLHIJLB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B1B4C0)
#define HOJFOLHIJLB__CTOR_OFFSET UNITYSDK_OFFSET(0x17B1B7D0)

inline static constexpr unsigned int HOJFOLHIJLB_TypeDefinitionIndex = 59538;

class HOJFOLHIJLB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HMBAEGDOIKA; // 0x28
	::UnityEngine::UI::Text* EMOJABAOCLE; // 0x30
	::MoleMole::UIGeneralButtonController* EPHPOEEOMHE; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x40
	::UnityEngine::GameObject* CNDCHJDEFMK; // 0x48
	::KNLFLMMHALL_1<::NHFJJFFCDFM*>* HFDNEOOLNLN; // 0x50
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJFOLHIJLB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOJFOLHIJLB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HOJFOLHIJLB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOJFOLHIJLB_KGEBDLGBGNM_OFFSET))(this);
	}
};
