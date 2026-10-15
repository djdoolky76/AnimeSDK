#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJGOMNMKCDJ.h"
#include "unitysdk/System/Object.h"
class LIOALDPOLJE;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_PVEBATTLERESULTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xDA6B460)

namespace RPG::Client
{
	inline static constexpr unsigned int PVEBattleResultInfo_TypeDefinitionIndex = 62888;

	class PVEBattleResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* MultipleDropList; // 0x10
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* DropList; // 0x18
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* MazeSkillDropList; // 0x20
		::RPG::Client::BattleResulAutoDecomposeInfo* DecomposeInfo; // 0x28
		::IJGOMNMKCDJ BattleEndStatus; // 0x30
		::System::UInt32 AvatarExpReward; // 0x34
		::System::UInt32 CurFinishChallenge; // 0x38
		::System::UInt32 RetCode; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PVEBATTLERESULTINFO_CTOR_OFFSET))(this);
		}

	};
}
