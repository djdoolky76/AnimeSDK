#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimView.h"
namespace RPG::GameCore { class FiveDimPropBakedMoveConfig; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_BOGNEMMLEBI_OFFSET UNITYSDK_OFFSET(0x1C37EAA0)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0x1C37EF10)
#define RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_NHKKADGFBHA_OFFSET UNITYSDK_OFFSET(0x1C37EBF0)

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCleanerBotView_TypeDefinitionIndex = 79505;

	class FiveDimCleanerBotView : public ::RPG::Client::LittleGame::FiveDim::FiveDimView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_CTOR_OFFSET))(this);
		}

		::System::Void BOGNEMMLEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_BOGNEMMLEBI_OFFSET))(this);
		}

		::System::Void NHKKADGFBHA(::UnityEngine::Transform* a1, ::RPG::GameCore::FiveDimPropBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::RPG::GameCore::FiveDimPropBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FIVEDIM_FIVEDIMCLEANERBOTVIEW_NHKKADGFBHA_OFFSET))(this, a1, a2);
		}

	};
}
