#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define A418C49FA6A8C1F7_A31EAA6C5A88E92D_A7AED7C5F17F1F26_OFFSET UNITYSDK_OFFSET(0x21A2B90)
#define A418C49FA6A8C1F7_A31EAA6C5A88E92D_AFC21C4BF270AE1A_OFFSET UNITYSDK_OFFSET(0x426E8F0)
#define A418C49FA6A8C1F7_A31EAA6C5A88E92D_B6571131C906D2A4_OFFSET UNITYSDK_OFFSET(0x1E8F280)
#define A418C49FA6A8C1F7_A31EAA6C5A88E92D_B8A3A3530D99EE34_OFFSET UNITYSDK_OFFSET(0x1EAE1A0)
#define A418C49FA6A8C1F7_A31EAA6C5A88E92D__CTOR_OFFSET UNITYSDK_OFFSET(0x3212B20)

namespace A418C49FA6A8C1F7
{
	inline static constexpr unsigned int A31EAA6C5A88E92D_TypeDefinitionIndex = 13752;

	struct alignas(8) A31EAA6C5A88E92D
	{
		::System::Int32 B7112C3E665F941E; // 0x10
		::System::Int32 AD27A82D13889000; // 0x14
		::System::Collections::Generic::IEnumerable_1<::System::Int32>* F88744BEBFBFDF47; // 0x18

		::System::Void _ctor(::System::Int32 F5AEFA05C9F71B82, ::System::Int32 BA570F252C8CF45D, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* EBC9AC82FDB8CB37)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A31EAA6C5A88E92D__CTOR_OFFSET))(this, F5AEFA05C9F71B82, BA570F252C8CF45D, EBC9AC82FDB8CB37);
		}

		::System::Boolean AFC21C4BF270AE1A()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A31EAA6C5A88E92D_AFC21C4BF270AE1A_OFFSET))(this);
		}

		::System::Int32 B8A3A3530D99EE34()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A31EAA6C5A88E92D_B8A3A3530D99EE34_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* A7AED7C5F17F1F26()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A31EAA6C5A88E92D_A7AED7C5F17F1F26_OFFSET))(this);
		}

		::System::Int32 B6571131C906D2A4()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + A418C49FA6A8C1F7_A31EAA6C5A88E92D_B6571131C906D2A4_OFFSET))(this);
		}
	};
}
