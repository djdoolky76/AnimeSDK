#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcResetEyeTransforms; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A8C90)
#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A8CA0)
#define RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A8C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcResetEyeTransforms_TypeDefinitionIndex = 22430;

	class AdvNpcResetEyeTransforms : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Enable; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcResetEyeTransforms*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcResetEyeTransforms* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcResetEyeTransforms*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCRESETEYETRANSFORMS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
