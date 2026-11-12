#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGMLEJCOFPK.h"
#include "unitysdk/RPG/Client/GridFightPrayQuest_QuestStatus.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/Sofa/Core/ObservableObject.h"
#include "unitysdk/RPG/Client/TextID.h"
class AFCBKJEFKPG;
class BPENENIMEFE;
class CFIAGNDOLBD;
class KMCJMBABNNE;
namespace RPG::Client { class GridFightBonusDropData; }
namespace RPG::Client { class GridFightPrayQuest; }
namespace RPG::Client { class GridFightPrayQuestConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CCTOR_OFFSET UNITYSDK_OFFSET(0xDC36B60)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_COLLECTBONUSDETAIL_OFFSET UNITYSDK_OFFSET(0xDC24E50)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_COPYADDSOURCE_OFFSET UNITYSDK_OFFSET(0xDC36A20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEFATEPRAYSELECTION_OFFSET UNITYSDK_OFFSET(0xDC352E0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_1_OFFSET UNITYSDK_OFFSET(0xDC35820)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_OFFSET UNITYSDK_OFFSET(0xDC35580)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_CTOR_OFFSET UNITYSDK_OFFSET(0xDC35390)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_FINISH_OFFSET UNITYSDK_OFFSET(0xDC35BC0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0xDC367C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETPARAM_OFFSET UNITYSDK_OFFSET(0xDC36850)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0xDC35F10)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDC35C10)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_DESC_OFFSET UNITYSDK_OFFSET(0xDC36470)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FINISHED_OFFSET UNITYSDK_OFFSET(0xDC35F80)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FIRSTBONUS_OFFSET UNITYSDK_OFFSET(0xDC24C90)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMBONFIRE_OFFSET UNITYSDK_OFFSET(0xDC24B30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMPETPAL_OFFSET UNITYSDK_OFFSET(0xDC36910)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMTRAITEFFECT_OFFSET UNITYSDK_OFFSET(0xDC368C0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0xDC36730)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_INPROGRESS_OFFSET UNITYSDK_OFFSET(0xDC35F30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISACTIVATED_OFFSET UNITYSDK_OFFSET(0xDC35FD0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISENABLED_OFFSET UNITYSDK_OFFSET(0xDC361D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_NOUNDERLINEDESC_OFFSET UNITYSDK_OFFSET(0xDC365D0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PETPALEFFECTID_OFFSET UNITYSDK_OFFSET(0xDC36960)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PRAYTYPE_OFFSET UNITYSDK_OFFSET(0xDC36320)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDC35ED0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_QUESTDESC_OFFSET UNITYSDK_OFFSET(0xDC35C30)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0xDC363F0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_STATUS_OFFSET UNITYSDK_OFFSET(0xDC35EF0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_ACCEPTABLE_OFFSET UNITYSDK_OFFSET(0xDC35F20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_CONFIG_OFFSET UNITYSDK_OFFSET(0xDC35C20)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_PROGRESS_OFFSET UNITYSDK_OFFSET(0xDC35EE0)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_STATUS_OFFSET UNITYSDK_OFFSET(0xDC35F00)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_1_OFFSET UNITYSDK_OFFSET(0xDC35630)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_OFFSET UNITYSDK_OFFSET(0xDC35450)
#define RPG_CLIENT_GRIDFIGHTPRAYQUEST__SETUPBONUS_OFFSET UNITYSDK_OFFSET(0xDC35AC0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPrayQuest_TypeDefinitionIndex = 66755;

	class GridFightPrayQuest : public ::Sofa::Core::ObservableObject
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightBonusDropData*>* Bonus; // 0x18
		::CFIAGNDOLBD* _Valider; // 0x20
		::Il2CppArray<::System::UInt32>* _AddSourceParam; // 0x28
		::RPG::Client::GridFightPrayQuestConfig* _Config_k__BackingField; // 0x30
		::BGMLEJCOFPK _AddSource; // 0x38
		::RPG::Client::GridFightPrayQuest_QuestStatus _Status_k__BackingField; // 0x3C
		::System::UInt32 _Progress_k__BackingField; // 0x40
		::System::Boolean _Acceptable_k__BackingField; // 0x44
		static ::KMCJMBABNNE** StaticGet__DescCompiler()
		{
			return (::KMCJMBABNNE**)UnitySDK::FromName("RPG.Client", "GridFightPrayQuest")->GetStaticField(0x731E0);
		}

		::System::Void _ctor(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightPrayQuest* CreateFatePraySelection(::BPENENIMEFE* a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::BPENENIMEFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEFATEPRAYSELECTION_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPrayQuest* CreatePrayQuest(::AFCBKJEFKPG* a1)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::AFCBKJEFKPG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPrayQuest* CreatePrayQuest_1(::System::UInt32 a1, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a2)
		{
			return ((::RPG::Client::GridFightPrayQuest*(*)(::System::UInt32, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_CREATEPRAYQUEST_1_OFFSET))(a1, a2);
		}

		::System::Void Sync(::BPENENIMEFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPENENIMEFE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_OFFSET))(this, a1);
		}

		::System::Void Sync_1(::AFCBKJEFKPG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFCBKJEFKPG*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SYNC_1_OFFSET))(this, a1);
		}

		::System::Void _SetupBonus(::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::GridFightBonusDropData*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST__SETUPBONUS_OFFSET))(this, a1);
		}

		::System::Void Finish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_FINISH_OFFSET))(this);
		}

		::RPG::Client::GridFightPrayQuestConfig* get_Config()
		{
			return ((::RPG::Client::GridFightPrayQuestConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_CONFIG_OFFSET))(this);
		}

		::System::Void set_Config(::RPG::Client::GridFightPrayQuestConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuestConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_CONFIG_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_QuestDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_QUESTDESC_OFFSET))(this);
		}

