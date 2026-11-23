#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B07850EA97DBB75A.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class F1C8A76FE26E681F;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define E9CA687A6DD171BF_F5628F8349D4A8A6_E18588389F3C6579_OFFSET UNITYSDK_OFFSET(0x2623BE0)
#define E9CA687A6DD171BF_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2623C30)
#define E9CA687A6DD171BF_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E9CA687A6DD171BF_F5628F8349D4A8A6_TypeDefinitionIndex = 5955;

class E9CA687A6DD171BF_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E9CA687A6DD171BF_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E9CA687A6DD171BF_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E9CA687A6DD171BF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>** StaticGet_B3A8AFF65974F2A8()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>**)Il2CppClass::FromTypeDefinitionIndex(E9CA687A6DD171BF_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E9CA687A6DD171BF_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E9CA687A6DD171BF_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*> E18588389F3C6579(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>> BB8C609F76620E45)
	{
		return ((::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::B07850EA97DBB75A<::F1C8A76FE26E681F*, ::System::String*>>))((::PBYTE)hIl2Cpp + E9CA687A6DD171BF_F5628F8349D4A8A6_E18588389F3C6579_OFFSET))(this, BB8C609F76620E45);
	}
};
