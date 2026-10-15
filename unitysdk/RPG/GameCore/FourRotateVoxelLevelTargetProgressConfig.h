#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelTargetProgressConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F0300)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F0130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelTargetProgressConfig_TypeDefinitionIndex = 16748;

	class FourRotateVoxelLevelTargetProgressConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::Client::TextID TargetProgressText; // 0x10
		::Il2CppArray<::System::String*>* TargetGP; // 0x20
		::Il2CppArray<::System::UInt32>* TargetGPTargetValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelTargetProgressConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELTARGETPROGRESSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
