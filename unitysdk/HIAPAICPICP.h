#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HIAPAICPICP__CTOR_OFFSET UNITYSDK_OFFSET(0x14D2FCB0)

inline static constexpr unsigned int HIAPAICPICP_TypeDefinitionIndex = 75503;

class HIAPAICPICP : public ::System::Object
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* OPKDLALOLEB; // 0x10
	::UnityEngine::Animation* MINLDMGENCK; // 0x18
	::MonoUITableScrollV2* PCKPPLABJBC; // 0x20
	::UnityEngine::Animation* ONBGIKPHKHF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HHAOLHCDCEP; // 0x30
	::UnityEngine::RectTransform* KNHJKHGHOFA; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIAPAICPICP__CTOR_OFFSET))(this);
	}
};
