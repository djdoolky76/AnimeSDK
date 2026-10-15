#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
namespace RPG::Client { class AudienceIdentityData; }
namespace System { class String; }

#define RPG_CLIENT_AUDIENCEASSETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AAE90)
#define RPG_CLIENT_AUDIENCEASSETCONFIG_PAABEMLAHOL_OFFSET UNITYSDK_OFFSET(0xC6AAD90)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceAssetConfig_TypeDefinitionIndex = 69121;

	class AudienceAssetConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::RPG::Client::AudienceIdentityData*>* identityData; // 0x18
		// static const ::System::String* DEFAULT_CONFIG_PATH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEASSETCONFIG_CTOR_OFFSET))(this);
		}

		::RPG::Client::AudienceIdentityData* PAABEMLAHOL(::System::String* a1)
		{
			return ((::RPG::Client::AudienceIdentityData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCEASSETCONFIG_PAABEMLAHOL_OFFSET))(this, a1);
		}

	};
}
