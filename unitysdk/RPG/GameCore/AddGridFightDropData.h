#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightDropCfgType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddGridFightDropData; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3880E0)
#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3880F0)
#define RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3880B0)

namespace RPG::GameCore
{
	class AddGridFightDropData : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::GridFightDropCfgType DropType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* DropNum; // 0x28
		::RPG::GameCore::DynamicFloat* DropID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGridFightDropData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGridFightDropData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddGridFightDropData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddGridFightDropData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDGRIDFIGHTDROPDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
