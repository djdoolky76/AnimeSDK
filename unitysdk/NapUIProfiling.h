#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NAPUIPROFILING__CCTOR_OFFSET UNITYSDK_OFFSET(0x20048930)

inline static constexpr unsigned int NapUIProfiling_TypeDefinitionIndex = 18336;

class NapUIProfiling : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>** StaticGet_StringToTypeMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x8790);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>** StaticGet_TypeToStringMap()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x8798);
	}
	static ::System::Boolean* StaticGet_EnableUIProfile()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(NapUIProfiling_TypeDefinitionIndex)->GetStaticField(0x4290);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAPUIPROFILING__CCTOR_OFFSET))();
	}
};
