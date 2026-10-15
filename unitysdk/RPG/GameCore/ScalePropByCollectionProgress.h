#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class ScalePropByCollectionProgress; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA88B20)
#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA88BC0)
#define RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA88A60)

namespace RPG::GameCore
{
	class ScalePropByCollectionProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* MinScale; // 0x20
		::RPG::GameCore::DynamicFloat* MaxScale; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScalePropByCollectionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScalePropByCollectionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScalePropByCollectionProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScalePropByCollectionProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCALEPROPBYCOLLECTIONPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
