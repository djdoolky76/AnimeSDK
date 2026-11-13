#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKOJMGEMDNN;
class JGPLDAFBAEO;
namespace RPG::Client { class EvolveBuildCard; }
namespace RPG::Client { class EvolveBuildGearsDetail; }
namespace RPG::GameCore { class EvolveBuildGearManager; }
namespace RPG::GameCore { class EvolveBuildSelectCard; }
namespace RPG::GameCore { class EvolveBuildSelectCardData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATECARDS_OFFSET UNITYSDK_OFFSET(0x17513870)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATEFAKE_OFFSET UNITYSDK_OFFSET(0x17513C50)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_1_OFFSET UNITYSDK_OFFSET(0x17513EF0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_OFFSET UNITYSDK_OFFSET(0x17513A20)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1750DAC0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x17513860)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_CURRENTCARDS_OFFSET UNITYSDK_OFFSET(0x17514480)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_ENABLEREROLL_OFFSET UNITYSDK_OFFSET(0x17514730)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0x17514710)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_NOTEMPTYCURRENTCARDS_OFFSET UNITYSDK_OFFSET(0x175144A0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_SELECTCARDS_OFFSET UNITYSDK_OFFSET(0x175146F0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_STAGEMERGEDID_OFFSET UNITYSDK_OFFSET(0x175148B0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_TEAMLEVEL_OFFSET UNITYSDK_OFFSET(0x17514750)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_REFRESHCARDDATA_OFFSET UNITYSDK_OFFSET(0x17514060)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SETPRESELECTCARDID_OFFSET UNITYSDK_OFFSET(0x175141D0)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_CURRENTCARDS_OFFSET UNITYSDK_OFFSET(0x17514490)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_ENABLEREROLL_OFFSET UNITYSDK_OFFSET(0x17514740)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_GEARSDETAIL_OFFSET UNITYSDK_OFFSET(0x17514720)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_SELECTCARDS_OFFSET UNITYSDK_OFFSET(0x17514700)
#define RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__SETPRESELECTCARDID_B__6_0_OFFSET UNITYSDK_OFFSET(0x17514900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EvolveBuildSelectCardData_TypeDefinitionIndex = 54736;

	class EvolveBuildSelectCardData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _NotEmptyCurrentCards; // 0x10
		::RPG::GameCore::EvolveBuildGearManager* _Manager; // 0x18
		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* _CurrentCards_k__BackingField; // 0x20
		::RPG::Client::EvolveBuildGearsDetail* _GearsDetail_k__BackingField; // 0x28
		::System::Collections::Generic::List_1<::HKOJMGEMDNN*>* _SelectInfos; // 0x30
		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* _SelectCards_k__BackingField; // 0x38
		::System::Boolean _EnableReRoll_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 _PreSelectCardID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::EvolveBuildSelectCardData* Create(::Il2CppArray<::System::UInt32>* a1, ::JGPLDAFBAEO* a2, ::RPG::GameCore::EvolveBuildGearManager* a3)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCardData*(*)(::Il2CppArray<::System::UInt32>*, ::JGPLDAFBAEO*, ::RPG::GameCore::EvolveBuildGearManager*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::GameCore::EvolveBuildSelectCardData* CreateFake()
		{
			return ((::RPG::GameCore::EvolveBuildSelectCardData*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATEFAKE_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* CreateCards(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATECARDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* CreateSelectCards(::System::Collections::Generic::List_1<::HKOJMGEMDNN*>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::System::Collections::Generic::List_1<::HKOJMGEMDNN*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* CreateSelectCards_1(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_CREATESELECTCARDS_1_OFFSET))(a1);
		}

		::RPG::GameCore::EvolveBuildSelectCard* RefreshCardData(::System::Int32 a1)
		{
			return ((::RPG::GameCore::EvolveBuildSelectCard*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_REFRESHCARDDATA_OFFSET))(this, a1);
		}

		::System::Void SetPreSelectCardID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SETPRESELECTCARDID_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_CurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_CURRENTCARDS_OFFSET))(this);
		}

		::System::Void set_CurrentCards(::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_CURRENTCARDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>* get_NotEmptyCurrentCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::EvolveBuildCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_NOTEMPTYCURRENTCARDS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* get_SelectCards()
		{
			return ((::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_SELECTCARDS_OFFSET))(this);
		}

		::System::Void set_SelectCards(::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::EvolveBuildSelectCard*>*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_SELECTCARDS_OFFSET))(this, a1);
		}

		::RPG::Client::EvolveBuildGearsDetail* get_GearsDetail()
		{
			return ((::RPG::Client::EvolveBuildGearsDetail*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_GEARSDETAIL_OFFSET))(this);
		}

		::System::Void set_GearsDetail(::RPG::Client::EvolveBuildGearsDetail* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::EvolveBuildGearsDetail*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_GEARSDETAIL_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableReRoll()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_ENABLEREROLL_OFFSET))(this);
		}

		::System::Void set_EnableReRoll(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_SET_ENABLEREROLL_OFFSET))(this, a1);
		}

		::System::Int32 get_TeamLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_TEAMLEVEL_OFFSET))(this);
		}

		::System::UInt32 get_StageMergedID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA_GET_STAGEMERGEDID_OFFSET))(this);
		}

		::System::Boolean _SetPreSelectCardID_b__6_0(::RPG::Client::EvolveBuildCard* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::EvolveBuildCard*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_EVOLVEBUILDSELECTCARDDATA__SETPRESELECTCARDID_B__6_0_OFFSET))(this, a1);
		}

	};
}
