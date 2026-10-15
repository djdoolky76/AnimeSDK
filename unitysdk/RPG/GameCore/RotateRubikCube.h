#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RubikRotDirection.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class RotateRubikCube; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ROTATERUBIKCUBE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA47C40)
#define RPG_GAMECORE_ROTATERUBIKCUBE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA47C50)
#define RPG_GAMECORE_ROTATERUBIKCUBE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA47C00)

namespace RPG::GameCore
{
	class RotateRubikCube : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::RubikRotDirection RotDirection; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* ParamRotDirection; // 0x28
		::System::Boolean IsClockwise; // 0x30
		::System::Byte _padding1[0x7];
		::System::String* CubeName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotateRubikCube* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotateRubikCube*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RotateRubikCube* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RotateRubikCube*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROTATERUBIKCUBE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
