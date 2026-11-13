#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GIDEDMOPFKF;
namespace RPG::Client { class GridFightCommonDetailData; }
namespace RPG::Client { class GridFightOrbData; }
namespace RPG::Client { class GridFightPortalData; }
namespace RPG::GameCore { class GridFightPortalBuffConfigRow; }
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }
namespace RPG::GameCore { class GridFightPortalRemarkConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPORTALDATA_BUILDBONUSDATA_OFFSET UNITYSDK_OFFSET(0x1DF2F160)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1DF2F040)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x1DF2EEB0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF2EFA0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_AVATARDELAYINDEX_OFFSET UNITYSDK_OFFSET(0x1DF30320)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_AVATARLIST_OFFSET UNITYSDK_OFFSET(0x1DF30260)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0x1DF304F0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0x1DF305E0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESCINGAME_OFFSET UNITYSDK_OFFSET(0x1DF2FB00)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1DF2F810)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_EQUIPDELAYINDEX_OFFSET UNITYSDK_OFFSET(0x1DF30360)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_EQUIPLIST_OFFSET UNITYSDK_OFFSET(0x1DF302A0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HADDELAYBONUS_OFFSET UNITYSDK_OFFSET(0x1DF300E0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASAVATAR_OFFSET UNITYSDK_OFFSET(0x1DF30140)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASEQUIP_OFFSET UNITYSDK_OFFSET(0x1DF301A0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASORB_OFFSET UNITYSDK_OFFSET(0x1DF30200)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1DF30010)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ID_OFFSET UNITYSDK_OFFSET(0x1DF2F700)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1DF30400)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISINBOOK_OFFSET UNITYSDK_OFFSET(0x1DF2F750)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x1DF303A0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISSHOWBONUS_OFFSET UNITYSDK_OFFSET(0x1DF30060)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ORBLIST_OFFSET UNITYSDK_OFFSET(0x1DF302E0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x1DF2EE00)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x1DF2EE50)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REMARK_OFFSET UNITYSDK_OFFSET(0x1DF2FE40)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_SHOWNPCIDLIST_OFFSET UNITYSDK_OFFSET(0x1DF2FDF0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_TITLE_OFFSET UNITYSDK_OFFSET(0x1DF2F7A0)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA_GET__REMARKROW_OFFSET UNITYSDK_OFFSET(0x1DF2FF60)
#define RPG_CLIENT_GRIDFIGHTPORTALDATA__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1DF30450)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPortalData_TypeDefinitionIndex = 66751;

	class GridFightPortalData : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _EquipList; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* _AvatarList; // 0x18
		::RPG::GameCore::GridFightPortalBuffConfigRow* _Row; // 0x20
		::RPG::GameCore::GridFightPortalExpiredConfigRow* _ExpiredRow; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* _OrbList; // 0x30
		::System::Int32 _EquipDelayIndex; // 0x38
		::System::Int32 _AvatarDelayIndex; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightPortalData* Create(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_OFFSET))(a1);
		}

		static ::RPG::Client::GridFightPortalData* Create_1(::GIDEDMOPFKF* a1)
		{
			return ((::RPG::Client::GridFightPortalData*(*)(::GIDEDMOPFKF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_CREATE_1_OFFSET))(a1);
		}

		::System::Void BuildBonusData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_BUILDBONUSDATA_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ID_OFFSET))(this);
		}

		::System::Boolean get_IsInbook()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISINBOOK_OFFSET))(this);
		}

		::RPG::Client::TextID get_Title()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_TITLE_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESC_OFFSET))(this);
		}

		::System::String* get_DescInGame()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_DESCINGAME_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ShowNpcIDList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_SHOWNPCIDLIST_OFFSET))(this);
		}

		::System::String* get_Remark()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REMARK_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ICONPATH_OFFSET))(this);
		}

		::System::Boolean get_IsShowBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISSHOWBONUS_OFFSET))(this);
		}

		::System::Boolean get_HadDelayBonus()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HADDELAYBONUS_OFFSET))(this);
		}

		::System::Boolean get_HasAvatar()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASAVATAR_OFFSET))(this);
		}

		::System::Boolean get_HasEquip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASEQUIP_OFFSET))(this);
		}

		::System::Boolean get_HasOrb()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_HASORB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_AvatarList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_AVATARLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>* get_EquipList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightCommonDetailData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_EQUIPLIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>* get_OrbList()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightOrbData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ORBLIST_OFFSET))(this);
		}

		::System::Int32 get_AvatarDelayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_AVATARDELAYINDEX_OFFSET))(this);
		}

		::System::Int32 get_EquipDelayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_EQUIPDELAYINDEX_OFFSET))(this);
		}

		::RPG::GameCore::GridFightPortalRemarkConfigRow* get__RemarkRow()
		{
			return ((::RPG::GameCore::GridFightPortalRemarkConfigRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET__REMARKROW_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::UInt32 get_CurSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSEASONID_OFFSET))(this);
		}

		::System::UInt32 get_CurSubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA_GET_CURSUBSEASONID_OFFSET))(this);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPORTALDATA__ISEXPIRED_OFFSET))(this);
		}

	};
}
