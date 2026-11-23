#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace HoudiniEngineUnity { class HEU_AttributeData; }
namespace HoudiniEngineUnity { class HEU_ToolsInfo; }
namespace System { class Object; }

#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_E0BEF346D09AA512_INVOKE_OFFSET UNITYSDK_OFFSET(0x2911D30)
#define HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_E0BEF346D09AA512__CTOR_OFFSET UNITYSDK_OFFSET(0x38430F0)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_AttributesStore_E0BEF346D09AA512_TypeDefinitionIndex = 17945;

	class HEU_AttributesStore_E0BEF346D09AA512 : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* A351543A0362EB15, ::System::IntPtr EA8FABEC6D125B33)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_E0BEF346D09AA512__CTOR_OFFSET))(this, A351543A0362EB15, EA8FABEC6D125B33);
		}

		::System::Void Invoke(::HoudiniEngineUnity::HEU_AttributeData* FC41F2E6A7E07454, ::System::Int32 FABAF82C456CAB3B, ::HoudiniEngineUnity::HEU_ToolsInfo* F73862CF4D71AFE9, ::System::Int32 FB6C91A975661639, ::System::Single B791A810F7BD5DA2)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_AttributeData*, ::System::Int32, ::HoudiniEngineUnity::HEU_ToolsInfo*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_ATTRIBUTESSTORE_E0BEF346D09AA512_INVOKE_OFFSET))(this, FC41F2E6A7E07454, FABAF82C456CAB3B, F73862CF4D71AFE9, FB6C91A975661639, B791A810F7BD5DA2);
		}
	};
}
