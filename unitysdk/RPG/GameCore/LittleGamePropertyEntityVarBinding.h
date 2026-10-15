#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGamePropertyEntityVarBinding; }

#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E5870)
#define RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E5830)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGamePropertyEntityVarBinding_TypeDefinitionIndex = 18926;

	class LittleGamePropertyEntityVarBinding : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGamePropertyEntityVarBinding* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGamePropertyEntityVarBinding*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEPROPERTYENTITYVARBINDING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
