#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A34256F332B7C8D8_F286F899C1D1CBDD_OFFSET UNITYSDK_OFFSET(0x3BA3F20)
#define A34256F332B7C8D8_F9AD4A553B76E273_OFFSET UNITYSDK_OFFSET(0x3BA4060)
#define A34256F332B7C8D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x3BA44B0)

inline static constexpr unsigned int A34256F332B7C8D8_TypeDefinitionIndex = 11157;

class A34256F332B7C8D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_E726E4872AD9D2ED()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(A34256F332B7C8D8_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Boolean* StaticGet_EE883B4CFAE3A1C8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(A34256F332B7C8D8_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Boolean F9AD4A553B76E273(::System::String* A62D195D50DE9CF1, ::System::Boolean& EC7A0323D9E2ACA1)
	{
		return ((::System::Boolean(*)(::System::String*, ::System::Boolean&))((::PBYTE)hIl2Cpp + A34256F332B7C8D8_F9AD4A553B76E273_OFFSET))(A62D195D50DE9CF1, EC7A0323D9E2ACA1);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A34256F332B7C8D8__CCTOR_OFFSET))();
	}

	static ::System::Void F286F899C1D1CBDD()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A34256F332B7C8D8_F286F899C1D1CBDD_OFFSET))();
	}
};
