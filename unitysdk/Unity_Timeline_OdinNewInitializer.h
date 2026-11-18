#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Comic { class AudioContent; }
namespace MoleMole::Comic { class ScreenSplitAnimAudioDataWrapper; }
namespace Sirenix::Serialization { template <typename T> class Serializer_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class BGMPageInfo; }
namespace UnityEngine::Timeline::Comic::DataSplitter { class PageData; }

#define UNITY_TIMELINE_ODINNEWINITIALIZER_INITODINNEW_OFFSET UNITYSDK_OFFSET(0x1FD90220)
#define UNITY_TIMELINE_ODINNEWINITIALIZER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD906B0)
#define UNITY_TIMELINE_ODINNEWINITIALIZER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FD906A0)

inline static constexpr unsigned int Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex = 32194;

class Unity_Timeline_OdinNewInitializer : public ::System::Object
{
public:
	static ::Sirenix::Serialization::Serializer_1<::System::Single>** StaticGet_CachedSerializer1()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29070);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::String*>** StaticGet_CachedSerializer0()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29078);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>** StaticGet_CachedSerializer3()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29080);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_CachedSerializer5()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29088);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Int32>** StaticGet_CachedSerializer2()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29090);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Single>*>** StaticGet_CachedSerializer9()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x29098);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Boolean>** StaticGet_CachedSerializer8()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290A0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>*>** StaticGet_CachedSerializer4()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::MoleMole::Comic::AudioContent*>*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290A8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>** StaticGet_CachedSerializer12()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290B0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>*>** StaticGet_CachedSerializer10()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::List_1<::MoleMole::Comic::ScreenSplitAnimAudioDataWrapper*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290B8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*>*>** StaticGet_CachedSerializer11()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::PageData*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290C0);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*>*>** StaticGet_CachedSerializer6()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Timeline::Comic::DataSplitter::BGMPageInfo*>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290C8);
	}
	static ::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>** StaticGet_CachedSerializer7()
	{
		return (::Sirenix::Serialization::Serializer_1<::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>*>**)Il2CppClass::FromTypeDefinitionIndex(Unity_Timeline_OdinNewInitializer_TypeDefinitionIndex)->GetStaticField(0x290D0);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITY_TIMELINE_ODINNEWINITIALIZER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_TIMELINE_ODINNEWINITIALIZER__CCTOR_OFFSET))();
	}

	static ::System::Void InitOdinNew()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITY_TIMELINE_ODINNEWINITIALIZER_INITODINNEW_OFFSET))();
	}
};
