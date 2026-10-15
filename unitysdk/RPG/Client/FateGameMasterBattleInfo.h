#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class ANNFOAGBJBP;
class CLNABFMHFFH;
class GKJEMHKOMJC;
class MJLJMCCGNEE;
class OMGHALDIJHL;
class PJFDAOKIKOJ;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateGameData; }
namespace RPG::Client { class FateGameMasterInfoPlayerItem; }
namespace RPG::Client { class IFateGameMasterInfoItem; }
namespace RPG::Client { class IFateGameMasterInfoRealItem; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET UNITYSDK_OFFSET(0xCE8FCC0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0xCE8A8E0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCE8ACD0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETALLMASTERS_OFFSET UNITYSDK_OFFSET(0xCE90AC0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET UNITYSDK_OFFSET(0xCE90F40)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETDEADMASTERS_OFFSET UNITYSDK_OFFSET(0xCE90B00)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET UNITYSDK_OFFSET(0xCE90830)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET UNITYSDK_OFFSET(0xCE913D0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETPLAYERMASTER_OFFSET UNITYSDK_OFFSET(0xCE90030)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_BATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0xCE91470)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_PLAYERMASTERAVATARREALID_OFFSET UNITYSDK_OFFSET(0xCE8FD10)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET UNITYSDK_OFFSET(0xCE912E0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET UNITYSDK_OFFSET(0xCE8BBB0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET UNITYSDK_OFFSET(0xCE8B610)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET UNITYSDK_OFFSET(0xCE8C1A0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET UNITYSDK_OFFSET(0xCE8B5A0)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET UNITYSDK_OFFSET(0xCE8B910)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CLEARBATTLEMASTERPAIRS_OFFSET UNITYSDK_OFFSET(0xCE8FE10)
#define RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET UNITYSDK_OFFSET(0xCE90920)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterBattleInfo_TypeDefinitionIndex = 64087;

	class FateGameMasterBattleInfo : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* _MasterItems; // 0x10
		::OMGHALDIJHL* _ParamProxyFactory; // 0x18
		::System::Collections::Generic::List_1<::System::ValueTuple>* _BattleMasterPairs; // 0x20
		::RPG::Client::FateGameData* _OwnerRef; // 0x28
		// static const ::System::Object _ServerSyncPlayerMasterAvatarID; // 0x0
		::System::Void _ctor(::RPG::Client::FateGameData* a1, ::OMGHALDIJHL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateGameData*, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::UInt32 ConvertServerSyncAvatarID(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_CONVERTSERVERSYNCAVATARID_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void SyncMasters(::PJFDAOKIKOJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PJFDAOKIKOJ*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_OFFSET))(this, a1);
		}

		::System::Void SyncMasters_1(::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::GKJEMHKOMJC*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERS_1_OFFSET))(this, a1);
		}

		::System::Void SyncOneMaster(::GKJEMHKOMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCONEMASTER_OFFSET))(this, a1);
		}

		::System::Void SyncMasterBattlePairs(::ANNFOAGBJBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ANNFOAGBJBP*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_OFFSET))(this, a1);
		}

		::System::Void SyncMasterBattlePairs_1(::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::MJLJMCCGNEE*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_SYNCMASTERBATTLEPAIRS_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* GetAllMasters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETALLMASTERS_OFFSET))(this);
		}

		::RPG::Client::FateGameMasterInfoPlayerItem* GetPlayerMaster()
		{
			return ((::RPG::Client::FateGameMasterInfoPlayerItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETPLAYERMASTER_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>* GetDeadMasters()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateGameMasterInfoRealItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETDEADMASTERS_OFFSET))(this);
		}

		::RPG::Client::IFateGameMasterInfoRealItem* GetMasterByAvatarID(::System::UInt32 a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoRealItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMASTERBYAVATARID_OFFSET))(this, a1);
		}

		::RPG::Client::IFateGameMasterInfoItem* GetCurPlayerRivalMaster()
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETCURPLAYERRIVALMASTER_OFFSET))(this);
		}

		::System::Boolean IsCurRoundBattleMaster(::RPG::Client::IFateGameMasterInfoItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IFateGameMasterInfoItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_ISCURROUNDBATTLEMASTER_OFFSET))(this, a1);
		}

		::System::UInt32 GetMonsterLevel()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GETMONSTERLEVEL_OFFSET))(this);
		}

		::RPG::Client::IFateGameMasterInfoItem* _GetBattleMasterPairItemByProto(::CLNABFMHFFH* a1)
		{
			return ((::RPG::Client::IFateGameMasterInfoItem*(*)(::PVOID, ::CLNABFMHFFH*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__GETBATTLEMASTERPAIRITEMBYPROTO_OFFSET))(this, a1);
		}

		::System::Void _ClearBattleMasterPairs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO__CLEARBATTLEMASTERPAIRS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::ValueTuple>* get_BattleMasterPairs()
		{
			return ((::System::Collections::Generic::List_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_BATTLEMASTERPAIRS_OFFSET))(this);
		}

		static ::System::UInt32 get_PlayerMasterAvatarRealID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERBATTLEINFO_GET_PLAYERMASTERAVATARREALID_OFFSET))();
		}

	};
}