		::RPG::Client::GridFightBonusDropData* get_FirstBonus()
		{
			return ((::RPG::Client::GridFightBonusDropData*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FIRSTBONUS_OFFSET))(this);
		}

		::System::UInt32 get_Progress()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PROGRESS_OFFSET))(this);
		}

		::System::Void set_Progress(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_PROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightPrayQuest_QuestStatus get_Status()
		{
			return ((::RPG::Client::GridFightPrayQuest_QuestStatus(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_STATUS_OFFSET))(this);
		}

		::System::Void set_Status(::RPG::Client::GridFightPrayQuest_QuestStatus a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest_QuestStatus))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_STATUS_OFFSET))(this, a1);
		}

		::System::Boolean get_Acceptable()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ACCEPTABLE_OFFSET))(this);
		}

		::System::Void set_Acceptable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_SET_ACCEPTABLE_OFFSET))(this, a1);
		}

		::System::Boolean get_InProgress()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_INPROGRESS_OFFSET))(this);
		}

		::System::Boolean get_Finished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FINISHED_OFFSET))(this);
		}

		::System::Boolean get_IsActivated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISACTIVATED_OFFSET))(this);
		}

		::System::Boolean get_IsEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_ISENABLED_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPrayType get_PrayType()
		{
			return ((::RPG::GameCore::GridFightPrayType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PRAYTYPE_OFFSET))(this);
		}

		::System::String* get_RawDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_RAWDESC_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_DESC_OFFSET))(this);
		}

		::System::String* get_NoUnderLineDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_NOUNDERLINEDESC_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		static ::System::Collections::Generic::List_1<::System::Object*>* CollectBonusDetail(::RPG::Client::GridFightBonusDropData* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::RPG::Client::GridFightBonusDropData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_COLLECTBONUSDETAIL_OFFSET))(a1);
		}

		::System::UInt32 GetParam(::System::Int32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GETPARAM_OFFSET))(this, a1);
		}

		::System::Boolean get_FromTraitEffect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMTRAITEFFECT_OFFSET))(this);
		}

		::System::Boolean get_FromPetPal()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMPETPAL_OFFSET))(this);
		}

		::System::Boolean get_FromBonfire()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_FROMBONFIRE_OFFSET))(this);
		}

		::System::UInt32 get_PetPalEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_GET_PETPALEFFECTID_OFFSET))(this);
		}

		::System::Void CopyAddSource(::RPG::Client::GridFightPrayQuest* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightPrayQuest*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPRAYQUEST_COPYADDSOURCE_OFFSET))(this, a1);
		}

	};
}
