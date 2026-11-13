#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class GridFightRolePropertyConfig; }
namespace System { class String; }

#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_ADD_OFFSET UNITYSDK_OFFSET(0x1D3D4730)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3D4720)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1D3D4A20)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1D3D4960)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0x1D3D4A40)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D4A00)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_SET_ADDVALUE_OFFSET UNITYSDK_OFFSET(0x1D3D4A30)
#define RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_SET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1D3D4A10)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightTrailblazeBoughtProperty_TypeDefinitionIndex = 67280;

	class GridFightTrailblazeBoughtProperty : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint _AddValue_k__BackingField; // 0x10
		::RPG::GameCore::AvatarPropertyType _PropertyType_k__BackingField; // 0x18
		::System::Void _ctor(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_CTOR_OFFSET))(this, a1);
		}

		::System::Void Add(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_ADD_OFFSET))(this, a1);
		}

		::RPG::Client::GridFightRolePropertyConfig* get_Config()
		{
			return ((::RPG::Client::GridFightRolePropertyConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_CONFIG_OFFSET))(this);
		}

		::RPG::GameCore::AvatarPropertyType get_PropertyType()
		{
			return ((::RPG::GameCore::AvatarPropertyType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::System::Void set_PropertyType(::RPG::GameCore::AvatarPropertyType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AvatarPropertyType))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_SET_PROPERTYTYPE_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint get_AddValue()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_ADDVALUE_OFFSET))(this);
		}

		::System::Void set_AddValue(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_SET_ADDVALUE_OFFSET))(this, a1);
		}

		::System::String* get_FormatValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTTRAILBLAZEBOUGHTPROPERTY_GET_FORMATVALUE_OFFSET))(this);
		}

	};
}
