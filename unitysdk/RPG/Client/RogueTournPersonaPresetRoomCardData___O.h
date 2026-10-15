#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class RogueTournPersonaRoomAttributeData; }
namespace System { template <typename T1, typename T2> class Func_2; }

namespace RPG::Client
{
	inline static constexpr unsigned int RogueTournPersonaPresetRoomCardData___O_TypeDefinitionIndex = 67733;

	class RogueTournPersonaPresetRoomCardData___O : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>** StaticGet__0___GetData()
		{
			return (::System::Func_2<::System::UInt32, ::RPG::Client::RogueTournPersonaRoomAttributeData*>**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x6D730);
		}

	};
}
