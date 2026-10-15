#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleAIDegrade; }

#define RPG_GAMECORE_MARBLEAIDEGRADE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8360D0)
#define RPG_GAMECORE_MARBLEAIDEGRADE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8360E0)
#define RPG_GAMECORE_MARBLEAIDEGRADE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D836040)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleAIDegrade_TypeDefinitionIndex = 16866;

	class MarbleAIDegrade : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAIDegrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAIDegrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleAIDegrade* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleAIDegrade*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEAIDEGRADE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
