#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetTargetCustomAssetPreloadState; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC4E90)
#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC4EE0)
#define RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC4E20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetTargetCustomAssetPreloadState_TypeDefinitionIndex = 22807;

	class SetTargetCustomAssetPreloadState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* GroupName; // 0x20
		::System::Boolean Preload; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::System::String*>* PathList; // 0x30
		::System::Int32 PreloadCount; // 0x38
		::System::Boolean Immediately; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetTargetCustomAssetPreloadState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetTargetCustomAssetPreloadState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETTARGETCUSTOMASSETPRELOADSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
