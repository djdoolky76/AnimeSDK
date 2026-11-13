#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TrainPartyModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierReplaceGridOnUseSpecialCardConfig; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5DD620)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F5DD630)
#define RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F5DD930)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierReplaceGridOnUseSpecialCardConfig_TypeDefinitionIndex = 18264;

	class TrainPartyModifierReplaceGridOnUseSpecialCardConfig : public ::RPG::GameCore::TrainPartyModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierReplaceGridOnUseSpecialCardConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERREPLACEGRIDONUSESPECIALCARDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
