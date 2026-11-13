#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FGOLMOBLNCN;
namespace System { class String; }

#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_CTOR_OFFSET UNITYSDK_OFFSET(0x19717B20)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1971A570)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1971A510)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1971A550)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1971A530)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x1971A590)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1971A4F0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x1971A580)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1971A520)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET UNITYSDK_OFFSET(0x1971A560)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET UNITYSDK_OFFSET(0x1971A540)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET UNITYSDK_OFFSET(0x1971A5A0)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1971A500)
#define RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET UNITYSDK_OFFSET(0x19718020)

namespace RPG::Client
{
	inline static constexpr unsigned int RelicPresetPropertyViewModel_TypeDefinitionIndex = 68822;

	class RelicPresetPropertyViewModel : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::FGOLMOBLNCN* _DataService; // 0x18
		::RPG::Client::TextID _Name_k__BackingField; // 0x20
		::RPG::GameCore::FixPoint _CurrentValue_k__BackingField; // 0x30
		::RPG::GameCore::FixPoint _PreviewValue_k__BackingField; // 0x38
		::System::Boolean _IsRecommend_k__BackingField; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x44
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1, ::FGOLMOBLNCN* a2, ::System::Boolean a3, ::RPG::GameCore::FixPoint a4, ::RPG::GameCore::FixPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType, ::FGOLMOBLNCN*, ::System::Boolean, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ICONPATH_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_NAME_OFFSET))(this, a1);
		}

		::System::Boolean get_IsRecommend()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_ISRECOMMEND_OFFSET))(this);
		}

		::System::Void set_IsRecommend(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_ISRECOMMEND_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_CurrentValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_CURRENTVALUE_OFFSET))(this);
		}

		::System::Void set_CurrentValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_CURRENTVALUE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_PreviewValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_GET_PREVIEWVALUE_OFFSET))(this);
		}

		::System::Void set_PreviewValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_SET_PREVIEWVALUE_OFFSET))(this, a1);
		}

		::System::Void UpdateValue(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_RELICPRESETPROPERTYVIEWMODEL_UPDATEVALUE_OFFSET))(this, a1, a2);
		}

	};
}
