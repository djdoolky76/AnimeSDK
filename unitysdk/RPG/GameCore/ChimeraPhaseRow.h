#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraPhaseTargetType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraPhaseRow; }

#define RPG_GAMECORE_CHIMERAPHASEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AE470)
#define RPG_GAMECORE_CHIMERAPHASEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D5AE210)

namespace RPG::GameCore
{
	class ChimeraPhaseRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RoundList; // 0x10
		::Il2CppArray<::System::UInt32>* TargetParam; // 0x18
		::System::Int32 LeaderChariotState; // 0x20
		::System::UInt32 PhaseID; // 0x24
		::RPG::GameCore::ChimeraPhaseTargetType TargetType; // 0x28
		::System::UInt32 NextPhaseID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraPhaseRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraPhaseRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERAPHASEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
