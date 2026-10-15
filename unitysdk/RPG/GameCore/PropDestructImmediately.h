#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropDestruct.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropDestructImmediately; }

#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D949560)
#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D949590)
#define RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D949710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropDestructImmediately_TypeDefinitionIndex = 22067;

	class PropDestructImmediately : public ::RPG::GameCore::PropDestruct
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestructImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestructImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropDestructImmediately* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropDestructImmediately*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPDESTRUCTIMMEDIATELY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
