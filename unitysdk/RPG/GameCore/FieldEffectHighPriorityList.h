#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FieldEffectHighPriorityList; }
namespace System { class String; }

#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A0E60)
#define RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6A0DA0)

namespace RPG::GameCore
{
	class FieldEffectHighPriorityList : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* HighPriorityEffectList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FieldEffectHighPriorityList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FieldEffectHighPriorityList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIELDEFFECTHIGHPRIORITYLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
