#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NHFBMKKNPCA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1AE20990)
#define NHFBMKKNPCA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1AE208C0)
#define NHFBMKKNPCA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1AE206C0)
#define NHFBMKKNPCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE20980)

inline static constexpr unsigned int NHFBMKKNPCA_TypeDefinitionIndex = 43081;

class NHFBMKKNPCA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* IOBBIDNNCHH; // 0x18
	::MoleMole::MonoGamepadSelectable* DANNBOGNOEH; // 0x20
	::UnityEngine::GameObject* AMHBMNEBFMK; // 0x28
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x30
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x40
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x48
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x50
	::MoleMole::NotificationBadgeEx* IMDLHCPGEDN; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFBMKKNPCA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHFBMKKNPCA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NHFBMKKNPCA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHFBMKKNPCA_KGEBDLGBGNM_OFFSET))(this);
	}
};
