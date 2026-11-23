#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class ADDF5F55A85EB950; }
namespace System { template <typename T> class E891BA3236FD13E7; }
namespace UnityEngine { class Material; }

#define B33F15DE72770DF2_F5628F8349D4A8A6_A3E5473A86652349_OFFSET UNITYSDK_OFFSET(0x277C8A0)
#define B33F15DE72770DF2_F5628F8349D4A8A6_AA394BBE62F1D720_OFFSET UNITYSDK_OFFSET(0x3866BD0)
#define B33F15DE72770DF2_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3866C20)
#define B33F15DE72770DF2_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B33F15DE72770DF2_F5628F8349D4A8A6_TypeDefinitionIndex = 17965;

class B33F15DE72770DF2_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::B33F15DE72770DF2_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::B33F15DE72770DF2_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(B33F15DE72770DF2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::E891BA3236FD13E7<::UnityEngine::Material*>** StaticGet_E87AF5AB1ED5E90A()
	{
		return (::System::E891BA3236FD13E7<::UnityEngine::Material*>**)Il2CppClass::FromTypeDefinitionIndex(B33F15DE72770DF2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::ADDF5F55A85EB950<::System::Single>** StaticGet_B694D8470CE2296F()
	{
		return (::System::ADDF5F55A85EB950<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(B33F15DE72770DF2_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B33F15DE72770DF2_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B33F15DE72770DF2_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Boolean AA394BBE62F1D720(::UnityEngine::Material* E3AD885F703BB54B)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + B33F15DE72770DF2_F5628F8349D4A8A6_AA394BBE62F1D720_OFFSET))(this, E3AD885F703BB54B);
	}

	::System::Int32 A3E5473A86652349(::System::Single B35BBBE7E39341A2, ::System::Single AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + B33F15DE72770DF2_F5628F8349D4A8A6_A3E5473A86652349_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
