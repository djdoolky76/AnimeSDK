#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/System/Guid.h"

namespace System { class Object; }
namespace System { class String; }

#define ABC_CONFIG_GUID_COMPARETO_OFFSET UNITYSDK_OFFSET(0x244EE80)
#define ABC_CONFIG_GUID_EMPTY_OFFSET UNITYSDK_OFFSET(0x244EF60)
#define ABC_CONFIG_GUID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x244F040)
#define ABC_CONFIG_GUID_EQUALS_OFFSET UNITYSDK_OFFSET(0x244EF80)
#define ABC_CONFIG_GUID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x244F080)
#define ABC_CONFIG_GUID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x244F2C0)
#define ABC_CONFIG_GUID_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x244F2F0)
#define ABC_CONFIG_GUID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x244F380)
#define ABC_CONFIG_GUID_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x244F3C0)
#define ABC_CONFIG_GUID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x244F0A0)
#define ABC_CONFIG_GUID_TOSYSTEMGUID_OFFSET UNITYSDK_OFFSET(0x244F0E0)

namespace ABC::Config
{
	inline static constexpr unsigned int GUID_TypeDefinitionIndex = 2437;

	struct alignas(4) GUID
	{
		static ::ABC::Config::GUID* StaticGet_Default()
		{
			return (::ABC::Config::GUID*)Il2CppClass::FromTypeDefinitionIndex(GUID_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::UInt32 m_Value0; // 0x10
		::System::UInt32 m_Value1; // 0x14
		::System::UInt32 m_Value2; // 0x18
		::System::UInt32 m_Value3; // 0x1C

		/*
		static ::System::Boolean op_Equality(::ABC::Config::GUID BB8C609F76620E45, ::ABC::Config::GUID A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::ABC::Config::GUID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_OP_EQUALITY_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_TOSTRING_OFFSET))(this);
		}

		/*
		::System::Int32 CompareTo(::ABC::Config::GUID F2B1B9B0CD5BC286)
		{
			return ((::System::Int32(*)(::PVOID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_COMPARETO_OFFSET))(this, F2B1B9B0CD5BC286);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::ABC::Config::GUID BB8C609F76620E45, ::ABC::Config::GUID A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::ABC::Config::GUID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_OP_INEQUALITY_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/

		::System::Guid ToSystemGuid()
		{
			return ((::System::Guid(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_TOSYSTEMGUID_OFFSET))(this);
		}

		::System::Boolean Empty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_EMPTY_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_EQUALS_OFFSET))(this, A86A90C31A146E9C);
		}

		/*
		::System::Boolean Equals_1(::ABC::Config::GUID A86A90C31A146E9C)
		{
			return ((::System::Boolean(*)(::PVOID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_EQUALS_1_OFFSET))(this, A86A90C31A146E9C);
		}
		*/

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_GreaterThan(::ABC::Config::GUID BB8C609F76620E45, ::ABC::Config::GUID A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::ABC::Config::GUID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_OP_GREATERTHAN_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/

		/*
		static ::System::Boolean op_LessThan(::ABC::Config::GUID BB8C609F76620E45, ::ABC::Config::GUID A0A0D02932F12CFD)
		{
			return ((::System::Boolean(*)(::ABC::Config::GUID, ::ABC::Config::GUID))((::PBYTE)hIl2Cpp + ABC_CONFIG_GUID_OP_LESSTHAN_OFFSET))(BB8C609F76620E45, A0A0D02932F12CFD);
		}
		*/
	};
}
