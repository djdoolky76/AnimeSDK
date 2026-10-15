#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PPEffectFilterType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FilterSystemConflictTypes; }

#define RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A74A0)
#define RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A73E0)

namespace RPG::GameCore
{
	class FilterSystemConflictTypes : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PPEffectFilterType>* ConflictTypeList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FilterSystemConflictTypes* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FilterSystemConflictTypes*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FILTERSYSTEMCONFLICTTYPES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
