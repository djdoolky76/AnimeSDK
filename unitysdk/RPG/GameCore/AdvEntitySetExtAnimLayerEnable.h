#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEntitySetExtAnimLayerEnable; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39E590)
#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39E5A0)
#define RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39E560)

namespace RPG::GameCore
{
	class AdvEntitySetExtAnimLayerEnable : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* LayerName; // 0x20
		::System::Boolean Enable; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x2C
		::System::String* RequireHoyoTag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEntitySetExtAnimLayerEnable*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTITYSETEXTANIMLAYERENABLE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
