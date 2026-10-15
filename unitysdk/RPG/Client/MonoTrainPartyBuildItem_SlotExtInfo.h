#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xD866160)
#define RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_DPEPECGKHDK_OFFSET UNITYSDK_OFFSET(0xD866020)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItem_SlotExtInfo_TypeDefinitionIndex = 68876;

	class MonoTrainPartyBuildItem_SlotExtInfo : public ::System::Object
	{
	public:
		::UnityEngine::Transform* anchor; // 0x10
		::System::UInt32 dynamicID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_CTOR_OFFSET))(this);
		}

		::System::Boolean DPEPECGKHDK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEM_SLOTEXTINFO_DPEPECGKHDK_OFFSET))(this);
		}

	};
}
