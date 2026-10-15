#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_ATTACHMENTBONE_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AA1A0)

namespace RPG::Client
{
	class AttachmentBone : public ::System::Object
	{
	public:
		::System::String* UniqueName; // 0x10
		::System::Boolean AllowUpdate; // 0x18
		::System::Byte _padding0[0x7];
		::System::String* AttachmentRootName; // 0x20
		::UnityEngine::Transform* AttachmentRoot; // 0x28
		::System::String* TargetBoneName; // 0x30
		::UnityEngine::Transform* TargetBone; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ATTACHMENTBONE_CTOR_OFFSET))(this);
		}

	};
}
