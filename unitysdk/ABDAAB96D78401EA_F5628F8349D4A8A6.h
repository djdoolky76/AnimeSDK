#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

class AFBF9A6C45E97BDF;
namespace System { template <typename T> class ADDF5F55A85EB950; }

#define ABDAAB96D78401EA_F5628F8349D4A8A6_E1E90DC8C9D3F8F5_OFFSET UNITYSDK_OFFSET(0x271ACE0)
#define ABDAAB96D78401EA_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x271AD50)
#define ABDAAB96D78401EA_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABDAAB96D78401EA_F5628F8349D4A8A6_TypeDefinitionIndex = 2841;

class ABDAAB96D78401EA_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::ABDAAB96D78401EA_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::ABDAAB96D78401EA_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(ABDAAB96D78401EA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::ADDF5F55A85EB950<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*>>** StaticGet_E354E9AE74DDD48C()
	{
		return (::System::ADDF5F55A85EB950<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*>>**)Il2CppClass::FromTypeDefinitionIndex(ABDAAB96D78401EA_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ABDAAB96D78401EA_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDAAB96D78401EA_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::Int32 E1E90DC8C9D3F8F5(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*> B35BBBE7E39341A2, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*> AE40CAA6BBFEAD2C)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*>, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::AFBF9A6C45E97BDF*>))((::PBYTE)hIl2Cpp + ABDAAB96D78401EA_F5628F8349D4A8A6_E1E90DC8C9D3F8F5_OFFSET))(this, B35BBBE7E39341A2, AE40CAA6BBFEAD2C);
	}
};
