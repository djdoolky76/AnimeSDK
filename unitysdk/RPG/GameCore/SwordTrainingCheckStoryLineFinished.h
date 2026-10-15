#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingCheckStoryLineFinished; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB48E40)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB48E50)
#define RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB48E10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingCheckStoryLineFinished_TypeDefinitionIndex = 20328;

	class SwordTrainingCheckStoryLineFinished : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 StoryID; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFinished; // 0x20
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnNotFinished; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingCheckStoryLineFinished*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCHECKSTORYLINEFINISHED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
