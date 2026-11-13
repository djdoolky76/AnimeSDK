#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightMonsterCampConfig; }
namespace RPG::Client { class GridFightMonsterData; }
namespace RPG::GameCore { class GridFightCampConfigRow; }
namespace RPG::GameCore { class GridFightCampSeasonConfigRow; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_OFFSET UNITYSDK_OFFSET(0x1CC27120)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC59480)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETBOSS_OFFSET UNITYSDK_OFFSET(0x1CC59490)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETELITE_OFFSET UNITYSDK_OFFSET(0x1CC59730)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETMINION_OFFSET UNITYSDK_OFFSET(0x1CC59880)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1CC59BD0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1CC59AC0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1CC59A30)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_IMAGEPATH_OFFSET UNITYSDK_OFFSET(0x1CC59B10)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ISIGNORE_OFFSET UNITYSDK_OFFSET(0x1CC27230)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_MONSTERLIST_OFFSET UNITYSDK_OFFSET(0x1CC599D0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1CC59B60)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC59A50)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_TYPEID_OFFSET UNITYSDK_OFFSET(0x1CC59A70)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_ID_OFFSET UNITYSDK_OFFSET(0x1CC59A40)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_SEASONID_OFFSET UNITYSDK_OFFSET(0x1CC59A60)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__GETMONSTERSBYCONDITION_OFFSET UNITYSDK_OFFSET(0x1CC595E0)
#define RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___GETMONSTERSBYCONDITION_B__4_0_OFFSET UNITYSDK_OFFSET(0x1CC59C40)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightMonsterCampConfig_TypeDefinitionIndex = 66681;

	class GridFightMonsterCampConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightCampConfigRow* _row; // 0x10
		::RPG::GameCore::GridFightCampSeasonConfigRow* _seasonRow; // 0x18
		::System::UInt32 _SeasonID_k__BackingField; // 0x20
		::System::UInt32 _ID_k__BackingField; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::GridFightMonsterCampConfig* Create(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::Client::GridFightMonsterCampConfig*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_CREATE_OFFSET))(a1, a2);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetBoss()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETBOSS_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetElite()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETELITE_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* GetMinion()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GETMINION_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>* _GetMonstersByCondition(::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>* a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightMonsterData*>*(*)(::PVOID, ::System::Func_2<::RPG::Client::GridFightMonsterData*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG__GETMONSTERSBYCONDITION_OFFSET))(this, a1);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_ID_OFFSET))(this, a1);
		}

		::System::UInt32 get_SeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_SEASONID_OFFSET))(this);
		}

		::System::Void set_SeasonID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_SET_SEASONID_OFFSET))(this, a1);
		}

		::System::UInt32 get_TypeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_TYPEID_OFFSET))(this);
		}

		::System::Boolean get_IsIgnore()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ISIGNORE_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_ImagePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_IMAGEPATH_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::TextID get_Desc()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_DESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_MonsterList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG_GET_MONSTERLIST_OFFSET))(this);
		}

		::RPG::Client::GridFightMonsterData* __GetMonstersByCondition_b__4_0(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightMonsterData*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTMONSTERCAMPCONFIG___GETMONSTERSBYCONDITION_B__4_0_OFFSET))(this, a1);
		}

	};
}
