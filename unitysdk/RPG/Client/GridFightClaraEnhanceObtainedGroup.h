#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightClaraEnhanceCategory.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightClaraEnhanceOptionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D592900)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D593640)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_CONFIGS_OFFSET UNITYSDK_OFFSET(0x1D593660)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_STATENAME_OFFSET UNITYSDK_OFFSET(0x1D593750)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_TITLETEXTID_OFFSET UNITYSDK_OFFSET(0x1D593680)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_SET_CATEGORY_OFFSET UNITYSDK_OFFSET(0x1D593650)
#define RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_SET_CONFIGS_OFFSET UNITYSDK_OFFSET(0x1D593670)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightClaraEnhanceObtainedGroup_TypeDefinitionIndex = 67294;

	class GridFightClaraEnhanceObtainedGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* _Configs_k__BackingField; // 0x10
		::RPG::GameCore::GridFightClaraEnhanceCategory _Category_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::GridFightClaraEnhanceCategory get_Category()
		{
			return ((::RPG::GameCore::GridFightClaraEnhanceCategory(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_CATEGORY_OFFSET))(this);
		}

		::System::Void set_Category(::RPG::GameCore::GridFightClaraEnhanceCategory a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GridFightClaraEnhanceCategory))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_SET_CATEGORY_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* get_Configs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_CONFIGS_OFFSET))(this);
		}

		::System::Void set_Configs(::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightClaraEnhanceOptionConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_SET_CONFIGS_OFFSET))(this, a1);
		}

		::System::String* get_TitleTextID()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_TITLETEXTID_OFFSET))(this);
		}

		::System::String* get_StateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCLARAENHANCEOBTAINEDGROUP_GET_STATENAME_OFFSET))(this);
		}

	};
}
