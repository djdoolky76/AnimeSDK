#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamResult; }

#define RPG_GAMECORE_SWORDTRAININGEXAMRESULT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4A260)
#define RPG_GAMECORE_SWORDTRAININGEXAMRESULT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB4A140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamResult_TypeDefinitionIndex = 12423;

	class SwordTrainingExamResult : public ::System::Object
	{
	public:
		::System::UInt32 EffectID; // 0x10
		::System::UInt32 CombatRatio; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMRESULT_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingExamResult* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingExamResult*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMRESULT_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
