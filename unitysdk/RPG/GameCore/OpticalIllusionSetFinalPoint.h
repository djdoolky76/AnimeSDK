#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OpticalIllusionSetFinalPoint; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B6D00)
#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B6D30)
#define RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B6CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OpticalIllusionSetFinalPoint_TypeDefinitionIndex = 22221;

	class OpticalIllusionSetFinalPoint : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OpticalIllusionSetFinalPoint* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OpticalIllusionSetFinalPoint*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OPTICALILLUSIONSETFINALPOINT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
