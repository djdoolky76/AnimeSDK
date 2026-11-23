#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define E8C932FC42A3F77E_F5628F8349D4A8A6_ABB45EBE5B3C1966_OFFSET UNITYSDK_OFFSET(0x3974B30)
#define E8C932FC42A3F77E_F5628F8349D4A8A6_F46CC36070F249B3_OFFSET UNITYSDK_OFFSET(0x3974AF0)
#define E8C932FC42A3F77E_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x39766C0)
#define E8C932FC42A3F77E_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8C932FC42A3F77E_F5628F8349D4A8A6_TypeDefinitionIndex = 12477;

class E8C932FC42A3F77E_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::E8C932FC42A3F77E_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::E8C932FC42A3F77E_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E8C932FC42A3F77E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet_F876A76E13BAC626()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(E8C932FC42A3F77E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>** StaticGet_EF126BF9090ABCD2()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(E8C932FC42A3F77E_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::String* F46CC36070F249B3(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F5628F8349D4A8A6_F46CC36070F249B3_OFFSET))(this, A6D95DB9C6774967);
	}

	::System::String* ABB45EBE5B3C1966(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*> A6D95DB9C6774967)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::String*>))((::PBYTE)hIl2Cpp + E8C932FC42A3F77E_F5628F8349D4A8A6_ABB45EBE5B3C1966_OFFSET))(this, A6D95DB9C6774967);
	}
};
