#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AISelector; }

#define RPG_GAMECORE_AISELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A010)
#define RPG_GAMECORE_AISELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30D0A0)
#define RPG_GAMECORE_AISELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30BDA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AISelector_TypeDefinitionIndex = 15591;

	class AISelector : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AISelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AISELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
