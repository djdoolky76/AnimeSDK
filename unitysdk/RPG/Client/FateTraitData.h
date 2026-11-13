#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateTraitType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class JKGOFELADII;
class OMGHALDIJHL;
class PLMAMHBLJKP;
class PMAJDIAJMKG;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::Client { class FateBuffData; }
namespace RPG::Client { class FateBuffTraitInfo; }
namespace RPG::Client { class FateTraitBuffItem; }
namespace RPG::Client { class FateTraitData; }
namespace RPG::Client { class IFateTraitSource; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_FATETRAITDATA_CLEARSOURCE_OFFSET UNITYSDK_OFFSET(0x1C506800)
#define RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET UNITYSDK_OFFSET(0x1C4FE620)
#define RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1C506130)
#define RPG_CLIENT_FATETRAITDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C506120)
#define RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET UNITYSDK_OFFSET(0x1C507940)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4FE800)
#define RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1C508840)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0x1C508630)
#define RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1C506770)
#define RPG_CLIENT_FATETRAITDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET UNITYSDK_OFFSET(0x1C508280)
#define RPG_CLIENT_FATETRAITDATA_GET_EFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1C508B40)
#define RPG_CLIENT_FATETRAITDATA_GET_EXTRAEFFECTARRAY_OFFSET UNITYSDK_OFFSET(0x1C508C80)
#define RPG_CLIENT_FATETRAITDATA_GET_ISACTIVETRAITBUFFRANKMAX_OFFSET UNITYSDK_OFFSET(0x1C5086B0)
#define RPG_CLIENT_FATETRAITDATA_GET_ISMODIFIED_OFFSET UNITYSDK_OFFSET(0x1C507D20)
#define RPG_CLIENT_FATETRAITDATA_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1C509320)
#define RPG_CLIENT_FATETRAITDATA_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C508AD0)
#define RPG_CLIENT_FATETRAITDATA_GET_RELATEDFATEBUFFIDLIST_OFFSET UNITYSDK_OFFSET(0x1C507DF0)
#define RPG_CLIENT_FATETRAITDATA_GET_ROW_OFFSET UNITYSDK_OFFSET(0x1C506510)
#define RPG_CLIENT_FATETRAITDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET UNITYSDK_OFFSET(0x1C508BE0)
#define RPG_CLIENT_FATETRAITDATA_GET_SOURCEAVATARID_OFFSET UNITYSDK_OFFSET(0x1C508390)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONARRAY_OFFSET UNITYSDK_OFFSET(0x1C508D40)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONPATH_OFFSET UNITYSDK_OFFSET(0x1C508DA0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFIDARRAY_OFFSET UNITYSDK_OFFSET(0x1C507C20)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C5078A0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFMAXREQUIRECOUNT_OFFSET UNITYSDK_OFFSET(0x1C508700)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1C508610)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSMALLICONPATH_OFFSET UNITYSDK_OFFSET(0x1C508CE0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1C507C80)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG1_OFFSET UNITYSDK_OFFSET(0x1C509170)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG2_OFFSET UNITYSDK_OFFSET(0x1C5091E0)
#define RPG_CLIENT_FATETRAITDATA_GET_TRAITTYPE_OFFSET UNITYSDK_OFFSET(0x1C4FE6B0)
#define RPG_CLIENT_FATETRAITDATA_GET_UNACHIEVETRAITBUFFCOUNT_OFFSET UNITYSDK_OFFSET(0x1C508650)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEODESC_OFFSET UNITYSDK_OFFSET(0x1C5092B0)
#define RPG_CLIENT_FATETRAITDATA_GET_VIDEOID_OFFSET UNITYSDK_OFFSET(0x1C509250)
#define RPG_CLIENT_FATETRAITDATA_ISANYBUFFACTIVE_OFFSET UNITYSDK_OFFSET(0x1C507740)
#define RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET UNITYSDK_OFFSET(0x1C4FE710)
#define RPG_CLIENT_FATETRAITDATA_REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1C5068A0)
#define RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET UNITYSDK_OFFSET(0x1C508640)
#define RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1C508620)
#define RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET UNITYSDK_OFFSET(0x1C506650)
#define RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET UNITYSDK_OFFSET(0x1C5079D0)
#define RPG_CLIENT_FATETRAITDATA__GETTEXTPARAMLIST_OFFSET UNITYSDK_OFFSET(0x1C508520)
#define RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET UNITYSDK_OFFSET(0x1C5093C0)
#define RPG_CLIENT_FATETRAITDATA__REFRESHTRAITSOURCELIST_OFFSET UNITYSDK_OFFSET(0x1C5068F0)

namespace RPG::Client
{
	inline static constexpr unsigned int FateTraitData_TypeDefinitionIndex = 65452;

	class FateTraitData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* _RelatedFateBuffIDList; // 0x10
		::OMGHALDIJHL* _ParameterProxyFactory; // 0x18
		::RPG::Client::FateBuffTraitInfo* _BelongTraitInfo; // 0x20
		::System::Collections::Generic::List_1<::PLMAMHBLJKP*>* _ActiveTraitSourceList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* _TraitBuffItemList; // 0x30
		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* _TraitSourceList; // 0x38
		::PMAJDIAJMKG* _DynamicParamTextData; // 0x40
		::JKGOFELADII* _Row; // 0x48
		::System::UInt32 _TraitBuffMaxRequireCount; // 0x50
		::System::UInt32 _ActiveTraitBuffRank_k__BackingField; // 0x54
		::System::UInt32 _TraitID_k__BackingField; // 0x58
		static ::System::UInt32* StaticGet__CasterModifyMainTraitID()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG.Client", "FateTraitData")->GetStaticField(0x13FF0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::FateTraitData* Create(::System::UInt32 a1, ::OMGHALDIJHL* a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::OMGHALDIJHL*, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATE_OFFSET))(a1, a2, a3);
		}

