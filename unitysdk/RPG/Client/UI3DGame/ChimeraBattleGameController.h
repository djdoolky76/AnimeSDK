#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_UI3DGAME_CHIMERABATTLEGAMECONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A0D7DC0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int ChimeraBattleGameController_TypeDefinitionIndex = 78077;

	class ChimeraBattleGameController : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_CHIMERABATTLEGAMECONTROLLER_CTOR_OFFSET))(this);
		}

	};
}
