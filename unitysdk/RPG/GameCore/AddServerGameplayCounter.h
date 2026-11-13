#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AddServerGameplayCounter; }

#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA5C90)
#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EAA5CA0)
#define RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAA5C50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AddServerGameplayCounter_TypeDefinitionIndex = 20892;

	class AddServerGameplayCounter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AddServerGameplayCounter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AddServerGameplayCounter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADDSERVERGAMEPLAYCOUNTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
