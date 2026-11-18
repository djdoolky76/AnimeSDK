#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::ObjectModel { template <typename T> class ReadOnlyCollection_1; }

#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x163F9580)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x163F94E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONSERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x163F95D0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_RUNTIMETOSERIALIZED_OFFSET UNITYSDK_OFFSET(0x163F9540)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_SERIALIZEDTORUNTIME_OFFSET UNITYSDK_OFFSET(0x163F91E0)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CCTOR_OFFSET UNITYSDK_OFFSET(0x163F9610)
#define MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x163F8BA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorEventEntry_TypeDefinitionIndex = 85778;

	class AnimatorEventEntry : public ::System::Object
	{
	public:
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimatorZoneTagsV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x44A40);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimateStateTagsV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x44A48);
		}
		static ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>** StaticGet_AnimatorZoneTagsBlackListV2_Default()
		{
			return (::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AnimatorEventEntry_TypeDefinitionIndex)->GetStaticField(0x44A50);
		}
		::Il2CppArray<::System::String*>* AnimateStateTagsV2; // 0x10
		::Il2CppArray<::System::String*>* AnimatorZoneTagsBlackListV2; // 0x18
		::Il2CppArray<::System::String*>* AnimatorZoneTagsV2; // 0x20
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimatorZoneTagsBlackListInRuntime; // 0x28
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimatorZoneTagsInRuntime; // 0x30
		::System::Collections::Generic::IReadOnlyList_1<::System::String*>* AnimateStateTagsInRuntime; // 0x38
		::System::Single normalizedTime; // 0x40
		::System::Int32 frame; // 0x44
		::System::Int32 frameLength; // 0x48
		::System::Boolean forceTriggerOnTransitionOut; // 0x4C
		::System::Boolean maxFrame; // 0x4D
		::System::Boolean forceTriggerOnTransitionIn; // 0x4E
		::System::Boolean forceTrigger; // 0x4F
		::System::Int32 eventNameHash; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY__CCTOR_OFFSET))();
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void RuntimeToSerialized()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_RUNTIMETOSERIALIZED_OFFSET))(this);
		}

		::System::Void SerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_SERIALIZEDTORUNTIME_OFFSET))(this);
		}

		::System::Void OnSerializedToRuntime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ANIMATOREVENTENTRY_ONSERIALIZEDTORUNTIME_OFFSET))(this);
		}
	};
}
