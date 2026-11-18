#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AKHIFBHCGGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12664AC0)
#define AKHIFBHCGGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12664980)
#define AKHIFBHCGGG__CTOR_OFFSET UNITYSDK_OFFSET(0x12664AB0)

inline static constexpr unsigned int AKHIFBHCGGG_TypeDefinitionIndex = 72995;

class AKHIFBHCGGG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BPDONKAIKAB; // 0x18
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* KMCJDLNKHEM; // 0x28
	::UnityEngine::GameObject* OCAJHOMAJCO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* PDPECNFKLEJ; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* EBFIMFJMEHL; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKHIFBHCGGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKHIFBHCGGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AKHIFBHCGGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
