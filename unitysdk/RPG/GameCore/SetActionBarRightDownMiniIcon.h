#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetActionBarRightDownMiniIcon; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA64B10)
#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA64B20)
#define RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA64AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetActionBarRightDownMiniIcon_TypeDefinitionIndex = 23280;

	class SetActionBarRightDownMiniIcon : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* IconPath; // 0x20
		::System::Boolean IsShow; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetActionBarRightDownMiniIcon* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetActionBarRightDownMiniIcon*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETACTIONBARRIGHTDOWNMINIICON_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
