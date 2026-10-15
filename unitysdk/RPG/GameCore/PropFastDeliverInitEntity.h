#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropFastDeliverInitEntity; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D91F4C0)
#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D91F560)
#define RPG_GAMECORE_PROPFASTDELIVERINITENTITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D91F480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropFastDeliverInitEntity_TypeDefinitionIndex = 22149;

	class PropFastDeliverInitEntity : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicString* TargetSaveName; // 0x20
		::RPG::GameCore::DynamicString* OverrideTargetSaveName; // 0x28
		::RPG::GameCore::TargetEvaluator* InitFaceToInstance; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverInitEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverInitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverInitEntity* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverInitEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERINITENTITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
