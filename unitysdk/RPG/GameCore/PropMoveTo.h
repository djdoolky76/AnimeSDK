#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToMoveMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropMoveTo; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_PROPMOVETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94F900)
#define RPG_GAMECORE_PROPMOVETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94F9C0)
#define RPG_GAMECORE_PROPMOVETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94F820)

namespace RPG::GameCore
{
	class PropMoveTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* RelativePath; // 0x18
		::RPG::GameCore::PropMoveToMoveMode Mode; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicFloat* Duration; // 0x28
		::RPG::GameCore::DynamicFloat* Speed; // 0x30
		::System::String* AreaName; // 0x38
		::System::String* AnchorName; // 0x40
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x48
		::RPG::MVector3 TargetPosition; // 0x50
		::RPG::MVector3 TargetRotation; // 0x5C
		::System::Boolean WaitFinish; // 0x68
		::System::Boolean IsLocalPlayerForward; // 0x69
		::System::Byte _padding1[0x2];
		::System::Single LocalPlayerForwardRadius; // 0x6C
		::System::Boolean UseCurveData; // 0x70
		::System::Boolean BreakWhenTalk; // 0x71
		::System::Boolean ForbidTickLod; // 0x72
		::System::Byte _padding2[0x5];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
