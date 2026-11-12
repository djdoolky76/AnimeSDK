#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingExamRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGEXAMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDF9CE0)
#define RPG_GAMECORE_SWORDTRAININGEXAMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EDF9870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingExamRow_TypeDefinitionIndex = 12516;

	class SwordTrainingExamRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ExcellentCommentList; // 0x10
		::Il2CppArray<::System::UInt32>* NormalCommentList; // 0x18
		::Il2CppArray<::System::UInt32>* SuccessPerformID; // 0x20
		::System::String* EnemyImage; // 0x28
		::System::UInt32 StageID; // 0x30
		::System::UInt32 PrePerformID; // 0x34
		::System::Boolean IsLastExam; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 ExamID; // 0x3C
		::RPG::Client::TextID EnemyName; // 0x40
		::System::UInt32 EnemyPower; // 0x50
		::System::UInt32 BattleAreaID; // 0x54
		::System::UInt32 FailPerformID; // 0x58
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
