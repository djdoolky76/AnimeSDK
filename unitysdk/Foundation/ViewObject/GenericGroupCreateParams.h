#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/GenericGroupMemberTransformOverride.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::ViewObject { class GenericGroupMemberOverrideContext; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupCreateParams_TypeDefinitionIndex = 66195;

	struct alignas(8) GenericGroupCreateParams
	{
		::UnityEngine::Vector3 PositionOffset; // 0x10
		::UnityEngine::Vector3 RotationOffset; // 0x1C
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Foundation::ViewObject::GenericGroupMemberTransformOverride>* MemberTransformOverrides; // 0x28
		::System::Action_1<::Foundation::ViewObject::GenericGroupMemberOverrideContext*>* MemberParamOverride; // 0x30
		::System::Boolean ForceSyncEntityCreate; // 0x38
	};
}
