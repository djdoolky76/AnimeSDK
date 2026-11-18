#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define DFPKJPPEOKJ___C_KFCANONBBCC_OFFSET UNITYSDK_OFFSET(0x1240C050)
#define DFPKJPPEOKJ___C_NHLKIJBGJEM_OFFSET UNITYSDK_OFFSET(0x1240C040)
#define DFPKJPPEOKJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1240BFF0)
#define DFPKJPPEOKJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1240C030)

inline static constexpr unsigned int DFPKJPPEOKJ___c_TypeDefinitionIndex = 76786;

class DFPKJPPEOKJ___c : public ::System::Object
{
public:
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::Boolean>** StaticGet___9__5_0()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ___c_TypeDefinitionIndex)->GetStaticField(0x43180);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ___c_TypeDefinitionIndex)->GetStaticField(0x43188);
	}
	static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>** StaticGet___9__5_1()
	{
		return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(DFPKJPPEOKJ___c_TypeDefinitionIndex)->GetStaticField(0x43190);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFPKJPPEOKJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean NHLKIJBGJEM(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> PFDPMCCHJEC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ___C_NHLKIJBGJEM_OFFSET))(this, PFDPMCCHJEC);
	}

	::System::String* KFCANONBBCC(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32> PFDPMCCHJEC)
	{
		return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Int32>))((::PBYTE)hIl2Cpp + DFPKJPPEOKJ___C_KFCANONBBCC_OFFSET))(this, PFDPMCCHJEC);
	}
};
