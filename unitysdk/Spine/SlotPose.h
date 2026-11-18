#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Spine { class Attachment; }
namespace Spine { template <typename T> class ExposedList_1; }

#define SPINE_SLOTPOSE_CLAMPCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16AE0)
#define SPINE_SLOTPOSE_CLAMPDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16B70)
#define SPINE_SLOTPOSE_GETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16AC0)
#define SPINE_SLOTPOSE_GETDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16B30)
#define SPINE_SLOTPOSE_GET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1EC16C60)
#define SPINE_SLOTPOSE_GET_DEFORM_OFFSET UNITYSDK_OFFSET(0x1EC16D80)
#define SPINE_SLOTPOSE_GET_HASDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16B60)
#define SPINE_SLOTPOSE_GET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1EC16D60)
#define SPINE_SLOTPOSE_SETCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16AD0)
#define SPINE_SLOTPOSE_SETDARKCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC16B50)
#define SPINE_SLOTPOSE_SET_ATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1EC16C70)
#define SPINE_SLOTPOSE_SET_OFFSET UNITYSDK_OFFSET(0x1EC16A00)
#define SPINE_SLOTPOSE_SET_SEQUENCEINDEX_OFFSET UNITYSDK_OFFSET(0x1EC16D70)
#define SPINE_SLOTPOSE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC16960)

namespace Spine
{
	inline static constexpr unsigned int SlotPose_TypeDefinitionIndex = 33071;

	class SlotPose : public ::System::Object
	{
	public:
		::Spine::ExposedList_1<::System::Single>* deform; // 0x10
		::Spine::Attachment* attachment; // 0x18
		::System::Nullable_1<::UnityEngine::Color> darkColor; // 0x20
		::System::Byte _padding0[0xC];
		::System::Int32 sequenceIndex; // 0x34
		::UnityEngine::Color color; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE__CTOR_OFFSET))(this);
		}

		::System::Void Set(::Spine::SlotPose* pose)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::SlotPose*))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_SET_OFFSET))(this, pose);
		}

		::UnityEngine::Color GetColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GETCOLOR_OFFSET))(this);
		}

		::System::Void SetColor(::UnityEngine::Color color)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_SETCOLOR_OFFSET))(this, color);
		}

		::System::Void ClampColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_CLAMPCOLOR_OFFSET))(this);
		}

		::System::Nullable_1<::UnityEngine::Color> GetDarkColor()
		{
			return ((::System::Nullable_1<::UnityEngine::Color>(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GETDARKCOLOR_OFFSET))(this);
		}

		::System::Void SetDarkColor(::System::Nullable_1<::UnityEngine::Color> darkColor)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Color>))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_SETDARKCOLOR_OFFSET))(this, darkColor);
		}

		::System::Boolean get_HasDarkColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GET_HASDARKCOLOR_OFFSET))(this);
		}

		::System::Void ClampDarkColor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_CLAMPDARKCOLOR_OFFSET))(this);
		}

		::Spine::Attachment* get_Attachment()
		{
			return ((::Spine::Attachment*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GET_ATTACHMENT_OFFSET))(this);
		}

		::System::Void set_Attachment(::Spine::Attachment* value)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Attachment*))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_SET_ATTACHMENT_OFFSET))(this, value);
		}

		::System::Int32 get_SequenceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GET_SEQUENCEINDEX_OFFSET))(this);
		}

		::System::Void set_SequenceIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_SET_SEQUENCEINDEX_OFFSET))(this, value);
		}

		::Spine::ExposedList_1<::System::Single>* get_Deform()
		{
			return ((::Spine::ExposedList_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SLOTPOSE_GET_DEFORM_OFFSET))(this);
		}
	};
}
