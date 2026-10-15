#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CalcPitchAngle; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CALCPITCHANGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5547B0)
#define RPG_GAMECORE_CALCPITCHANGLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5547C0)
#define RPG_GAMECORE_CALCPITCHANGLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D554780)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CalcPitchAngle_TypeDefinitionIndex = 20244;

	class CalcPitchAngle : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* FromTarget; // 0x18
		::System::String* FromAttachPoint; // 0x20
		::RPG::MVector3 FromOffset; // 0x28
		::System::Byte _padding0[0x4];
		::RPG::GameCore::TargetEvaluator* ToTarget; // 0x38
		::System::String* ToAttachPoint; // 0x40
		::RPG::MVector3 ToOffset; // 0x48
		::System::Byte _padding1[0x4];
		::System::String* DynamicKey; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalcPitchAngle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CalcPitchAngle* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CalcPitchAngle*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CALCPITCHANGLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
