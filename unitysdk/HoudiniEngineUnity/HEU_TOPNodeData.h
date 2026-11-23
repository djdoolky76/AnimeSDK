#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HoudiniEngineUnity/HEU_TOPNodeData_AE96DB59B4AB0242.h"
#include "unitysdk/System/Object.h"

class A153F47A5E61F218;
namespace HoudiniEngineUnity { class HEU_TOPWorkResult; }
namespace HoudiniEngineUnity { class HEU_WorkItemTally; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSFAILED_OFFSET UNITYSDK_OFFSET(0x38957A0)
#define HOUDINIENGINEUNITY_HEU_TOPNODEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x38957C0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_TOPNodeData_TypeDefinitionIndex = 18117;

	class HEU_TOPNodeData : public ::System::Object
	{
	public:
		::System::Int32 _nodeID; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* _nodeName; // 0x18
		::System::String* _parentName; // 0x20
		::UnityEngine::GameObject* _workResultParentGO; // 0x28
		::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPWorkResult*>* _workResults; // 0x30
		::A153F47A5E61F218* _tags; // 0x38
		::System::Boolean _showResults; // 0x40
		::System::Byte _padding1[0x3];
		::HoudiniEngineUnity::HEU_TOPNodeData_AE96DB59B4AB0242 _pdgState; // 0x44
		::HoudiniEngineUnity::HEU_WorkItemTally* _workItemTally; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean AnyWorkItemsFailed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_TOPNODEDATA_ANYWORKITEMSFAILED_OFFSET))(this);
		}
	};
}
