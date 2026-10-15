#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LoopRewindSnapSection; }
namespace RPG::GameCore { class SetLoopRewindSnapSection; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8B0B0)
#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA8B0C0)
#define RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA8B080)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetLoopRewindSnapSection_TypeDefinitionIndex = 20640;

	class SetLoopRewindSnapSection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x18
		::Il2CppArray<::RPG::GameCore::LoopRewindSnapSection*>* SnapConfig; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSnapStart; // 0x28
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSnapFinish; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopRewindSnapSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopRewindSnapSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetLoopRewindSnapSection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetLoopRewindSnapSection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETLOOPREWINDSNAPSECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
