#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeDynamicOptionalBlock; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D566CD0)
#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D566CE0)
#define RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D566C90)

namespace RPG::GameCore
{
	class ChangeDynamicOptionalBlock : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* BlockKey; // 0x18
		::System::Boolean IsRemoveExist; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeDynamicOptionalBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeDynamicOptionalBlock* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeDynamicOptionalBlock*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGEDYNAMICOPTIONALBLOCK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
