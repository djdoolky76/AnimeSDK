#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyNPCMonster; }
namespace System { class String; }

#define RPG_GAMECORE_DESTROYNPCMONSTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FCED0)
#define RPG_GAMECORE_DESTROYNPCMONSTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FCEE0)
#define RPG_GAMECORE_DESTROYNPCMONSTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FCEA0)

namespace RPG::GameCore
{
	class DestroyNPCMonster : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::UInt32>* GroupMonsterIDs; // 0x20
		::Il2CppArray<::System::String*>* UniqueNames; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyNPCMonster* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyNPCMonster*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPCMONSTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
