#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::Client { class GridFightSpotLightConfig; }
namespace RPG::Client { class GridFightSpotlightTagConfig; }
namespace RPG::Client { class GridFightTraitConfig; }
namespace RPG::GameCore { class GridFightSpotLightConfigRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E15F250)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E15E8A0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1E15E6E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_DESC_OFFSET UNITYSDK_OFFSET(0x1E15EE90)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ENEMYDIFFLVADD_OFFSET UNITYSDK_OFFSET(0x1E15F1B0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1E15ED80)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x1E15ED20)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1E15F200)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E15EDF0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_SPOTLIGHTID_OFFSET UNITYSDK_OFFSET(0x1E15ECB0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_SUITABLEAVATARLIST_OFFSET UNITYSDK_OFFSET(0x1E15F0F0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0x1E15F0D0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TAG_OFFSET UNITYSDK_OFFSET(0x1E15EBA0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1E15ED00)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TRAITID_OFFSET UNITYSDK_OFFSET(0x1E15EC60)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_SET_TAGCONFIGS_OFFSET UNITYSDK_OFFSET(0x1E15F0E0)
#define RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_SET_TRAITCONFIG_OFFSET UNITYSDK_OFFSET(0x1E15ED10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightSpotLightConfig_TypeDefinitionIndex = 66959;

	class GridFightSpotLightConfig : public ::System::Object
	{
	public:
		::RPG::Client::GridFightTraitConfig* _TraitConfig_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>* _TagConfigs_k__BackingField; // 0x18
		::RPG::GameCore::GridFightSpotLightConfigRow* _Row; // 0x20
		static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightSpotLightConfig*>** StaticGet__SpotLightIDToConfig()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::Client::GridFightSpotLightConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightSpotLightConfig")->GetStaticField(0x101A0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_CCTOR_OFFSET))();
		}

		static ::RPG::Client::GridFightSpotLightConfig* GetConfig(::System::UInt32 a1)
		{
			return ((::RPG::Client::GridFightSpotLightConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::System::UInt32 get_SpotLightID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_SPOTLIGHTID_OFFSET))(this);
		}

		::System::UInt32 get_TraitID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TRAITID_OFFSET))(this);
		}

		::RPG::Client::GridFightTraitConfig* get_TraitConfig()
		{
			return ((::RPG::Client::GridFightTraitConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TRAITCONFIG_OFFSET))(this);
		}

		::System::Void set_TraitConfig(::RPG::Client::GridFightTraitConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightTraitConfig*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_SET_TRAITCONFIG_OFFSET))(this, a1);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ICON_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Desc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_DESC_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_Tag()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TAG_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>* get_TagConfigs()
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_TAGCONFIGS_OFFSET))(this);
		}

		::System::Void set_TagConfigs(::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::GridFightSpotlightTagConfig*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_SET_TAGCONFIGS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* get_SuitableAvatarList()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_SUITABLEAVATARLIST_OFFSET))(this);
		}

		::System::Int32 get_EnemyDiffLvAdd()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ENEMYDIFFLVADD_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTSPOTLIGHTCONFIG_GET_ISVALID_OFFSET))(this);
		}

	};
}
