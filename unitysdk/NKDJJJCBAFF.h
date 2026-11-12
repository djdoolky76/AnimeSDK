#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define NKDJJJCBAFF_CTOR_OFFSET UNITYSDK_OFFSET(0xC516720)

inline static constexpr unsigned int NKDJJJCBAFF_TypeDefinitionIndex = 71622;

	class NKDJJJCBAFF : public ::System::Object
	{
	public:
		::UnityEngine::Transform* NGOPIKCKJMA; // 0x10
		::UnityEngine::RectTransform* NBJICLPDGFD; // 0x18
		::UnityEngine::Vector3 BNGJDBHHMFO; // 0x20
		::System::Single OLKEBGEMAOD; // 0x2C
		::UnityEngine::Vector2 DPIJEOOFHIN; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKDJJJCBAFF_CTOR_OFFSET))(this);
		}

	};
