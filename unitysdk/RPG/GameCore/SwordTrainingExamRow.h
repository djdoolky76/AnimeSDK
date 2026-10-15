#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1CE00)
#define RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB1C990)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamRow_TypeDefinitionIndex = 12449;

	class SwordTrainingExamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NormalCommentList; // 0x10
		::Il2CppArray<::System::UInt32>* ExcellentCommentList; // 0x18
		::Il2CppArray<::System::UInt32>* SuccessPerformID; // 0x20
		::System::String* EnemyImage; // 0x28
		::RPG::Client::TextID EnemyName; // 0x30
		::System::Boolean IsLastExam; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 PrePerformID; // 0x44
		::System::UInt32 FailPerformID; // 0x48
		::System::UInt32 StageID; // 0x4C
		::System::UInt32 BattleAreaID; // 0x50
		::System::UInt32 ExamID; // 0x54
		::System::UInt32 EnemyPower; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingExamRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingExamRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
