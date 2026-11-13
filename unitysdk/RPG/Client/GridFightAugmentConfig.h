#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
namespace RPG::GameCore { class GridFightAugmentConfigRow; }
namespace RPG::GameCore { class GridFightAugmentExpiredConfigRow; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text::RegularExpressions { class Regex; }

#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C728A10)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7260C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET UNITYSDK_OFFSET(0x1C7282C0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET UNITYSDK_OFFSET(0x1C727910)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET UNITYSDK_OFFSET(0x1C728830)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET UNITYSDK_OFFSET(0x1C728920)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET UNITYSDK_OFFSET(0x1C727EA0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET UNITYSDK_OFFSET(0x1C728350)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1C727AB0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET UNITYSDK_OFFSET(0x1C726340)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1C728050)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET UNITYSDK_OFFSET(0x1C727DF0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1C727B80)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C726440)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET UNITYSDK_OFFSET(0x1C7279E0)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET UNITYSDK_OFFSET(0x1C726580)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET UNITYSDK_OFFSET(0x1C727C50)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET UNITYSDK_OFFSET(0x1C727D20)
#define RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET UNITYSDK_OFFSET(0x1C728790)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightAugmentConfig_TypeDefinitionIndex = 65823;

	class GridFightAugmentConfig : public ::System::Object
	{
	public:
		::RPG::GameCore::GridFightAugmentConfigRow* _ConfigRow; // 0x10
		::RPG::GameCore::GridFightAugmentExpiredConfigRow* _ConfigExpiredRow; // 0x18
		static ::System::Text::RegularExpressions::Regex** StaticGet__EquipRegex()
		{
			return (::System::Text::RegularExpressions::Regex**)UnitySDK::FromName("RPG.Client", "GridFightAugmentConfig")->GetStaticField(0x6FAF0);
		}

		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::System::Object*>* GetDescDetailObject()
		{
			return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GETDESCDETAILOBJECT_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ID_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_NAME_OFFSET))(this);
		}

		::System::String* get_RawDesc()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_RAWDESC_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_ChapterLimitList()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CHAPTERLIMITLIST_OFFSET))(this);
		}

		::RPG::GameCore::GridFightAugmentQuality get_Quality()
		{
			return ((::RPG::GameCore::GridFightAugmentQuality(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_QUALITY_OFFSET))(this);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitID()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITID_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* get_RefTraitScore()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_REFTRAITSCORE_OFFSET))(this);
		}

		::System::Boolean get_IsOCEffective()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISOCEFFECTIVE_OFFSET))(this);
		}

		::System::Boolean get_HasDetail()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASDETAIL_OFFSET))(this);
		}

		::System::Boolean get_HasEquipContext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_HASEQUIPCONTEXT_OFFSET))(this);
		}

		::System::Boolean get_IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_ISEXPIRED_OFFSET))(this);
		}

		::System::UInt32 get_CurSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSEASONID_OFFSET))(this);
		}

		::System::UInt32 get_CurSubSeasonID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG_GET_CURSUBSEASONID_OFFSET))(this);
		}

		::System::Boolean _IsExpired()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTAUGMENTCONFIG__ISEXPIRED_OFFSET))(this);
		}

	};
}
