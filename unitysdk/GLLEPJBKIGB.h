#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define GLLEPJBKIGB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14CFB340)
#define GLLEPJBKIGB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14CFB270)
#define GLLEPJBKIGB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14CFB090)
#define GLLEPJBKIGB__CTOR_OFFSET UNITYSDK_OFFSET(0x14CFB330)

inline static constexpr unsigned int GLLEPJBKIGB_TypeDefinitionIndex = 74710;

class GLLEPJBKIGB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* BEHLIFMCDGH; // 0x18
	::UnityEngine::UI::Text* ILPDACLCGCG; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::GameObject* OPDAFMNEOOD; // 0x30
	::UnityEngine::GameObject* BIHKJNGKFJK; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x48
	::UnityEngine::GameObject* FNLONOHJHML; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLEPJBKIGB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLLEPJBKIGB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLLEPJBKIGB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLEPJBKIGB_KGEBDLGBGNM_OFFSET))(this);
	}
};
