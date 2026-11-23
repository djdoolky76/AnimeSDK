#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_HoudiniAsset; }
namespace UnityEngine { class GameObject; }

#define HEU_SCRIPTPARAMETEREXAMPLE__CTOR_OFFSET UNITYSDK_OFFSET(0x38954F0)

inline static constexpr unsigned int HEU_ScriptParameterExample_TypeDefinitionIndex = 18098;

class HEU_ScriptParameterExample : public ::UnityEngine::MonoBehaviour
{
public:
	::UnityEngine::GameObject* _evergreenGameObject; // 0x20
	::HoudiniEngineUnity::HEU_HoudiniAsset* B9616852435C9ACD; // 0x28
	::System::Single _updateRate; // 0x30
	::System::Single _scale; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEU_SCRIPTPARAMETEREXAMPLE__CTOR_OFFSET))(this);
	}
};
