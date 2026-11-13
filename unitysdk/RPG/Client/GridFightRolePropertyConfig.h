#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E26E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x1D4E20F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D4E2820)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D4E28C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4E2840)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D4E2880)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x1D4E27E0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4E2860)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET UNITYSDK_OFFSET(0x1D4E28A0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D4E2800)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1D4E27C0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D4E2830)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET UNITYSDK_OFFSET(0x1D4E28D0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4E2850)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET UNITYSDK_OFFSET(0x1D4E2890)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET UNITYSDK_OFFSET(0x1D4E27F0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET UNITYSDK_OFFSET(0x1D4E2870)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET UNITYSDK_OFFSET(0x1D4E28B0)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET UNITYSDK_OFFSET(0x1D4E2810)
#define RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1D4E27D0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightRolePropertyConfig_TypeDefinitionIndex = 66061;

	class GridFightRolePropertyConfig : public ::System::Object
	{
	public:
		::System::String* _IconPath_k__BackingField; // 0x10
		::System::String* _MiniIconPath_k__BackingField; // 0x18
		::System::UInt32 _ExtraEffectID_k__BackingField; // 0x20
		::System::UInt32 _Order_k__BackingField; // 0x24
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x28
		::System::Boolean _IsGridFightOnly_k__BackingField; // 0x2C
		::System::Boolean _IsDisplay_k__BackingField; // 0x2D
		::System::Byte _padding0[0x2];
		::RPG::Client::TextID _PropertyName_k__BackingField; // 0x30
		::RPG::Client::TextID _DetailPropertyName_k__BackingField; // 0x40
		static ::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>** StaticGet_GetConfigImpl()
		{
			return (::System::Func_2<::RPG::GameCore::AvatarPropertyType, ::RPG::Client::GridFightRolePropertyConfig*>**)UnitySDK::FromName("RPG.Client", "GridFightRolePropertyConfig")->GetStaticField(0xAAA0);
		}

		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_CTOR_OFFSET))(this, a1);
		}

		static ::RPG::Client::GridFightRolePropertyConfig* GetConfig(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GETCONFIG_OFFSET))(a1);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsGridFightOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISGRIDFIGHTONLY_OFFSET))(this);
		}

		::System::Void set_IsGridFightOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISGRIDFIGHTONLY_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_PropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_PROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_PropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_PROPERTYNAME_OFFSET))(this, a1);
		}

		::RPG::Client::TextID get_DetailPropertyName()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_DETAILPROPERTYNAME_OFFSET))(this);
		}

		::System::Void set_DetailPropertyName(::RPG::Client::TextID a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TextID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_DETAILPROPERTYNAME_OFFSET))(this, a1);
		}

		::System::String* get_IconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ICONPATH_OFFSET))(this);
		}

		::System::Void set_IconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ICONPATH_OFFSET))(this, a1);
		}

		::System::String* get_MiniIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_MINIICONPATH_OFFSET))(this);
		}

		::System::Void set_MiniIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_MINIICONPATH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDisplay()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ISDISPLAY_OFFSET))(this);
		}

		::System::Void set_IsDisplay(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ISDISPLAY_OFFSET))(this, a1);
		}

		::System::UInt32 get_Order()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_ORDER_OFFSET))(this);
		}

		::System::Void set_Order(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_ORDER_OFFSET))(this, a1);
		}

		::System::UInt32 get_ExtraEffectID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_GET_EXTRAEFFECTID_OFFSET))(this);
		}

		::System::Void set_ExtraEffectID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTROLEPROPERTYCONFIG_SET_EXTRAEFFECTID_OFFSET))(this, a1);
		}

	};
}
