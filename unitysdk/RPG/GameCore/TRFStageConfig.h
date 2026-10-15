#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFStageConfig; }

#define RPG_GAMECORE_TRFSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB26300)
#define RPG_GAMECORE_TRFSTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB261C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFStageConfig_TypeDefinitionIndex = 18905;

	class TRFStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* Entities; // 0x10
		::System::UInt32 AutoSpawnSteps; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
