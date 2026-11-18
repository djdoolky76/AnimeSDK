#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HJMKHONLMOJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A51EA0)
#define HJMKHONLMOJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A51D50)
#define HJMKHONLMOJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A51A30)
#define HJMKHONLMOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x17A51E90)

inline static constexpr unsigned int HJMKHONLMOJ_TypeDefinitionIndex = 80201;

class HJMKHONLMOJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NDLEHLCCAKJ; // 0x18
	::UnityEngine::GameObject* IODBDPOLPKA; // 0x20
	::UnityEngine::GameObject* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BMJNDPGHPKE; // 0x30
	::UnityEngine::Transform* AHKNHJKFDCH; // 0x38
	::FGCOIBFFCHB* MDKJDDANKMP; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48
	::UnityEngine::GameObject* DCOHGOMEDMB; // 0x50
	::FGCOIBFFCHB* GPIFJMPGGHH; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x68
	::FGCOIBFFCHB* MAMKMHKDPCA; // 0x70
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x78
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x80
	::MoleMole::MonoGamepadCustomList* FECPHBKCHHN; // 0x88
	::UnityEngine::Transform* JFDOOELFAOA; // 0x90
	::FGCOIBFFCHB* HHKEMPOBDKA; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMKHONLMOJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMKHONLMOJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJMKHONLMOJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HJMKHONLMOJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
