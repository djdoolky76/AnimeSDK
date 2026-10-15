#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EPedestrianMemberSpecialTag.h"
#include "unitysdk/RPG/Client/IPedestrianMemberExternalConfig.h"
namespace System { class String; }
namespace UnityEngine { class ScriptableObject; }

#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_CTOR_OFFSET UNITYSDK_OFFSET(0xDA967C0)
#define RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_GET_SPECIALTAG_OFFSET UNITYSDK_OFFSET(0xDA967B0)

namespace RPG::Client
{
	class PedestrianMemberExternalConfig_MaterialShowParts : public ::RPG::Client::IPedestrianMemberExternalConfig
	{
	public:
		::System::String* SpecialNPCConfigPath; // 0x10
		::UnityEngine::ScriptableObject* SpecialNPCCollection; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_CTOR_OFFSET))(this);
		}

		::RPG::Client::EPedestrianMemberSpecialTag get_SpecialTag()
		{
			return ((::RPG::Client::EPedestrianMemberSpecialTag(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PEDESTRIANMEMBEREXTERNALCONFIG_MATERIALSHOWPARTS_GET_SPECIALTAG_OFFSET))(this);
		}

	};
}
