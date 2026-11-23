#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F468581F0F31ABDD_F5628F8349D4A8A6_AAB73C9667EA478B_OFFSET UNITYSDK_OFFSET(0x19F13A0)
#define F468581F0F31ABDD_F5628F8349D4A8A6_E85377314607499E_OFFSET UNITYSDK_OFFSET(0x19F1360)
#define F468581F0F31ABDD_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x19F1520)
#define F468581F0F31ABDD_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F468581F0F31ABDD_F5628F8349D4A8A6_TypeDefinitionIndex = 1733;

class F468581F0F31ABDD_F5628F8349D4A8A6 : public ::System::Object
{
public:
	static ::F468581F0F31ABDD_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
	{
		return (::F468581F0F31ABDD_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F468581F0F31ABDD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>, ::System::UInt32>** StaticGet_B8CA52E4DE85C79A()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(F468581F0F31ABDD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>, ::System::UInt32>** StaticGet_EB0986F4A705A2F5()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(F468581F0F31ABDD_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F5628F8349D4A8A6__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F5628F8349D4A8A6__CTOR_OFFSET))(this);
	}

	::System::UInt32 AAB73C9667EA478B(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*> AC077DE329913A66)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F5628F8349D4A8A6_AAB73C9667EA478B_OFFSET))(this, AC077DE329913A66);
	}

	::System::UInt32 E85377314607499E(::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*> AC077DE329913A66)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::UInt32>*>))((::PBYTE)hIl2Cpp + F468581F0F31ABDD_F5628F8349D4A8A6_E85377314607499E_OFFSET))(this, AC077DE329913A66);
	}
};
