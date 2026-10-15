#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChenLingStageWaveType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingStageWaveRow; }

#define RPG_GAMECORE_CHENLINGSTAGEWAVEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D595230)
#define RPG_GAMECORE_CHENLINGSTAGEWAVEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D595080)

namespace RPG::GameCore
{
	class ChenLingStageWaveRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EnemyList; // 0x10
		::System::UInt32 StageID; // 0x18
		::RPG::GameCore::ChenLingStageWaveType Type; // 0x1C
		::System::UInt32 Wave; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEWAVEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingStageWaveRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingStageWaveRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGSTAGEWAVEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
