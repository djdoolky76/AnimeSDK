#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Delegate; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Reflection { class MethodInfo; }

#define A8997E9139904D31_E544FE88F138EF07_OFFSET UNITYSDK_OFFSET(0x38BF410)
#define A8997E9139904D31_F366BE9A7C291C69_OFFSET UNITYSDK_OFFSET(0x38BF680)
#define A8997E9139904D31__CCTOR_OFFSET UNITYSDK_OFFSET(0x38BF9A0)

inline static constexpr unsigned int A8997E9139904D31_TypeDefinitionIndex = 20325;

class A8997E9139904D31 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>** StaticGet_E0FB9491181EF55F()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Reflection::MethodInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(A8997E9139904D31_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Delegate* F366BE9A7C291C69(::System::Object* A86A90C31A146E9C, ::System::Type* B948AC20D66440AF, ::System::String* AFF167690FB623A9, ::System::String* B84A4D8260C22648)
	{
		return ((::System::Delegate*(*)(::System::Object*, ::System::Type*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + A8997E9139904D31_F366BE9A7C291C69_OFFSET))(A86A90C31A146E9C, B948AC20D66440AF, AFF167690FB623A9, B84A4D8260C22648);
	}

	static ::System::Boolean E544FE88F138EF07(::System::Reflection::MethodInfo* E1EE44925F50B648, ::System::Reflection::MethodInfo* EA8FABEC6D125B33)
	{
		return ((::System::Boolean(*)(::System::Reflection::MethodInfo*, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + A8997E9139904D31_E544FE88F138EF07_OFFSET))(E1EE44925F50B648, EA8FABEC6D125B33);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A8997E9139904D31__CCTOR_OFFSET))();
	}
};
