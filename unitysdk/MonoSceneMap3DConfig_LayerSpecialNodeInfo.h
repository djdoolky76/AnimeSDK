#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define MONOSCENEMAP3DCONFIG_LAYERSPECIALNODEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x13EBA6D0)

inline static constexpr unsigned int MonoSceneMap3DConfig_LayerSpecialNodeInfo_TypeDefinitionIndex = 71257;

class MonoSceneMap3DConfig_LayerSpecialNodeInfo : public ::System::Object
{
public:
	::System::Int32 LayerIndex; // 0x10
	::System::Byte _padding0[0x4];
	::UnityEngine::GameObject* Node; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOSCENEMAP3DCONFIG_LAYERSPECIALNODEINFO__CTOR_OFFSET))(this);
	}
};
