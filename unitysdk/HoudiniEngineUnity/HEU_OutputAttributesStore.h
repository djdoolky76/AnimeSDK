#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace HoudiniEngineUnity { class HEU_OutputAttribute; }
namespace HoudiniEngineUnity { class HEU_OutputAttributeDictionary; }
namespace System { class String; }

#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_B10456EE796D56CF_OFFSET UNITYSDK_OFFSET(0x3869740)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_F7C7BABF8238F0C3_OFFSET UNITYSDK_OFFSET(0x3869790)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_FE4D8611E21B415E_OFFSET UNITYSDK_OFFSET(0x3869800)
#define HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE__CTOR_OFFSET UNITYSDK_OFFSET(0x3869920)

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_OutputAttributesStore_TypeDefinitionIndex = 18034;

	class HEU_OutputAttributesStore : public ::UnityEngine::MonoBehaviour
	{
	public:
		::HoudiniEngineUnity::HEU_OutputAttributeDictionary* _attributes; // 0x20

		::System::Void B10456EE796D56CF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_B10456EE796D56CF_OFFSET))(this);
		}

		::System::Void FE4D8611E21B415E(::HoudiniEngineUnity::HEU_OutputAttribute* FB24B131E5CAC227)
		{
			return ((::System::Void(*)(::PVOID, ::HoudiniEngineUnity::HEU_OutputAttribute*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_FE4D8611E21B415E_OFFSET))(this, FB24B131E5CAC227);
		}

		::HoudiniEngineUnity::HEU_OutputAttribute* F7C7BABF8238F0C3(::System::String* F79B4D487F303AB2)
		{
			return ((::HoudiniEngineUnity::HEU_OutputAttribute*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE_F7C7BABF8238F0C3_OFFSET))(this, F79B4D487F303AB2);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOUDINIENGINEUNITY_HEU_OUTPUTATTRIBUTESSTORE__CTOR_OFFSET))(this);
		}
	};
}
