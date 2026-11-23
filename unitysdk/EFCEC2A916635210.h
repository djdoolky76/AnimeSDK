#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E2DE926113CB084F.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define EFCEC2A916635210__CCTOR_OFFSET UNITYSDK_OFFSET(0x23525D0)

inline static constexpr unsigned int EFCEC2A916635210_TypeDefinitionIndex = 3213;

class EFCEC2A916635210 : public ::System::Object
{
public:
	static ::System::String** StaticGet_ACFB3F8214AFA23F()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(EFCEC2A916635210_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>** StaticGet_F6A4C94B867A910E()
	{
		return (::System::Collections::Generic::Dictionary_2<::E2DE926113CB084F, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(EFCEC2A916635210_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::E2DE926113CB084F>** StaticGet_A11484A7987AF731()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::E2DE926113CB084F>**)Il2CppClass::FromTypeDefinitionIndex(EFCEC2A916635210_TypeDefinitionIndex)->GetStaticField(0x10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EFCEC2A916635210__CCTOR_OFFSET))();
	}
};
