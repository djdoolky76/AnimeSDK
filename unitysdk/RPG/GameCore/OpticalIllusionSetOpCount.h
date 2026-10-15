#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionSetOpCount; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6EE0)
#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B6F10)
#define RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSetOpCount_TypeDefinitionIndex = 22220;

	class OpticalIllusionSetOpCount : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSetOpCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSetOpCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSetOpCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSetOpCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETOPCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
