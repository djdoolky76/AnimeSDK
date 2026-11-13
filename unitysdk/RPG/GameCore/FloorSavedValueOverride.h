#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloorSavedValueOverride; }
namespace System { class String; }

#define RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7AD650)
#define RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F7AD500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloorSavedValueOverride_TypeDefinitionIndex = 20636;

	class FloorSavedValueOverride : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* Name; // 0x10
		::System::Int16 Value; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloorSavedValueOverride* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloorSavedValueOverride*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOORSAVEDVALUEOVERRIDE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
