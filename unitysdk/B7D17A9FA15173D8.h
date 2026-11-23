#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B7D17A9FA15173D8_A6CC7047E6C5F57A_OFFSET UNITYSDK_OFFSET(0x2652F40)
#define B7D17A9FA15173D8_E6880BF2EEC6306F_OFFSET UNITYSDK_OFFSET(0x2653040)
#define B7D17A9FA15173D8__CCTOR_OFFSET UNITYSDK_OFFSET(0x2653120)

inline static constexpr unsigned int B7D17A9FA15173D8_TypeDefinitionIndex = 6153;

class B7D17A9FA15173D8 : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>** StaticGet_A50F0EB1895A753C()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(B7D17A9FA15173D8_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B7D17A9FA15173D8__CCTOR_OFFSET))();
	}

	static ::System::Void E6880BF2EEC6306F(::E2DE926113CB084F EDC73EBB7D015249, ::System::String* EC2038339CE86133)
	{
		return ((::System::Void(*)(::E2DE926113CB084F, ::System::String*))((::PBYTE)hIl2Cpp + B7D17A9FA15173D8_E6880BF2EEC6306F_OFFSET))(EDC73EBB7D015249, EC2038339CE86133);
	}

	static ::System::String* A6CC7047E6C5F57A(::E2DE926113CB084F EDC73EBB7D015249)
	{
		return ((::System::String*(*)(::E2DE926113CB084F))((::PBYTE)hIl2Cpp + B7D17A9FA15173D8_A6CC7047E6C5F57A_OFFSET))(EDC73EBB7D015249);
	}
};
