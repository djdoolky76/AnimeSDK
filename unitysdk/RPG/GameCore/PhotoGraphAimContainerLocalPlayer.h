#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PhotoGraphAimContainerTargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PhotoGraphAimContainerLocalPlayer; }

#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E1950)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E1990)
#define RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E18D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PhotoGraphAimContainerLocalPlayer_TypeDefinitionIndex = 17518;

	class PhotoGraphAimContainerLocalPlayer : public ::RPG::GameCore::PhotoGraphAimContainerTargetBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphAimContainerLocalPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHAIMCONTAINERLOCALPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
