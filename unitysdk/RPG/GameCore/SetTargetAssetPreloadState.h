#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetTargetAssetPreloadState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC4700)
#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC4790)
#define RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC4650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetAssetPreloadState_TypeDefinitionIndex = 22806;

	class SetTargetAssetPreloadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Preload; // 0x20
		::System::Boolean IsSync; // 0x21
		::System::Byte _padding0[0x6];
		::Il2CppArray<::System::String*>* UnloadList; // 0x28
		::Il2CppArray<::System::String*>* LoadList; // 0x30
		::RPG::GameCore::DynamicFloat* TargetCount; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETASSETPRELOADSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
