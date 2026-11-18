#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BKIMIIGEDOP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x115F76B0)
#define BKIMIIGEDOP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115F7570)
#define BKIMIIGEDOP__CTOR_OFFSET UNITYSDK_OFFSET(0x115F76A0)

inline static constexpr unsigned int BKIMIIGEDOP_TypeDefinitionIndex = 64073;

class BKIMIIGEDOP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PGCFKHKBDMC; // 0x18
	::UnityEngine::GameObject* KMKFIKNCAJO; // 0x20
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* IODBDPOLPKA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKIMIIGEDOP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKIMIIGEDOP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BKIMIIGEDOP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
