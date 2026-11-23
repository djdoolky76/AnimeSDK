#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E12F55A5FCCCF1EC.h"
#include "unitysdk/F52D7D0423C392F6/E91CA3863B5A9A0A.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define ABC_ENTITY_COMMONDATA_CREATE_1_OFFSET UNITYSDK_OFFSET(0x23B4FD0)
#define ABC_ENTITY_COMMONDATA_CREATE_2_OFFSET UNITYSDK_OFFSET(0x23B4BE0)
#define ABC_ENTITY_COMMONDATA_CREATE_3_OFFSET UNITYSDK_OFFSET(0x23B51B0)
#define ABC_ENTITY_COMMONDATA_CREATE_4_OFFSET UNITYSDK_OFFSET(0x23B4DE0)
#define ABC_ENTITY_COMMONDATA_CREATE_5_OFFSET UNITYSDK_OFFSET(0x23B4CE0)
#define ABC_ENTITY_COMMONDATA_CREATE_6_OFFSET UNITYSDK_OFFSET(0x23B4EE0)
#define ABC_ENTITY_COMMONDATA_CREATE_OFFSET UNITYSDK_OFFSET(0x23B50C0)
#define ABC_ENTITY_COMMONDATA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x23B52A0)
#define ABC_ENTITY_COMMONDATA_EQUALS_OFFSET UNITYSDK_OFFSET(0x23B5550)
#define ABC_ENTITY_COMMONDATA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x23B5710)
#define ABC_ENTITY_COMMONDATA_GETSTRING_OFFSET UNITYSDK_OFFSET(0x23B5910)
#define ABC_ENTITY_COMMONDATA_GET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x1873260)
#define ABC_ENTITY_COMMONDATA_GET_CUSTOMOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ABC_ENTITY_COMMONDATA_GET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define ABC_ENTITY_COMMONDATA_GET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x233F9B0)
#define ABC_ENTITY_COMMONDATA_GET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x17D6300)
#define ABC_ENTITY_COMMONDATA_GET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x23B5B50)
#define ABC_ENTITY_COMMONDATA_GET_ULONGVALUE_OFFSET UNITYSDK_OFFSET(0x17F35A0)
#define ABC_ENTITY_COMMONDATA_SET_BOOLVALUE_OFFSET UNITYSDK_OFFSET(0x23B5BA0)
#define ABC_ENTITY_COMMONDATA_SET_CUSTOMOBJECTVALUE_OFFSET UNITYSDK_OFFSET(0x23B5C10)
#define ABC_ENTITY_COMMONDATA_SET_FIXEDVALUE_OFFSET UNITYSDK_OFFSET(0x23B5C90)
#define ABC_ENTITY_COMMONDATA_SET_FLOATVALUE_OFFSET UNITYSDK_OFFSET(0x23B5D00)
#define ABC_ENTITY_COMMONDATA_SET_INTVALUE_OFFSET UNITYSDK_OFFSET(0x23B5D70)
#define ABC_ENTITY_COMMONDATA_SET_STRINGVALUE_OFFSET UNITYSDK_OFFSET(0x23B5DE0)
#define ABC_ENTITY_COMMONDATA_SET_ULONGVALUE_OFFSET UNITYSDK_OFFSET(0x23B5E60)
#define ABC_ENTITY_COMMONDATA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x23B59B0)
#define ABC_ENTITY_COMMONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace ABC::Entity
{
	inline static constexpr unsigned int CommonData_TypeDefinitionIndex = 3659;

	class CommonData : public ::System::Object
	{
	public:
		::System::Object* _customObjectValue; // 0x10
		::System::Single _floatValue; // 0x18
		::System::Int32 _intValue; // 0x18
		::System::Boolean _boolValue; // 0x18
		::E12F55A5FCCCF1EC _fixedValue; // 0x18
		::System::UInt64 _ulongValue; // 0x18
		::F52D7D0423C392F6::E91CA3863B5A9A0A DataType; // 0x20

		::System::Void set_FloatValue(::System::Single E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_FLOATVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::String* get_StringValue()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_STRINGVALUE_OFFSET))(this);
		}

		::System::Void set_CustomObjectValue(::System::Object* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_CUSTOMOBJECTVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Single get_FloatValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_FLOATVALUE_OFFSET))(this);
		}

		static ::ABC::Entity::CommonData* Create(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::Int32))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA__CTOR_OFFSET))(this);
		}

		static ::ABC::Entity::CommonData* Create_1(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_1_OFFSET))(E937D4885DAA1AE8);
		}

		static ::ABC::Entity::CommonData* Create_2(::System::Single E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::Single))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_2_OFFSET))(E937D4885DAA1AE8);
		}

		static ::ABC::Entity::CommonData* Create_3(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_3_OFFSET))(E937D4885DAA1AE8);
		}

		::E12F55A5FCCCF1EC get_FixedValue()
		{
			return ((::E12F55A5FCCCF1EC(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_FIXEDVALUE_OFFSET))(this);
		}

		::System::UInt64 get_ULongValue()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_ULONGVALUE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_IntValue()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_INTVALUE_OFFSET))(this);
		}

		::System::Boolean get_BoolValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_BOOLVALUE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_TOSTRING_OFFSET))(this);
		}

		::System::Void set_BoolValue(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_BOOLVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		static ::ABC::Entity::CommonData* Create_4(::System::Object* E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::Object*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_4_OFFSET))(E937D4885DAA1AE8);
		}

		::System::String* GetString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GETSTRING_OFFSET))(this);
		}

		::System::Object* get_CustomObjectValue()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_GET_CUSTOMOBJECTVALUE_OFFSET))(this);
		}

		static ::ABC::Entity::CommonData* Create_5(::System::String* E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::String*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_5_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void set_StringValue(::System::String* E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_STRINGVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean Equals(::ABC::Entity::CommonData* BEEE7A5A60941632)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Entity::CommonData*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_EQUALS_OFFSET))(this, BEEE7A5A60941632);
		}

		static ::ABC::Entity::CommonData* Create_6(::System::UInt64 E937D4885DAA1AE8)
		{
			return ((::ABC::Entity::CommonData*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_CREATE_6_OFFSET))(E937D4885DAA1AE8);
		}

		::System::Void set_ULongValue(::System::UInt64 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_ULONGVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void set_IntValue(::System::Int32 E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_INTVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Boolean Equals_1(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}

		::System::Void set_FixedValue(::E12F55A5FCCCF1EC E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::E12F55A5FCCCF1EC))((::PBYTE)hIl2Cpp + ABC_ENTITY_COMMONDATA_SET_FIXEDVALUE_OFFSET))(this, E937D4885DAA1AE8);
		}
	};
}
