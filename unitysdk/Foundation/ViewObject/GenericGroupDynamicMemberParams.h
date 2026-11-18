#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/EGenericMonsterIdType.h"
#include "unitysdk/MDANEEPAJKA.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace Foundation::ViewObject { class GenericGroupMemberOverrideContext; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

namespace Foundation::ViewObject
{
	inline static constexpr unsigned int GenericGroupDynamicMemberParams_TypeDefinitionIndex = 92461;

	struct alignas(8) GenericGroupDynamicMemberParams
	{
		::System::UInt32 GroupId; // 0x10
		::MDANEEPAJKA MemberType; // 0x14
		::System::Int32 ViewObjectId; // 0x18
		::System::Boolean HasPosition; // 0x1C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Position; // 0x20
		::UnityEngine::Vector3 Rotation; // 0x2C
		::System::String* PointName; // 0x38
		::System::Int32 MonsterId; // 0x40
		::Foundation::ViewObject::EGenericMonsterIdType MonsterIdType; // 0x44
		::System::Action_1<::Foundation::ViewObject::GenericGroupMemberOverrideContext*>* ParamOverride; // 0x48
		::System::Boolean ForceSyncEntityCreate; // 0x50
		::System::Byte _padding1[0x7];
		::System::String* CallerContext; // 0x58
	};
}
