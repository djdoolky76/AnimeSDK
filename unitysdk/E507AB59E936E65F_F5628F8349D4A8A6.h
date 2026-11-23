#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }

#define E507AB59E936E65F_F5628F8349D4A8A6_BDD14D9B5DDB9C71_OFFSET UNITYSDK_OFFSET(0x1E4FFC0)
#define E507AB59E936E65F_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E51CD0)
#define E507AB59E936E65F_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E507AB59E936E65F_F5628F8349D4A8A6_TypeDefinitionIndex = 9519;

class E507AB59E936E65F_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E507AB59E936E65F_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E507AB59E936E65F_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E507AB59E936E65F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>** StaticGet_B8CA52E4DE85C79A()
	{
		return (::System::ADDF5F55A85EB950<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>>**)Il2CppClass::FromTypeDefinitionIndex(E507AB59E936E65F_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E507AB59E936E65F_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E507AB59E936E65F_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 BDD14D9B5DDB9C71(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> B35BBBE7E39341A2, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + E507AB59E936E65F_F5628F8349D4A8A6_BDD14D9B5DDB9C71_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
