#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MarbleDebug; }

#define RPG_GAMECORE_MARBLEDEBUG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D80EBB0)
#define RPG_GAMECORE_MARBLEDEBUG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D80EBC0)
#define RPG_GAMECORE_MARBLEDEBUG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D80EB20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MarbleDebug_TypeDefinitionIndex = 16869;

	class MarbleDebug : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleDebug* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleDebug*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MarbleDebug* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MarbleDebug*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MARBLEDEBUG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
