#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Slot; }
namespace System { class String; }

#define SPINE_ATTACHMENT_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1FFA63A0)
#define SPINE_ATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FFA63B0)
#define SPINE_ATTACHMENT_GET_TIMELINESLOTS_OFFSET UNITYSDK_OFFSET(0x1FFA63D0)
#define SPINE_ATTACHMENT_ISTIMELINEACTIVE_OFFSET UNITYSDK_OFFSET(0x1FFA6530)
#define SPINE_ATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1FFA63C0)
#define SPINE_ATTACHMENT_SET_TIMELINESLOTS_OFFSET UNITYSDK_OFFSET(0x1FFA63E0)
#define SPINE_ATTACHMENT_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FFA66D0)
#define SPINE_ATTACHMENT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FFA66E0)
#define SPINE_ATTACHMENT__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFA64A0)
#define SPINE_ATTACHMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1FFA63F0)

namespace Spine
{
	inline static constexpr unsigned int Attachment_TypeDefinitionIndex = 32966;

	class Attachment : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Int32>** StaticGet_Empty()
		{
			return (::Il2CppArray<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(Attachment_TypeDefinitionIndex)->GetStaticField(0x29BC0);
		}
		::Spine::Attachment* timelineAttachment; // 0x10
		::Il2CppArray<::System::Int32>* timelineSlots; // 0x18
		::System::String* _Name_k__BackingField; // 0x20

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT__CTOR_OFFSET))(this, name);
		}

		::System::Void _ctor_1(::Spine::Attachment* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT__CCTOR_OFFSET))();
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_GET_NAME_OFFSET))(this);
		}

		::Spine::Attachment* get_TimelineAttachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_GET_TIMELINEATTACHMENT_OFFSET))(this);
		}

		::System::Void set_TimelineAttachment(::Spine::Attachment* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_SET_TIMELINEATTACHMENT_OFFSET))(this, value);
		}

		::Il2CppArray<::System::Int32>* get_TimelineSlots()
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_GET_TIMELINESLOTS_OFFSET))(this);
		}

		::System::Void set_TimelineSlots(::Il2CppArray<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_SET_TIMELINESLOTS_OFFSET))(this, value);
		}

		::System::Boolean IsTimelineActive(::Il2CppArray<::Spine::Slot*>* slots, ::System::Int32 slotIndex, ::System::Boolean appliedPose)
		{
			return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::Spine::Slot*>*, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_ISTIMELINEACTIVE_OFFSET))(this, slots, slotIndex, appliedPose);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATTACHMENT_TOSTRING_OFFSET))(this);
		}
	};
}
