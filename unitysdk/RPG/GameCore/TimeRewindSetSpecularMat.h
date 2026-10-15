#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TimeRewindSetSpecularMat; }

#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB89550)
#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB89560)
#define RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB89520)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSetSpecularMat_TypeDefinitionIndex = 20646;

	class TimeRewindSetSpecularMat : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::RPG::GameCore::DynamicFloat* OverrideFadeIn; // 0x20
		::RPG::GameCore::DynamicFloat* OverrideFadeOut; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSetSpecularMat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSetSpecularMat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TimeRewindSetSpecularMat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TimeRewindSetSpecularMat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TIMEREWINDSETSPECULARMAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
