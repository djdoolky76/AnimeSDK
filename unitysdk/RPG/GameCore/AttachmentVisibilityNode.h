#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AttachmentVisibilityNode; }
namespace RPG::GameCore { class DynamicString; }
namespace System { class String; }

#define RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D402B20)
#define RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4028E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AttachmentVisibilityNode_TypeDefinitionIndex = 22374;

	class AttachmentVisibilityNode : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::RPG::GameCore::DynamicString* DynamicName; // 0x18
		::System::Boolean OverridePrefabAttachPoint; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* ParentConstraintName; // 0x28
		::System::String* TriggerEffectPath; // 0x30
		::System::Boolean FollowFirstFrameOnLateTick; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AttachmentVisibilityNode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AttachmentVisibilityNode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ATTACHMENTVISIBILITYNODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
