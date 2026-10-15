#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LBKMCGDMNJO;
class LOJIKMHLCBL;
class MIGHOPHLBMF;
class OINNEGOFKAA;
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeBossSingleNodeInfo; }
namespace RPG::Client { class ChallengeTeamInfo; }
namespace RPG::Client { class MonsterData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CREATE_OFFSET UNITYSDK_OFFSET(0xC974F70)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xC979800)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_GETAVATARDATALIST_OFFSET UNITYSDK_OFFSET(0xC979810)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET UNITYSDK_OFFSET(0xC975CB0)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_TRYGETAVATARDATA_OFFSET UNITYSDK_OFFSET(0xC975EC0)
#define RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_UPDATEBATTLERESULT_OFFSET UNITYSDK_OFFSET(0xC9761C0)

namespace RPG::Client
{
	inline static constexpr unsigned int ChallengeBossSingleNodeInfo_TypeDefinitionIndex = 63081;

	class ChallengeBossSingleNodeInfo : public ::System::Object
	{
	public:
		::RPG::Client::ChallengeTeamInfo* TeamInfo; // 0x10
		::RPG::Client::MonsterData* MonsterData; // 0x18
		::System::UInt32 MaxScore; // 0x20
		::System::UInt32 BuffID; // 0x24
		::System::Boolean HasBeenChallenged; // 0x28
		::System::Boolean HasTeamInfo; // 0x29
		::System::Boolean IsPass; // 0x2A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CTOR_OFFSET))(this);
		}

		::System::Void Sync(::MIGHOPHLBMF* a1, ::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>* a2, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::OINNEGOFKAA*>* a3, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::LOJIKMHLCBL*>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::MIGHOPHLBMF*, ::Google::Protobuf::Collections::RepeatedField_1<::LBKMCGDMNJO*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::OINNEGOFKAA*>*, ::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::LOJIKMHLCBL*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_SYNC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void UpdateBattleResult(::System::UInt32 a1, ::System::Boolean a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_UPDATEBATTLERESULT_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::ChallengeBossSingleNodeInfo* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::ChallengeBossSingleNodeInfo*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_CREATE_OFFSET))(a1);
		}

		::RPG::AvatarSystem::IAvatar* TryGetAvatarData(::System::UInt32 a1)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_TRYGETAVATARDATA_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>* GetAvatarDataList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::AvatarSystem::IAvatar*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGEBOSSSINGLENODEINFO_GETAVATARDATALIST_OFFSET))(this);
		}

	};
}
