#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EndPropSceneSelection; }

#define RPG_GAMECORE_ENDPROPSCENESELECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6418F0)
#define RPG_GAMECORE_ENDPROPSCENESELECTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D641900)
#define RPG_GAMECORE_ENDPROPSCENESELECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D641830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EndPropSceneSelection_TypeDefinitionIndex = 22027;

	class EndPropSceneSelection : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EndPropSceneSelection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EndPropSceneSelection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENDPROPSCENESELECTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
