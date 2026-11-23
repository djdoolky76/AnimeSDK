#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/B668852BC3E74FF4.h"

namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B9871E8CC7BE3215_A01A1E05DD2EBEF3_OFFSET UNITYSDK_OFFSET(0x24A2970)
#define B9871E8CC7BE3215_A2AF6FF8E56D7B25_OFFSET UNITYSDK_OFFSET(0x24A2DF0)
#define B9871E8CC7BE3215_E2EA0FB010CE7F0F_OFFSET UNITYSDK_OFFSET(0x24A2C80)
#define B9871E8CC7BE3215_E57A739C0DFA9C14_1_OFFSET UNITYSDK_OFFSET(0x24A2A40)
#define B9871E8CC7BE3215_E57A739C0DFA9C14_OFFSET UNITYSDK_OFFSET(0x24A2B10)
#define B9871E8CC7BE3215__CCTOR_OFFSET UNITYSDK_OFFSET(0x24A2F10)
#define B9871E8CC7BE3215__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B9871E8CC7BE3215_TypeDefinitionIndex = 4644;

class B9871E8CC7BE3215 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::UInt64>** StaticGet_B667D669960A85E2()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::UInt64>**)Il2CppClass::FromTypeDefinitionIndex(B9871E8CC7BE3215_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt64, ::E2DE926113CB084F>** StaticGet_BBAD20DC622AE882()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt64, ::E2DE926113CB084F>**)Il2CppClass::FromTypeDefinitionIndex(B9871E8CC7BE3215_TypeDefinitionIndex)->GetStaticField(0x8);
	}

	static ::B668852BC3E74FF4 E57A739C0DFA9C14(::System::Type* A288CB28FC2A6DA3)
	{
		return ((::B668852BC3E74FF4(*)(::System::Type*))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215_E57A739C0DFA9C14_OFFSET))(A288CB28FC2A6DA3);
	}

	static ::E2DE926113CB084F A01A1E05DD2EBEF3(::System::UInt64 F5AEFA05C9F71B82)
	{
		return ((::E2DE926113CB084F(*)(::System::UInt64))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215_A01A1E05DD2EBEF3_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Type* E2EA0FB010CE7F0F(::System::UInt64 F5AEFA05C9F71B82)
	{
		return ((::System::Type*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215_E2EA0FB010CE7F0F_OFFSET))(F5AEFA05C9F71B82);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B9871E8CC7BE3215__CCTOR_OFFSET))();
	}

	static ::System::Void A2AF6FF8E56D7B25(::System::UInt64 ED6B739E3493B1E8, ::E2DE926113CB084F A288CB28FC2A6DA3)
	{
		return ((::System::Void(*)(::System::UInt64, ::E2DE926113CB084F))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215_A2AF6FF8E56D7B25_OFFSET))(ED6B739E3493B1E8, A288CB28FC2A6DA3);
	}

	static ::B668852BC3E74FF4 E57A739C0DFA9C14_1(::E2DE926113CB084F F564B9A293C703ED)
	{
		return ((::B668852BC3E74FF4(*)(::E2DE926113CB084F))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215_E57A739C0DFA9C14_1_OFFSET))(F564B9A293C703ED);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B9871E8CC7BE3215__CTOR_OFFSET))(this);
	}
};
