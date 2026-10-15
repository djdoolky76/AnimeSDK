#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ModifierValueBindType.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierValueBindData; }

#define RPG_GAMECORE_MODIFIERVALUEBINDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D862070)
#define RPG_GAMECORE_MODIFIERVALUEBINDDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D861F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierValueBindData_TypeDefinitionIndex = 18232;

	class ModifierValueBindData : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ModifierValueBindType BindType; // 0x10
		::RPG::GameCore::StringHash DynamicKey; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERVALUEBINDDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierValueBindData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierValueBindData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERVALUEBINDDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
