#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define LMPLOCILIHL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xD43A900)
#define LMPLOCILIHL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xD43A7F0)
#define LMPLOCILIHL__CTOR_OFFSET UNITYSDK_OFFSET(0xD43A8F0)

inline static constexpr unsigned int LMPLOCILIHL_TypeDefinitionIndex = 81893;

class LMPLOCILIHL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* OMKKKALAKHL; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* BBDGAHLPKJA; // 0x20
	::UnityEngine::RectTransform* BJJKOBOHOMK; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* NPIGIMFNGAD; // 0x30
	::UnityEngine::RectTransform* LDBFHDNHAEA; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMPLOCILIHL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMPLOCILIHL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LMPLOCILIHL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
