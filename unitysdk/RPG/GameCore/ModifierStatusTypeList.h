#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ModifierStatusTypeList; }

#define RPG_GAMECORE_MODIFIERSTATUSTYPELIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAA9BD0)
#define RPG_GAMECORE_MODIFIERSTATUSTYPELIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EAA9B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStatusTypeList_TypeDefinitionIndex = 17275;

	class ModifierStatusTypeList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::EnumStatusType>* StatusTypes; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTATUSTYPELIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ModifierStatusTypeList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ModifierStatusTypeList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MODIFIERSTATUSTYPELIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
