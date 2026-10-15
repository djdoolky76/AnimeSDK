#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeactivateServerGameplayCounter; }

#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5C77A0)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5C77B0)
#define RPG_GAMECORE_DEACTIVATESERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5C7760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeactivateServerGameplayCounter_TypeDefinitionIndex = 20555;

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
