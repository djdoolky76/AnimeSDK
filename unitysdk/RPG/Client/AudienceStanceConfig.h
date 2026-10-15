#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace System { class Object; }

#define RPG_CLIENT_AUDIENCESTANCECONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0xC6AC7F0)
#define RPG_CLIENT_AUDIENCESTANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC6AC7E0)

namespace RPG::Client
{
	inline static constexpr unsigned int AudienceStanceConfig_TypeDefinitionIndex = 69157;

	class AudienceStanceConfig : public ::UnityEngine::ScriptableObject
	{
	public:
		::Il2CppArray<::System::Object*>* cellConfigs; // 0x18
		static ::UnityEngine::Vector2* StaticGet_RANDOM_OFFSET()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("RPG.Client", "AudienceStanceConfig")->GetStaticField(0x11080);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCESTANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_AUDIENCESTANCECONFIG_CCTOR_OFFSET))();
		}

	};
}
