#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetComponentAssetLoadState; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9D220)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9D260)
#define RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9D1B0)

namespace RPG::GameCore
{
	class SetComponentAssetLoadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Load; // 0x20
		::System::Byte _padding0[0x3];
		::System::Int32 LoadIndex; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetLoadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetComponentAssetLoadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetComponentAssetLoadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCOMPONENTASSETLOADSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
