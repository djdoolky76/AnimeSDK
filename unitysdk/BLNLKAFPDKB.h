#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BLNLKAFPDKB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1151B0A0)
#define BLNLKAFPDKB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1151AFA0)
#define BLNLKAFPDKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1151B090)

inline static constexpr unsigned int BLNLKAFPDKB_TypeDefinitionIndex = 79672;

class BLNLKAFPDKB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* EHMLMJKEJMM; // 0x18
	::MoleMole::MonoInputKey* KFOKPEHEAPI; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x28
	::MoleMole::MonoInputKey* OAHEPEEKOIC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLNLKAFPDKB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLNLKAFPDKB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLNLKAFPDKB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
