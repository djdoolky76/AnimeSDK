#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvCharacterLerpAnimRunPoseParam; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36BAF0)
#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D36BB30)
#define RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D36BA90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvCharacterLerpAnimRunPoseParam_TypeDefinitionIndex = 20608;

	class AdvCharacterLerpAnimRunPoseParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ParamName; // 0x20
		::System::Single TargetValue; // 0x28
		::System::Single LerpTime; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvCharacterLerpAnimRunPoseParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVCHARACTERLERPANIMRUNPOSEPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
