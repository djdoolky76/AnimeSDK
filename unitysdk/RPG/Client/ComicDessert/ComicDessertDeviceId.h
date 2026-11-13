#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }

#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_CTOR_OFFSET UNITYSDK_OFFSET(0xADCE20)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x3EF8D90)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_EQUALS_OFFSET UNITYSDK_OFFSET(0x3EF8D40)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x3EF8DA0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_INVALID_OFFSET UNITYSDK_OFFSET(0x1D02A430)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x3EF8CF0)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x7CED80)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1D02A610)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1D02A690)
#define RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3EF8DF0)

namespace RPG::Client::ComicDessert
{
	inline static constexpr unsigned int ComicDessertDeviceId_TypeDefinitionIndex = 77089;

	struct alignas(4) ComicDessertDeviceId
	{
		::System::UInt32 _Value_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 get_Value()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_VALUE_OFFSET))(this);
		}

		/*
		static ::RPG::Client::ComicDessert::ComicDessertDeviceId get_Invalid()
		{
			return ((::RPG::Client::ComicDessert::ComicDessertDeviceId(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_INVALID_OFFSET))();
		}
		*/

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GET_ISVALID_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::RPG::Client::ComicDessert::ComicDessertDeviceId a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_GETHASHCODE_OFFSET))(this);
		}

		/*
		static ::System::Boolean op_Equality(::RPG::Client::ComicDessert::ComicDessertDeviceId a1, ::RPG::Client::ComicDessert::ComicDessertDeviceId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ComicDessert::ComicDessertDeviceId, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_OP_EQUALITY_OFFSET))(a1, a2);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::RPG::Client::ComicDessert::ComicDessertDeviceId a1, ::RPG::Client::ComicDessert::ComicDessertDeviceId a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::ComicDessert::ComicDessertDeviceId, ::RPG::Client::ComicDessert::ComicDessertDeviceId))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_OP_INEQUALITY_OFFSET))(a1, a2);
		}
		*/

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_COMICDESSERT_COMICDESSERTDEVICEID_TOSTRING_OFFSET))(this);
		}

	};
}
