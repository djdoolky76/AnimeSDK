#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Converter_2; }
namespace System { template <typename T> class Predicate_1; }

#define MDEMFJNPJBJ___C_HPOBMOMKEDE_OFFSET UNITYSDK_OFFSET(0x14D65400)
#define MDEMFJNPJBJ___C_NIBFEDJKNLN_OFFSET UNITYSDK_OFFSET(0x14D65410)
#define MDEMFJNPJBJ___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14D653B0)
#define MDEMFJNPJBJ___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14D653F0)

inline static constexpr unsigned int MDEMFJNPJBJ___c_TypeDefinitionIndex = 71835;

class MDEMFJNPJBJ___c : public ::System::Object
{
public:
	static ::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>** StaticGet___9__115_0()
	{
		return (::System::Predicate_1<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>>**)Il2CppClass::FromTypeDefinitionIndex(MDEMFJNPJBJ___c_TypeDefinitionIndex)->GetStaticField(0x4E790);
	}
	static ::System::Converter_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>, ::System::Int32>** StaticGet___9__115_1()
	{
		return (::System::Converter_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MDEMFJNPJBJ___c_TypeDefinitionIndex)->GetStaticField(0x4E798);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MDEMFJNPJBJ___c_TypeDefinitionIndex)->GetStaticField(0x4E7A0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDEMFJNPJBJ___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ___C__CTOR_OFFSET))(this);
	}

	::System::Boolean HPOBMOMKEDE(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ___C_HPOBMOMKEDE_OFFSET))(this, HAAEBCOBKFF);
	}

	::System::Int32 NIBFEDJKNLN(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean> HAAEBCOBKFF)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Boolean>))((::PBYTE)hIl2Cpp + MDEMFJNPJBJ___C_NIBFEDJKNLN_OFFSET))(this, HAAEBCOBKFF);
	}
};
