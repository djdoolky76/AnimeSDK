#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/miHoYoEmotion/BlendShapeData.h"

namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIHOYOEMOTION_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1D5A4AB0)
#define MIHOYOEMOTION_ODINNEWINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4C90)
#define MIHOYOEMOTION_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A4C80)

inline static constexpr unsigned int miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex = 38057;

class miHoYoEmotion_OdinNewInitializer : public ::System::Object
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>** StaticGet_CachedSerializer3()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::miHoYoEmotion::BlendShapeData>*>*>**)Il2CppClass::FromTypeDefinitionIndex(miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x2DB80);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x2DB88);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x2DB90);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(miHoYoEmotion_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x2DB98);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ODINNEWINITIALIZER__CCTOR_OFFSET))();
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYOEMOTION_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
