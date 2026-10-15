#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartAim; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_STARTAIM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B8E0)
#define RPG_GAMECORE_STARTAIM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB1B910)
#define RPG_GAMECORE_STARTAIM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1B890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartAim_TypeDefinitionIndex = 22405;

	class StartAim : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* AimerName; // 0x20
		::System::String* TargetAttachPoint; // 0x28
		::RPG::MVector3 TargetOffset; // 0x30
		::System::Single TransitTime; // 0x3C
		::System::Single VerticalAlpha; // 0x40
		::System::Single HorizontalAlpha; // 0x44
		::System::Boolean IsEffect; // 0x48
		::System::Boolean TraceTarget; // 0x49
		::System::Byte _padding0[0x6];
		::System::String* EffectPath; // 0x50
		::RPG::MVector2 LimitTargetRange; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAim* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAim*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTAIM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
