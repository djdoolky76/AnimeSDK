#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define A6B459B22A306B56_A815ED1A992F0FD1_OFFSET UNITYSDK_OFFSET(0x428D6C0)
#define A6B459B22A306B56_B4D0895B50D41B42_OFFSET UNITYSDK_OFFSET(0x428D620)
#define A6B459B22A306B56_BDD3E08703C1C2A0_OFFSET UNITYSDK_OFFSET(0x428D530)
#define A6B459B22A306B56_EDB7FE788864A089_OFFSET UNITYSDK_OFFSET(0x428D670)
#define A6B459B22A306B56_FE31B3AE5620E02B_OFFSET UNITYSDK_OFFSET(0x428D730)
#define A6B459B22A306B56__CCTOR_OFFSET UNITYSDK_OFFSET(0x428D530)

inline static constexpr unsigned int A6B459B22A306B56_TypeDefinitionIndex = 13907;

class A6B459B22A306B56 : public ::System::Object
{
public:
	static ::System::Boolean* StaticGet_E867C3C14017A7E9()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(A6B459B22A306B56_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::String** StaticGet_BC3B505C8F62CE87()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(A6B459B22A306B56_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A6B459B22A306B56__CCTOR_OFFSET))();
	}

	static ::System::Void BDD3E08703C1C2A0()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + A6B459B22A306B56_BDD3E08703C1C2A0_OFFSET))();
	}

	static ::System::Void FE31B3AE5620E02B(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + A6B459B22A306B56_FE31B3AE5620E02B_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Boolean EDB7FE788864A089()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + A6B459B22A306B56_EDB7FE788864A089_OFFSET))();
	}

	static ::System::Void A815ED1A992F0FD1(::System::String* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + A6B459B22A306B56_A815ED1A992F0FD1_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::String* B4D0895B50D41B42()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + A6B459B22A306B56_B4D0895B50D41B42_OFFSET))();
	}
};
