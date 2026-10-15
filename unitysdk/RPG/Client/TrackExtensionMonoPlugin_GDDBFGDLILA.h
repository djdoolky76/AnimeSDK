#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GDDBFGDLILA_CCTOR_OFFSET UNITYSDK_OFFSET(0xE2AB9F0)

namespace RPG::Client
{
	inline static constexpr unsigned int TrackExtensionMonoPlugin_GDDBFGDLILA_TypeDefinitionIndex = 71030;

	struct alignas(4) TrackExtensionMonoPlugin_GDDBFGDLILA
	{
		::UnityEngine::Vector3 PECPBEOHOJC; // 0x10
		::UnityEngine::Vector3 HLENMDAPAGH; // 0x1C
		::UnityEngine::Vector3 NKDECDGECFL; // 0x28
		::UnityEngine::Vector3 LLKCEKEOIME; // 0x34
		static ::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA* StaticGet_KPJGDHLENIP()
		{
			return (::RPG::Client::TrackExtensionMonoPlugin_GDDBFGDLILA*)UnitySDK::FromName("RPG.Client", "GDDBFGDLILA")->GetStaticField(0x5C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_TRACKEXTENSIONMONOPLUGIN_GDDBFGDLILA_CCTOR_OFFSET))();
		}

	};
}
