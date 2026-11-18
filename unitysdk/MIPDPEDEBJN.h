#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define MIPDPEDEBJN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DEAB90)
#define MIPDPEDEBJN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DEAA50)
#define MIPDPEDEBJN__CTOR_OFFSET UNITYSDK_OFFSET(0x14DEAB80)

inline static constexpr unsigned int MIPDPEDEBJN_TypeDefinitionIndex = 78440;

class MIPDPEDEBJN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* PPGOGGMDMGF; // 0x18
	::UnityEngine::UI::Text* JDJKPGMLGDN; // 0x20
	::UnityEngine::GameObject* HLJMMLMNFDG; // 0x28
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x30
	::UnityEngine::RectTransform* DNJLPEHIEAE; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::UnityEngine::UI::Text* EPMEILNJMFF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIPDPEDEBJN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIPDPEDEBJN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MIPDPEDEBJN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
