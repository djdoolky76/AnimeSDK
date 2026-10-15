#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureFireProjectileBase; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39A330)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39A4F0)
#define RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39A340)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureFireProjectileBase_TypeDefinitionIndex = 20209;

	class AdventureFireProjectileBase : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileHit; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnProjectileLifetimeFinish; // 0x28
		::System::Boolean WaitProjectileFinish; // 0x30
		::System::Byte _padding0[0x7];
		::System::String* MutexName; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdventureFireProjectileBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdventureFireProjectileBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTUREFIREPROJECTILEBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
