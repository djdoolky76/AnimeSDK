#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class SkinnedMeshRenderer; }

#define ACCESSORYCONTROLBLENDSHAPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CA31300)
#define ACCESSORYCONTROLBLENDSHAPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CA30EB0)
#define ACCESSORYCONTROLBLENDSHAPE_SETBLENDSHAPE_OFFSET UNITYSDK_OFFSET(0x1CA30F00)
#define ACCESSORYCONTROLBLENDSHAPE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CA312B0)
#define ACCESSORYCONTROLBLENDSHAPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA315C0)

inline static constexpr unsigned int AccessoryControlBlendShape_TypeDefinitionIndex = 26226;

class AccessoryControlBlendShape : public ::UnityEngine::MonoBehaviour
{
public:
	// static const ::System::Int32 failMaxNumber = 0x5; // 0x0
	::System::Int32 mopherRendererIndex; // 0x18
	::System::Int32 blendShapeChannel; // 0x1C
	::System::Single blendShapeValue; // 0x20
	::System::Byte _padding0[0x4];
	::UnityEngine::SkinnedMeshRenderer* mopherRenderer; // 0x28
	::System::Single blendShapeOriginalValue; // 0x30
	::System::Boolean hasSetValue; // 0x34
	::System::Byte _padding1[0x3];
	::System::Int32 failNum; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCESSORYCONTROLBLENDSHAPE__CTOR_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCESSORYCONTROLBLENDSHAPE_ONENABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCESSORYCONTROLBLENDSHAPE_UPDATE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCESSORYCONTROLBLENDSHAPE_ONDISABLE_OFFSET))(this);
	}

	::System::Void SetBlendShape()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACCESSORYCONTROLBLENDSHAPE_SETBLENDSHAPE_OFFSET))(this);
	}
};
