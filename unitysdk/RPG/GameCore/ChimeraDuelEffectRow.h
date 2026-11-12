#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelServerEffectType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEffectRow; }

#define RPG_GAMECORE_CHIMERADUELEFFECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7AFEC0)
#define RPG_GAMECORE_CHIMERADUELEFFECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E7AFBE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEffectRow_TypeDefinitionIndex = 11140;

	class ChimeraDuelEffectRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChimeraDuelServerEffectType EffectType; // 0x10
		::System::Int32 Attack; // 0x14
		::System::Boolean ParamBool; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 EffectID; // 0x1C
		::System::Int32 Hp; // 0x20
		::System::UInt32 Exp; // 0x24
		::System::Int32 ParamInt; // 0x28
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
