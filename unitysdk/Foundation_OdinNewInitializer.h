#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation { class MultiVersionErrorRef; }
namespace Foundation { class MultiVersionInfo; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FOUNDATION_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1EA2C380)
#define FOUNDATION_ODINNEWINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C4B0)
#define FOUNDATION_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA2C4A0)

inline static constexpr unsigned int Foundation_OdinNewInitializer_TypeDefinitionIndex = 8176;

class Foundation_OdinNewInitializer : public ::System::Object
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Foundation_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x7330);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::Foundation::MultiVersionErrorRef*>*>**)Il2CppClass::FromTypeDefinitionIndex(Foundation_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x7338);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ODINNEWINITIALIZER__CCTOR_OFFSET))();
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FOUNDATION_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
