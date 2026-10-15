#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRemoveNpcVisionConfig; }
namespace System { class String; }

#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3ACA90)
#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3ACAA0)
#define RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3ACA60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRemoveNpcVisionConfig_TypeDefinitionIndex = 20342;

	class AdvRemoveNpcVisionConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* VisionName; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRemoveNpcVisionConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRemoveNpcVisionConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVREMOVENPCVISIONCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
