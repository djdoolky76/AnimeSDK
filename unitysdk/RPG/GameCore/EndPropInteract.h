#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndPropInteract; }

#define RPG_GAMECORE_ENDPROPINTERACT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D613CE0)
#define RPG_GAMECORE_ENDPROPINTERACT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D613CF0)
#define RPG_GAMECORE_ENDPROPINTERACT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D613C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPropInteract_TypeDefinitionIndex = 20388;

	class EndPropInteract : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPropInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPropInteract* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPropInteract*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPINTERACT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
