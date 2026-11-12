#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }

#define RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND_CTOR_OFFSET UNITYSDK_OFFSET(0xE2C1DB0)

namespace RPG::Client
{
	inline static constexpr unsigned int MonoTrainPartyBuildItemDynamicBind_TypeDefinitionIndex = 70835;

	class MonoTrainPartyBuildItemDynamicBind : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::System::Object*>* Binds; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOTRAINPARTYBUILDITEMDYNAMICBIND_CTOR_OFFSET))(this);
		}

	};
}
