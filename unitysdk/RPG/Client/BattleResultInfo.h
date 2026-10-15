#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJMFOABLOCE.h"
#include "unitysdk/System/Object.h"
class LIOALDPOLJE;
namespace RPG::Client { class BattleResulAutoDecomposeInfo; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_BATTLERESULTINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC854F70)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleResultInfo_TypeDefinitionIndex = 62887;

	class BattleResultInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* MazeSkillDropItems; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* ScoringItems; // 0x18
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* DropItems; // 0x20
		::System::Collections::Generic::List_1<::LIOALDPOLJE*>* MultipleDropItems; // 0x28
		::RPG::Client::BattleResulAutoDecomposeInfo* DecomposeInfo; // 0x30
		::System::UInt32 MultipleAddAvatarExp; // 0x38
		::System::UInt32 MultipleAddPlayerExp; // 0x3C
		::JJMFOABLOCE ModuleType; // 0x40
		::System::UInt32 AddPlayerExp; // 0x44
		::System::UInt32 TotalScoring; // 0x48
		::System::UInt32 AddAvatarExp; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLERESULTINFO_CTOR_OFFSET))(this);
		}

	};
}
