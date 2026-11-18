#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ENGKHEDKDCL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11CBB620)
#define ENGKHEDKDCL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11CBB470)
#define ENGKHEDKDCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11CBB0F0)
#define ENGKHEDKDCL__CTOR_OFFSET UNITYSDK_OFFSET(0x11CBB610)

inline static constexpr unsigned int ENGKHEDKDCL_TypeDefinitionIndex = 85015;

class ENGKHEDKDCL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* COBCNPHCNFE; // 0x18
	::UnityEngine::Animation* CMCAKLMEKMP; // 0x20
	::LGINJIKKBJA* MFLEBPBJGLH; // 0x28
	::FGCOIBFFCHB* LIDINBBCPME; // 0x30
	::MoleMole::NotificationBadge* IMDLHCPGEDN; // 0x38
	::UnityEngine::Animation* EHPBPNKOIPA; // 0x40
	::UnityEngine::Animation* MGKENAOIENI; // 0x48
	::MoleMole::MonoGamepadModule* JMOAHAABNPA; // 0x50
	::UnityEngine::RectTransform* FCLJAHNBKBA; // 0x58
	::LGINJIKKBJA* IKGCGDECKMD; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* OCLECPKEJNL; // 0x68
	::UnityEngine::Transform* AMLGJLFOLKE; // 0x70
	::LGINJIKKBJA* BKDDKDMILCA; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* PNMJDDOFPBF; // 0x80
	::LGINJIKKBJA* BLBDDAEHMIP; // 0x88
	::UnityEngine::UI::Extension::UILocalizationText* IDJBEAILBIH; // 0x90
	::LGINJIKKBJA* IBGOKKECNHF; // 0x98
	::UnityEngine::UI::Extension::UILocalizationText* GOGAGPOJMPG; // 0xA0
	::LGINJIKKBJA* DLAPECDMIEN; // 0xA8
	::UnityEngine::UI::Extension::UILocalizationText* FEKOMNOKIHO; // 0xB0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKHEDKDCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGKHEDKDCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ENGKHEDKDCL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENGKHEDKDCL_KGEBDLGBGNM_OFFSET))(this);
	}
};
