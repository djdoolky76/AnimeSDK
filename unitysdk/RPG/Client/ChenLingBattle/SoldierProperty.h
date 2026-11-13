#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GLBAOKOHKCF.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/TextID.h"
class GOBLMHMGCNF;
namespace RPG::Client::ChenLingBattle { class SoldierProperty; }
namespace System { class String; }

#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E25FF90)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1E25FF10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CREATE_OFFSET UNITYSDK_OFFSET(0x1E25DB10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CTOR_OFFSET UNITYSDK_OFFSET(0x1E25F790)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_FORMAT_OFFSET UNITYSDK_OFFSET(0x1E25F9F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x1E25FDB0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FORMATVALUE_OFFSET UNITYSDK_OFFSET(0x1E25F910)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ICON_OFFSET UNITYSDK_OFFSET(0x1E25F850)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x1E25FE10)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0x1E25F8A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1E25F7F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_PROPERTYTYPE_OFFSET UNITYSDK_OFFSET(0x1E25F7A0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E25F8F0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET__CONFIG_OFFSET UNITYSDK_OFFSET(0x1E25FEF0)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1E25F900)
#define RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET__CONFIG_OFFSET UNITYSDK_OFFSET(0x1E25FF00)

namespace RPG::Client::ChenLingBattle
{
	inline static constexpr unsigned int SoldierProperty_TypeDefinitionIndex = 78707;

	class SoldierProperty : public ::System::Object
	{
	public:
		::GOBLMHMGCNF* __Config_k__BackingField; // 0x10
		::RPG::GameCore::FixPoint _Value_k__BackingField; // 0x18
		static ::Il2CppArray<::GLBAOKOHKCF>** StaticGet_AllPropertyTypes()
		{
			return (::Il2CppArray<::GLBAOKOHKCF>**)UnitySDK::FromName("RPG.Client.ChenLingBattle", "SoldierProperty")->GetStaticField(0x52BE0);
		}

		static ::RPG::GameCore::FixPoint* StaticGet_Precision()
		{
			return (::RPG::GameCore::FixPoint*)UnitySDK::FromName("RPG.Client.ChenLingBattle", "SoldierProperty")->GetStaticField(0x11C50);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CCTOR_OFFSET))();
		}

		static ::RPG::Client::ChenLingBattle::SoldierProperty* Create(::GLBAOKOHKCF a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::RPG::Client::ChenLingBattle::SoldierProperty*(*)(::GLBAOKOHKCF, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_CREATE_OFFSET))(a1, a2);
		}

		::GLBAOKOHKCF get_PropertyType()
		{
			return ((::GLBAOKOHKCF(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_PROPERTYTYPE_OFFSET))(this);
		}

		::RPG::Client::TextID get_Name()
		{
			return ((::RPG::Client::TextID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_NAME_OFFSET))(this);
		}

		::System::String* get_Icon()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ICON_OFFSET))(this);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_ISSHOW_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint get_Value()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_Value(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET_VALUE_OFFSET))(this, a1);
		}

		::System::String* get_FormatValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FORMATVALUE_OFFSET))(this);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_FLOATVALUE_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET_INTVALUE_OFFSET))(this);
		}

		::GOBLMHMGCNF* get__Config()
		{
			return ((::GOBLMHMGCNF*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_GET__CONFIG_OFFSET))(this);
		}

		::System::Void set__Config(::GOBLMHMGCNF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GOBLMHMGCNF*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_SET__CONFIG_OFFSET))(this, a1);
		}

		static ::System::String* Format(::GLBAOKOHKCF a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::String*(*)(::GLBAOKOHKCF, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_FORMAT_OFFSET))(a1, a2);
		}

		::System::Int32 CompareTo(::RPG::Client::ChenLingBattle::SoldierProperty* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::ChenLingBattle::SoldierProperty*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGBATTLE_SOLDIERPROPERTY_COMPARETO_OFFSET))(this, a1);
		}

	};
}
