#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CaptureNPCToCharacter; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_CAPTURENPCTOCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D557780)
#define RPG_GAMECORE_CAPTURENPCTOCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D557790)
#define RPG_GAMECORE_CAPTURENPCTOCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D557740)

namespace RPG::GameCore
{
	class CaptureNPCToCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x18
		::RPG::GameCore::DynamicFloat* GroupNpcID; // 0x20
		::RPG::GameCore::DynamicString* CharacterUniqueName; // 0x28
		::System::Boolean ReleaseIfPerformanceEnd; // 0x30
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CaptureNPCToCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CaptureNPCToCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAPTURENPCTOCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
