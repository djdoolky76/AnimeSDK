#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client::CrowdAnimator
{
	inline static constexpr unsigned int CrowdRenderer___O_TypeDefinitionIndex = 73725;

	class CrowdRenderer___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___OnCameraSwitch()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client.CrowdAnimator", "<>O")->GetStaticField(0x1CE10);
		}

	};
}
