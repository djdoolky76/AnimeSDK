#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwitchHandLayItem; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SWITCHHANDLAYITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42600)
#define RPG_GAMECORE_SWITCHHANDLAYITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42610)
#define RPG_GAMECORE_SWITCHHANDLAYITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB425D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwitchHandLayItem_TypeDefinitionIndex = 20966;

	class SwitchHandLayItem : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single WaitAnimTime; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwitchHandLayItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwitchHandLayItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWITCHHANDLAYITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
