#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define KNODOBIKMBK_GAFFCGPEJNE_OFFSET UNITYSDK_OFFSET(0x7F6B30)
#define KNODOBIKMBK_MKEFBLKCNKE_OFFSET UNITYSDK_OFFSET(0x7F6B20)
#define KNODOBIKMBK_PKLFFIJCMHO_OFFSET UNITYSDK_OFFSET(0x7F6A80)

inline static constexpr unsigned int KNODOBIKMBK_TypeDefinitionIndex = 85717;

struct alignas(8) KNODOBIKMBK
{
	::System::String* DJJGLILJKEA; // 0x10
	::UnityEngine::Vector2 MEKAFGFKKJD; // 0x18
	::UnityEngine::Vector2 BAPBGCKGNED; // 0x20
	::System::Boolean PHOCINOHHIN; // 0x28

	::System::Boolean PKLFFIJCMHO(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KNODOBIKMBK_PKLFFIJCMHO_OFFSET))(this, HHIJHDFHPOI);
	}

	::SimpleJSON::JSONNode* MKEFBLKCNKE()
	{
		return ((::SimpleJSON::JSONNode*(*)(::PVOID))((::PBYTE)hIl2Cpp + KNODOBIKMBK_MKEFBLKCNKE_OFFSET))(this);
	}

	::System::Boolean GAFFCGPEJNE(::SimpleJSON::JSONNode* HHIJHDFHPOI)
	{
		return ((::System::Boolean(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + KNODOBIKMBK_GAFFCGPEJNE_OFFSET))(this, HHIJHDFHPOI);
	}
};
