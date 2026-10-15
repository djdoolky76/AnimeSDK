#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KNGLNMKNGJD.h"
#include "unitysdk/RPG/GameCore/FateClazzType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GKJEMHKOMJC;
class JBLFDPLFIFH;
class JOGCCINEHFJ;
class MCMGOPIDDMJ;
class OMGHALDIJHL;
class PMAJDIAJMKG;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class FateGameMasterAffixInfoItem; }
namespace RPG::Client { class FateGameMasterBattleInfo; }
namespace RPG::Client { class FateGameMasterInfoRivalItem; }
namespace RPG::Client { class FateGameMasterReijuAffixInfoItem; }
namespace RPG::Client { class MonsterData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET UNITYSDK_OFFSET(0xCE929D0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET UNITYSDK_OFFSET(0xCE90280)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CTOR_OFFSET UNITYSDK_OFFSET(0xCE942F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET UNITYSDK_OFFSET(0xCE92200)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET UNITYSDK_OFFSET(0xCE93670)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET UNITYSDK_OFFSET(0xCE92A80)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET UNITYSDK_OFFSET(0xCE933B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCE934E0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET UNITYSDK_OFFSET(0xCE93130)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0xCE93280)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET UNITYSDK_OFFSET(0xCE92FA0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET UNITYSDK_OFFSET(0xCE95C10)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET UNITYSDK_OFFSET(0xCE92ED0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET UNITYSDK_OFFSET(0xCE92C50)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET UNITYSDK_OFFSET(0xCE92B70)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET UNITYSDK_OFFSET(0xCE92DB0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET UNITYSDK_OFFSET(0xCE95C50)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET UNITYSDK_OFFSET(0xCE93940)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET UNITYSDK_OFFSET(0xCE937F0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET UNITYSDK_OFFSET(0xCE935C0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xCE93720)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xCE95BD0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET UNITYSDK_OFFSET(0xCE943E0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET UNITYSDK_OFFSET(0xCE94380)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET UNITYSDK_OFFSET(0xCE92920)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET UNITYSDK_OFFSET(0xCE925A0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET UNITYSDK_OFFSET(0xCE92710)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET UNITYSDK_OFFSET(0xCE944B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0xCE95A10)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATAR_OFFSET UNITYSDK_OFFSET(0xCE945B0)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET UNITYSDK_OFFSET(0xCE94620)
#define RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET UNITYSDK_OFFSET(0xCE94D40)

namespace RPG::Client
{
	inline static constexpr unsigned int FateGameMasterInfoRivalItem_TypeDefinitionIndex = 64094;

	class FateGameMasterInfoRivalItem : public ::System::Object
	{
	public:
		::OMGHALDIJHL* _ParameterProxyFactory; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* _ReijuAffixes; // 0x18
		::RPG::Client::FateGameMasterBattleInfo* _OwnerRef; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* _Affixes; // 0x28
		::PMAJDIAJMKG* _DynamicParamTextData; // 0x30
		::RPG::AvatarSystem::IAvatar* _Avatar; // 0x38
		::KNGLNMKNGJD _Status; // 0x40
		::System::UInt32 _MaxHP; // 0x44
		::System::UInt32 _Ranking; // 0x48
		::System::Boolean _IsRecentlyBanned; // 0x4C
		::System::Byte _padding0[0x3];
		::System::UInt32 _AvatarRealID; // 0x50
		::System::Int32 _HP; // 0x54
		::System::Void _ctor(::System::UInt32 a1, ::RPG::Client::FateGameMasterBattleInfo* a2, ::OMGHALDIJHL* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::RPG::Client::FateGameMasterInfoRivalItem* Create(::System::UInt32 a1, ::RPG::Client::FateGameMasterBattleInfo* a2, ::OMGHALDIJHL* a3)
		{
			return ((::RPG::Client::FateGameMasterInfoRivalItem*(*)(::System::UInt32, ::RPG::Client::FateGameMasterBattleInfo*, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CREATE_OFFSET))(a1, a2, a3);
		}

		::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>* GetMonsters(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::MonsterData*>*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GETMONSTERS_OFFSET))(this, a1);
		}

		::System::Boolean IsShowPassivePopUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISSHOWPASSIVEPOPUP_OFFSET))(this);
		}

		::System::Void SetPassivePopUpSeen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SETPASSIVEPOPUPSEEN_OFFSET))(this);
		}

		::System::Boolean IsRecentlyBanned()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_ISRECENTLYBANNED_OFFSET))(this);
		}

		::System::Void ClearRecentMark()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_CLEARRECENTMARK_OFFSET))(this);
		}

		::System::Void Sync(::GKJEMHKOMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_SYNC_OFFSET))(this, a1);
		}

		::System::Void _RefreshAvatar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__REFRESHAVATAR_OFFSET))(this);
		}

		::System::Void _SyncAffixes(::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCAFFIXES_OFFSET))(this, a1);
		}

		::System::Void _SyncReijuAffixes(::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::JOGCCINEHFJ*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__SYNCREIJUAFFIXES_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* _GetPassiveTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM__GETPASSIVETEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_AvatarRealID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AVATARREALID_OFFSET))(this);
		}

		::System::String* get_MasterName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERNAME_OFFSET))(this);
		}

		::System::String* get_MasterIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterRoundIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERROUNDICONPATH_OFFSET))(this);
		}

		::System::String* get_MasterFigurePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MASTERFIGUREPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateClazzType get_Clazz()
		{
			return ((::RPG::GameCore::FateClazzType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZ_OFFSET))(this);
		}

		::RPG::Client::TextID get_ClazzName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAME_OFFSET))(this);
		}

		::System::String* get_ClazzSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZSMALLICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMEICONPATH_OFFSET))(this);
		}

		::System::String* get_ClazzNameSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_CLAZZNAMESMALLICONPATH_OFFSET))(this);
		}

		::KNGLNMKNGJD get_Status()
		{
			return ((::KNGLNMKNGJD(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_STATUS_OFFSET))(this);
		}

		::System::Int32 get_HP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_HP_OFFSET))(this);
		}

		::System::UInt32 get_MaxHP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_MAXHP_OFFSET))(this);
		}

		::System::UInt32 get_Ranking()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_RANKING_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>* get_Affixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_AFFIXES_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>* get_ReijuAffixes()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateGameMasterReijuAffixInfoItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_REIJUAFFIXES_OFFSET))(this);
		}

		::RPG::Client::TextID get_PassiveName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVENAME_OFFSET))(this);
		}

		::System::String* get_PassiveDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET_PASSIVEDESC_OFFSET))(this);
		}

		::JBLFDPLFIFH* get__Row()
		{
			return ((::JBLFDPLFIFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__ROW_OFFSET))(this);
		}

		::MCMGOPIDDMJ* get__ClzRow()
		{
			return ((::MCMGOPIDDMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATEGAMEMASTERINFORIVALITEM_GET__CLZROW_OFFSET))(this);
		}

	};
}
