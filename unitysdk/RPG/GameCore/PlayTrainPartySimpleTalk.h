#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayTrainPartySimpleTalk; }
namespace RPG::GameCore { class TrainPartySimpleTalkData; }

#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9327D0)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9327E0)
#define RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9327A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayTrainPartySimpleTalk_TypeDefinitionIndex = 22362;

	class PlayTrainPartySimpleTalk : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TrainPartySimpleTalkData*>* SimpleTalkList; // 0x18
		::System::Boolean IsAutoFinish; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayTrainPartySimpleTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayTrainPartySimpleTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYTRAINPARTYSIMPLETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
