#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class Attachment; }
namespace Spine { class BoneData; }
namespace Spine { class IConstraintData; }
namespace Spine { class Skeleton; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define SPINE_SKIN_ADDSKIN_OFFSET UNITYSDK_OFFSET(0x1F779640)
#define SPINE_SKIN_ATTACHALL_OFFSET UNITYSDK_OFFSET(0x1F77A2E0)
#define SPINE_SKIN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1F77A1F0)
#define SPINE_SKIN_COPYSKIN_OFFSET UNITYSDK_OFFSET(0x1F779A80)
#define SPINE_SKIN_GETATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1F77A030)
#define SPINE_SKIN_GETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1F779F40)
#define SPINE_SKIN_GET_ATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1F779090)
#define SPINE_SKIN_GET_BONES_OFFSET UNITYSDK_OFFSET(0x1F779380)
#define SPINE_SKIN_GET_CONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1F779390)
#define SPINE_SKIN_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1F779370)
#define SPINE_SKIN_REMOVEATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1F779FD0)
#define SPINE_SKIN_SETATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1F779540)
#define SPINE_SKIN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F77A2D0)
#define SPINE_SKIN__CTOR_OFFSET UNITYSDK_OFFSET(0x1F7793A0)

namespace Spine
{
	inline static constexpr unsigned int Skin_TypeDefinitionIndex = 33062;

	class Skin : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::Spine::BoneData*>* bones; // 0x10
		::Spine::ExposedList_1<::Spine::IConstraintData*>* constraints; // 0x18
		::System::String* name; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* attachments; // 0x28

		::System::Void _ctor(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKIN__CTOR_OFFSET))(this, name);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_NAME_OFFSET))(this);
		}

		::System::Collections::Generic::ICollection_1<::System::Object*>* get_Attachments()
		{
			return ((::System::Collections::Generic::ICollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_ATTACHMENTS_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::BoneData*>* get_Bones()
		{
			return ((::Spine::ExposedList_1<::Spine::BoneData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_BONES_OFFSET))(this);
		}

		::Spine::ExposedList_1<::Spine::IConstraintData*>* get_Constraints()
		{
			return ((::Spine::ExposedList_1<::Spine::IConstraintData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_GET_CONSTRAINTS_OFFSET))(this);
		}

		::System::Void SetAttachment(::System::Int32 slotIndex, ::System::String* placeholder, ::Spine::Attachment* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SKIN_SETATTACHMENT_OFFSET))(this, slotIndex, placeholder, attachment);
		}

		::System::Void AddSkin(::Spine::Skin* skin)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKIN_ADDSKIN_OFFSET))(this, skin);
		}

		::System::Void CopySkin(::Spine::Skin* skin)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKIN_COPYSKIN_OFFSET))(this, skin);
		}

		::Spine::Attachment* GetAttachment(::System::Int32 slotIndex, ::System::String* placeholder)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKIN_GETATTACHMENT_OFFSET))(this, slotIndex, placeholder);
		}

		::System::Void RemoveAttachment(::System::Int32 slotIndex, ::System::String* placeholder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKIN_REMOVEATTACHMENT_OFFSET))(this, slotIndex, placeholder);
		}

		::System::Void GetAttachments(::System::Int32 slotIndex, ::System::Collections::Generic::List_1<::System::Object*>* attachments)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + SPINE_SKIN_GETATTACHMENTS_OFFSET))(this, slotIndex, attachments);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_CLEAR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SKIN_TOSTRING_OFFSET))(this);
		}

		::System::Void AttachAll(::Spine::Skeleton* skeleton, ::Spine::Skin* oldSkin)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Skeleton*, ::Spine::Skin*))((::PBYTE)hIl2Cpp + SPINE_SKIN_ATTACHALL_OFFSET))(this, skeleton, oldSkin);
		}
	};
}
