#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define AAPOLGKLPNN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x144B27C0)
#define AAPOLGKLPNN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x144B2710)
#define AAPOLGKLPNN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x144B24C0)
#define AAPOLGKLPNN__CTOR_OFFSET UNITYSDK_OFFSET(0x144B27B0)

inline static constexpr unsigned int AAPOLGKLPNN_TypeDefinitionIndex = 69084;

class AAPOLGKLPNN : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HMLLDMOOHAH; // 0x18
	::GCIMMDDIFBJ* CMCAKLMEKMP; // 0x20
	::UnityEngine::GameObject* LANCCMNPFLA; // 0x28
	::UnityEngine::RectTransform* EKCDMBNIJMI; // 0x30
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x38
	::UnityEngine::GameObject* MLLEAEOEEDO; // 0x40
	::FGCOIBFFCHB* OCJOCLEDABL; // 0x48
	::UnityEngine::GameObject* BFLHDFGKFKK; // 0x50
	::UnityEngine::GameObject* AMDOJEICBHM; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPOLGKLPNN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAPOLGKLPNN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + AAPOLGKLPNN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAPOLGKLPNN_KGEBDLGBGNM_OFFSET))(this);
	}
};
