#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BMGJADOGNOC_MFMPCLAGILL_OFFSET UNITYSDK_OFFSET(0x15089D00)
#define BMGJADOGNOC__CTOR_OFFSET UNITYSDK_OFFSET(0x15089CF0)

inline static constexpr unsigned int BMGJADOGNOC_TypeDefinitionIndex = 51133;

class BMGJADOGNOC : public ::System::Object
{
public:
	::UnityEngine::RectTransform* DBNBFANCOJP; // 0x10
	::UnityEngine::RectTransform* IKAEPFJBNLD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMGJADOGNOC__CTOR_OFFSET))(this);
	}

	::UnityEngine::GameObject* MFMPCLAGILL(::System::String* LMNMDBJPHMM, ::UnityEngine::Transform* DOLLKCINIDJ)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + BMGJADOGNOC_MFMPCLAGILL_OFFSET))(this, LMNMDBJPHMM, DOLLKCINIDJ);
	}
};
