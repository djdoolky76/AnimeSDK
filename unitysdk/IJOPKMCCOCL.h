#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define IJOPKMCCOCL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x197CFC30)
#define IJOPKMCCOCL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x197CFB30)
#define IJOPKMCCOCL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x197CF870)
#define IJOPKMCCOCL__CTOR_OFFSET UNITYSDK_OFFSET(0x197CFC20)

inline static constexpr unsigned int IJOPKMCCOCL_TypeDefinitionIndex = 92431;

class IJOPKMCCOCL : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x18
	::UnityEngine::GameObject* HKLINGLNGAL; // 0x20
	::UnityEngine::GameObject* ODKGAHDFMAP; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::GameObject* NKAGKIILBDN; // 0x38
	::LGINJIKKBJA* JBAGBGPNPDL; // 0x40
	::FGCOIBFFCHB* CGBOLFKFHGD; // 0x48
	::UnityEngine::GameObject* HFEHDHCNJHB; // 0x50
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x58
	::UnityEngine::GameObject* JOFNFMLJPGP; // 0x60
	::MoleMole::NotificationBadgeEx* PLJOGPIBEIA; // 0x68
	::UnityEngine::GameObject* BAIBLEJJNMI; // 0x70
	::UnityEngine::RectTransform* PKFPMGMANDK; // 0x78
	::FGCOIBFFCHB* KEHECMCDLFC; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJOPKMCCOCL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJOPKMCCOCL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJOPKMCCOCL_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IJOPKMCCOCL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
