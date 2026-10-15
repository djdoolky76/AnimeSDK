#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client::FullBody { class Grounding_BELNPMHCADA; }
namespace RPG::Client::FullBody { class Grounding_FDIMCLFAMBM; }
namespace RPG::Client::FullBody { class Grounding_KEHPPILGEFG; }
namespace RPG::Client::FullBody { class Grounding_PLHFOJLFMGK; }

namespace RPG::Client::FullBody
{
	inline static constexpr unsigned int Grounding___O_TypeDefinitionIndex = 74245;

	class Grounding___O : public ::System::Object
	{
	public:
		static ::RPG::Client::FullBody::Grounding_FDIMCLFAMBM** StaticGet__2___SphereCast()
		{
			return (::RPG::Client::FullBody::Grounding_FDIMCLFAMBM**)UnitySDK::FromName("RPG.Client.FullBody", "<>O")->GetStaticField(0x63540);
		}

		static ::RPG::Client::FullBody::Grounding_BELNPMHCADA** StaticGet__0___Raycast()
		{
			return (::RPG::Client::FullBody::Grounding_BELNPMHCADA**)UnitySDK::FromName("RPG.Client.FullBody", "<>O")->GetStaticField(0x63548);
		}

		static ::RPG::Client::FullBody::Grounding_PLHFOJLFMGK** StaticGet__1___CapsuleCast()
		{
			return (::RPG::Client::FullBody::Grounding_PLHFOJLFMGK**)UnitySDK::FromName("RPG.Client.FullBody", "<>O")->GetStaticField(0x63550);
		}

		static ::RPG::Client::FullBody::Grounding_KEHPPILGEFG** StaticGet__3___BoxCast()
		{
			return (::RPG::Client::FullBody::Grounding_KEHPPILGEFG**)UnitySDK::FromName("RPG.Client.FullBody", "<>O")->GetStaticField(0x63558);
		}

	};
}
