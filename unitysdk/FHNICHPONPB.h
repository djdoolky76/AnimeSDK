#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FHNICHPONPB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x174FBF40)
#define FHNICHPONPB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x174FBE30)
#define FHNICHPONPB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x174FBBE0)
#define FHNICHPONPB__CTOR_OFFSET UNITYSDK_OFFSET(0x174FBF30)

inline static constexpr unsigned int FHNICHPONPB_TypeDefinitionIndex = 59502;

class FHNICHPONPB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x18
	::UnityEngine::GameObject* MAFDHDOCFDG; // 0x20
	::UnityEngine::GameObject* GLMNBDNDMGK; // 0x28
	::LGINJIKKBJA* FGLGMLDBIOO; // 0x30
	::MoleMole::NotificationBadge* PLJOGPIBEIA; // 0x38
	::UnityEngine::Animation* OBNLBMABFPF; // 0x40
	::LGINJIKKBJA* LAFBOBNNAMP; // 0x48
	::UnityEngine::RectTransform* NLNAHDIJEDM; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* JHIGDEKCBND; // 0x58
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNICHPONPB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHNICHPONPB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FHNICHPONPB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHNICHPONPB_KGEBDLGBGNM_OFFSET))(this);
	}
};
