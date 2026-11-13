#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeactivateServerGameplayCounter; }

#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1F000B70)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F000B80)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F000B30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeactivateServerGameplayCounter_TypeDefinitionIndex = 20891;

	class DeactivateServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeactivateServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeactivateServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeactivateServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeactivateServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
