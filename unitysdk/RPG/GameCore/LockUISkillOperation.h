#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LockUISkillOperation; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_LOCKUISKILLOPERATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7C4AF0)
#define RPG_GAMECORE_LOCKUISKILLOPERATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7C4B00)
#define RPG_GAMECORE_LOCKUISKILLOPERATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7C4AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LockUISkillOperation_TypeDefinitionIndex = 23616;

	class LockUISkillOperation : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsLock; // 0x20
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* ControlSkillTypes; // 0x28
		::RPG::Client::TextID Tip; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockUISkillOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LockUISkillOperation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LockUISkillOperation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LOCKUISKILLOPERATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
