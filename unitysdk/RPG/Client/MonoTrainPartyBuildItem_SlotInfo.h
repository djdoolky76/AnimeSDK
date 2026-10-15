#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoTrainPartyBuildItem_TagType.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD86F6C0)

namespace RPG::Client
{
	class MonoTrainPartyBuildItem_SlotInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* anchor; // 0x10
		::RPG::Client::MonoTrainPartyBuildItem_TagType tags; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* extInfos; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTINFO_CTOR_OFFSET))(this);
		}

	};
}
