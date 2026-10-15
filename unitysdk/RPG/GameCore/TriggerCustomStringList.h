#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerCustomStringList; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC45CC0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC45CD0)
#define RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC45C90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerCustomStringList_TypeDefinitionIndex = 23790;

	class TriggerCustomStringList : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::String*>* CustomStringList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerCustomStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerCustomStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERCUSTOMSTRINGLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
