#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DestroyNPC; }
namespace RPG::GameCore { class GroupEntityInfo; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_DESTROYNPC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FCC10)
#define RPG_GAMECORE_DESTROYNPC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FCC20)
#define RPG_GAMECORE_DESTROYNPC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FCBE0)

namespace RPG::GameCore
{
	class DestroyNPC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 GroupNpcID; // 0x1C
		::System::Boolean Hide; // 0x20
		::System::Byte _padding0[0x7];
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::Il2CppArray<::RPG::GameCore::GroupEntityInfo*>* DestroyList; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DestroyNPC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DestroyNPC*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DESTROYNPC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
