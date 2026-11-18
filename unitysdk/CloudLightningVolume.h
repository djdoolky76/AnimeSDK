#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"

namespace UnityEngine { class Transform; }

#define CLOUDLIGHTNINGVOLUME_DEFAULT_OFFSET UNITYSDK_OFFSET(0x16E42ED0)
#define CLOUDLIGHTNINGVOLUME_GETWORLDMATRIX_OFFSET UNITYSDK_OFFSET(0x79ECA0)

inline static constexpr unsigned int CloudLightningVolume_TypeDefinitionIndex = 26888;

struct alignas(4) CloudLightningVolume
{
	::UnityEngine::Vector3 position; // 0x10
	::UnityEngine::Vector3 size; // 0x1C
	::UnityEngine::Vector3 rotation; // 0x28

	/*
	static ::CloudLightningVolume Default()
	{
		return ((::CloudLightningVolume(*)())((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGVOLUME_DEFAULT_OFFSET))();
	}
	*/

	::UnityEngine::Matrix4x4 GetWorldMatrix(::UnityEngine::Transform* parent)
	{
		return ((::UnityEngine::Matrix4x4(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLOUDLIGHTNINGVOLUME_GETWORLDMATRIX_OFFSET))(this, parent);
	}
};
