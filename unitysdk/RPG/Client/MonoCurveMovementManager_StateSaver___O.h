#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NotifyHandler; }

namespace RPG::Client
{
	inline static constexpr unsigned int MonoCurveMovementManager_StateSaver___O_TypeDefinitionIndex = 68549;

	class MonoCurveMovementManager_StateSaver___O : public ::System::Object
	{
	public:
		static ::RPG::Client::NotifyHandler** StaticGet__0___OnSwitchMap()
		{
			return (::RPG::Client::NotifyHandler**)UnitySDK::FromName("RPG.Client", "<>O")->GetStaticField(0x5A860);
		}

	};
}
