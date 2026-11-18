#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FGCOIBFFCHB;
class LGINJIKKBJA;
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define KPNDNIGBPGC__CTOR_OFFSET UNITYSDK_OFFSET(0x19975C50)

inline static constexpr unsigned int KPNDNIGBPGC_TypeDefinitionIndex = 83377;

class KPNDNIGBPGC : public ::System::Object
{
public:
	::UnityEngine::GameObject* DEAPLILJLJD; // 0x10
	::FGCOIBFFCHB* DPDOFDHIBCP; // 0x18
	::FGCOIBFFCHB* ANDFIBAKEAE; // 0x20
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x28
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x30
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x38
	::UnityEngine::GameObject* PPJKENAFHHH; // 0x40
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x48
	::FGCOIBFFCHB* IMENBGPAJOM; // 0x50
	::UnityEngine::GameObject* LKMBHFMLGDO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPNDNIGBPGC__CTOR_OFFSET))(this);
	}
};
