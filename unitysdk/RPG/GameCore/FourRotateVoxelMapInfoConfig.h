#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2D70)
#define RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C2A70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelMapInfoConfig_TypeDefinitionIndex = 16744;

	class FourRotateVoxelMapInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TitleText; // 0x10
		::RPG::Client::TextID LockDesc; // 0x20
		::System::UInt32 UnlockQuestID; // 0x30
		::System::UInt32 GetRewardQuestID; // 0x34
		::Il2CppArray<::System::String*>* FinishTargetGP; // 0x38
		::Il2CppArray<::System::String*>* FinishTargetGPTargetValue; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelMapInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelMapInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELMAPINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
