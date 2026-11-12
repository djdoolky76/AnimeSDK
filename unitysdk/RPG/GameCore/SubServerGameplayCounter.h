#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SubServerGameplayCounter; }

#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDE8680)
#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EDE8690)
#define RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EDE8640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubServerGameplayCounter_TypeDefinitionIndex = 20893;

	class SubServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SubServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SubServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUBSERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
