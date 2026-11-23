#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_COPYTO_OFFSET UNITYSDK_OFFSET(0x3814590)
#define HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x38145E0)
#define HOUDINIENGINEUNITY_HEU_INPUTHDAINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x3814650)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputHDAInfo_TypeDefinitionIndex = 17917;

	class HEU_InputHDAInfo : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* _pendingGO; // 0x10
		::UnityEngine::GameObject* _connectedGO; // 0x18
		::System::Int32 _connectedInputNodeID; // 0x20
		::System::Int32 _connectedMergeNodeID; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTHDAINFO__CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InputHDAInfo* B653B60D9711662D)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputHDAInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_COPYTO_OFFSET))(this, B653B60D9711662D);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InputHDAInfo* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InputHDAInfo*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INPUTHDAINFO_ISEQUIVALENTTO_OFFSET))(this, BEEE7A5A60941632);
		}
	};
}
