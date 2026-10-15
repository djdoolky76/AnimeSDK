#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimEditorLoadStageConfig; }

#define RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D68D1F0)
#define RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D68D1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimEditorLoadStageConfig_TypeDefinitionIndex = 18835;

	class FiveDimEditorLoadStageConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimEditorLoadStageConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimEditorLoadStageConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMEDITORLOADSTAGECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
