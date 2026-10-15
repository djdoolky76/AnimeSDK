#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace HoudiniEngineUnity { class HEU_InstanceInputUIState; }

#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_COPYTO_OFFSET UNITYSDK_OFFSET(0x1B9295B0)
#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B944CD0)
#define HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_ISEQUIVALENTTO_OFFSET UNITYSDK_OFFSET(0x1B944A70)

namespace HoudiniEngineUnity
{
	class HEU_InstanceInputUIState : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Boolean _showInstanceInputs; // 0x18
		::System::Byte _padding0[0x3];
		::System::Int32 _numInputsToShowUI; // 0x1C
		::System::Int32 _inputsPageIndexUI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_CTOR_OFFSET))(this);
		}

		::System::Void CopyTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_InstanceInputUIState*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_COPYTO_OFFSET))(this, a1);
		}

		::System::Boolean IsEquivalentTo(::HoudiniEngineUnity::HEU_InstanceInputUIState* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HoudiniEngineUnity::HEU_InstanceInputUIState*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_INSTANCEINPUTUISTATE_ISEQUIVALENTTO_OFFSET))(this, a1);
		}

	};
}
