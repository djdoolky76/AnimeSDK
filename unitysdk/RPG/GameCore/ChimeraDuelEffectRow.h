#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelServerEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEffectRow; }

#define RPG_GAMECORE_CHIMERADUELEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59F0B0)
#define RPG_GAMECORE_CHIMERADUELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D59EDD0)

namespace RPG::GameCore
{
	class ChimeraDuelEffectRow : public ::System::Object
	{
	public:
		::System::Int32 Attack; // 0x10
		::System::Int32 ParamInt; // 0x14
		::System::UInt32 Exp; // 0x18
		::System::Boolean ParamBool; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 EffectID; // 0x20
		::RPG::GameCore::ChimeraDuelServerEffectType EffectType; // 0x24
		::System::Int32 Hp; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEffectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEffectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEFFECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