		static ::RPG::Client::FateTraitData* CreateDisplayData(::System::UInt32 a1, ::System::UInt32 a2, ::RPG::Client::FateBuffTraitInfo* a3)
		{
			return ((::RPG::Client::FateTraitData*(*)(::System::UInt32, ::System::UInt32, ::RPG::Client::FateBuffTraitInfo*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CREATEDISPLAYDATA_OFFSET))(a1, a2, a3);
		}

		::System::Void SyncSource(::Google::Protobuf::Collections::RepeatedField_1<::PLMAMHBLJKP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::PLMAMHBLJKP*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SYNCSOURCE_OFFSET))(this, a1);
		}

		::System::Void ClearSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_CLEARSOURCE_OFFSET))(this);
		}

		::System::Void RefreshTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_REFRESHTRAITSOURCELIST_OFFSET))(this);
		}

		::System::Boolean IsAnyBuffActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_ISANYBUFFACTIVE_OFFSET))(this);
		}

		static ::System::Boolean IsTraitSkillTypeUnlock(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_ISTRAITSKILLTYPEUNLOCK_OFFSET))(a1);
		}

		::System::UInt32 GetActiveTraitBuffRankAfterAddBuffData(::RPG::Client::FateBuffData* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::FateBuffData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GETACTIVETRAITBUFFRANKAFTERADDBUFFDATA_OFFSET))(this, a1);
		}

		::System::Void _GenerateTraitBuffItemList(::OMGHALDIJHL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMGHALDIJHL*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GENERATETRAITBUFFITEMLIST_OFFSET))(this, a1);
		}

		::System::Void _RefreshTraitSourceList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__REFRESHTRAITSOURCELIST_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* _GetTextParamList()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GETTEXTPARAMLIST_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITID_OFFSET))(this);
		}

		::System::Void set_TraitID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_TRAITID_OFFSET))(this, a1);
		}

		::System::UInt32 get_ActiveTraitBuffRank()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITBUFFRANK_OFFSET))(this);
		}

		::System::Void set_ActiveTraitBuffRank(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_SET_ACTIVETRAITBUFFRANK_OFFSET))(this, a1);
		}

		::System::UInt32 get_AchieveTraitBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFCOUNT_OFFSET))(this);
		}

		::System::UInt32 get_UnAchieveTraitBuffCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_UNACHIEVETRAITBUFFCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsActiveTraitBuffRankMax()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISACTIVETRAITBUFFRANKMAX_OFFSET))(this);
		}

		::System::UInt32 get_TraitBuffMaxRequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFMAXREQUIRECOUNT_OFFSET))(this);
		}

		::System::UInt32 get_AchieveTraitBuffMaxRequireCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACHIEVETRAITBUFFMAXREQUIRECOUNT_OFFSET))(this);
		}

		::JKGOFELADII* get_Row()
		{
			return ((::JKGOFELADII*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ROW_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_NAME_OFFSET))(this);
		}

		::System::String* get_EffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_EFFECTDESCTEXT_OFFSET))(this);
		}

		::System::String* get_SimpleEffectDescText()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_SIMPLEEFFECTDESCTEXT_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_TraitBuffIDArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFIDARRAY_OFFSET))(this);
		}

		::System::UInt32 get_SourceAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_SOURCEAVATARID_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>* get_TraitBuffItemList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::FateTraitBuffItem*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBUFFITEMLIST_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ExtraEffectArray()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_EXTRAEFFECTARRAY_OFFSET))(this);
		}

		::System::String* get_TraitSmallIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITSMALLICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::String*>* get_TraitBigIconArray()
		{
			return ((::Il2CppArray<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONARRAY_OFFSET))(this);
		}

		::System::String* get_TraitBigIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITBIGICONPATH_OFFSET))(this);
		}

		::RPG::GameCore::FateTraitType get_TraitType()
		{
			return ((::RPG::GameCore::FateTraitType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitTag1()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG1_OFFSET))(this);
		}

		::RPG::Client::TextID get_TraitTag2()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITTAG2_OFFSET))(this);
		}

		::System::UInt32 get_VideoID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_VIDEOID_OFFSET))(this);
		}

		::RPG::Client::TextID get_VideoDesc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_VIDEODESC_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISSHOW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_RelatedFateBuffIDList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_RELATEDFATEBUFFIDLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::PLMAMHBLJKP*>* get_ActiveTraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::PLMAMHBLJKP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ACTIVETRAITSOURCELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>* get_TraitSourceList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::IFateTraitSource*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_TRAITSOURCELIST_OFFSET))(this);
		}

		static ::System::UInt32 get_CasterModifyMainTraitID()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_CASTERMODIFYMAINTRAITID_OFFSET))();
		}

		::System::Boolean get_IsModified()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA_GET_ISMODIFIED_OFFSET))(this);
		}

		::System::Boolean _get_AchieveTraitBuffCount_b__21_0(::RPG::Client::FateTraitBuffItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::FateTraitBuffItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATETRAITDATA__GET_ACHIEVETRAITBUFFCOUNT_B__21_0_OFFSET))(this, a1);
		}

	};
}
