#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class ADEJAGFCBHK;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace UnityEngine::UI::Extension { class UITabButton; }
template <typename T> class MEKABAIJMNM_1;

#define BOEEKGGLNFB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F00700)
#define BOEEKGGLNFB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F00650)
#define BOEEKGGLNFB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F00420)
#define BOEEKGGLNFB__CTOR_OFFSET UNITYSDK_OFFSET(0x14F006F0)

inline static constexpr unsigned int BOEEKGGLNFB_TypeDefinitionIndex = 52581;

class BOEEKGGLNFB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UITabButton* NFOPPEIENEJ; // 0x18
	::ADEJAGFCBHK* FJPCAHJIAGA; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UITabButton* MEMILPKMCLB; // 0x30
	::UnityEngine::UI::Extension::UITabButton* JPMIOAGLOAG; // 0x38
	::MEKABAIJMNM_1<::MoleMole::UIFriendSystemWidgetController*>* FOHPJBIPNEK; // 0x40
	::UnityEngine::UI::Extension::UITabButton* NMMGHFDGMGI; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEEKGGLNFB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOEEKGGLNFB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOEEKGGLNFB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOEEKGGLNFB_KGEBDLGBGNM_OFFSET))(this);
	}
};
