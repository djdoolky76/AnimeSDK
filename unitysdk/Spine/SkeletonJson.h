#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/SkeletonLoader.h"
#include "unitysdk/UnityEngine/Color.h"

namespace Spine { class Atlas; }
namespace Spine { class Attachment; }
namespace Spine { class AttachmentLoader; }
namespace Spine { class BoneTimeline2; }
namespace Spine { class CurveTimeline1; }
namespace Spine { class CurveTimeline; }
namespace Spine { class Sequence; }
namespace Spine { class SkeletonData; }
namespace Spine { class Skin; }
namespace Spine { class Timeline; }
namespace Spine { class TransformConstraintData_FromProperty; }
namespace Spine { class VertexAttachment; }
namespace Spine { template <typename T> class ExposedList_1; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::IO { class TextReader; }

#define SPINE_SKELETONJSON_FROMPROPERTY_OFFSET UNITYSDK_OFFSET(0x1EBFF070)
#define SPINE_SKELETONJSON_GETBOOLEAN_OFFSET UNITYSDK_OFFSET(0x1EBFEA20)
#define SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET UNITYSDK_OFFSET(0x1EC14D20)
#define SPINE_SKELETONJSON_GETFLOAT_1_OFFSET UNITYSDK_OFFSET(0x1EC14530)
#define SPINE_SKELETONJSON_GETFLOAT_OFFSET UNITYSDK_OFFSET(0x1EBFE850)
#define SPINE_SKELETONJSON_GETINTARRAY_OFFSET UNITYSDK_OFFSET(0x1EC14F90)
#define SPINE_SKELETONJSON_GETINT_1_OFFSET UNITYSDK_OFFSET(0x1EC15120)
#define SPINE_SKELETONJSON_GETINT_OFFSET UNITYSDK_OFFSET(0x1EBFF300)
#define SPINE_SKELETONJSON_GETSTRING_OFFSET UNITYSDK_OFFSET(0x1EBFE970)
#define SPINE_SKELETONJSON_PROPERTYSCALE_OFFSET UNITYSDK_OFFSET(0x1EBFF250)
#define SPINE_SKELETONJSON_READANIMATION_OFFSET UNITYSDK_OFFSET(0x1EC005A0)
#define SPINE_SKELETONJSON_READATTACHMENT_OFFSET UNITYSDK_OFFSET(0x1EBFF410)
#define SPINE_SKELETONJSON_READCURVE_OFFSET UNITYSDK_OFFSET(0x1EC15400)
#define SPINE_SKELETONJSON_READDRAWORDER_OFFSET UNITYSDK_OFFSET(0x1EC15FD0)
#define SPINE_SKELETONJSON_READSEQUENCE_OFFSET UNITYSDK_OFFSET(0x1EC14420)
#define SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET UNITYSDK_OFFSET(0x1EBF2E20)
#define SPINE_SKELETONJSON_READSKELETONDATA_OFFSET UNITYSDK_OFFSET(0x1EBF2CE0)
#define SPINE_SKELETONJSON_READTIMELINE_1_OFFSET UNITYSDK_OFFSET(0x1EC15BA0)
#define SPINE_SKELETONJSON_READTIMELINE_OFFSET UNITYSDK_OFFSET(0x1EC15800)
#define SPINE_SKELETONJSON_READVERTICES_OFFSET UNITYSDK_OFFSET(0x1EC14680)
#define SPINE_SKELETONJSON_SETBEZIER_OFFSET UNITYSDK_OFFSET(0x1EC16890)
#define SPINE_SKELETONJSON_TOCOLOR24_OFFSET UNITYSDK_OFFSET(0x1EBFEDF0)
#define SPINE_SKELETONJSON_TOCOLOR32_OFFSET UNITYSDK_OFFSET(0x1EBFEB30)
#define SPINE_SKELETONJSON_TOCOLOR_OFFSET UNITYSDK_OFFSET(0x1EC15270)
#define SPINE_SKELETONJSON__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBF2C50)
#define SPINE_SKELETONJSON__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBF2B50)

namespace Spine
{
	inline static constexpr unsigned int SkeletonJson_TypeDefinitionIndex = 33059;

	class SkeletonJson : public ::Spine::SkeletonLoader
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* linkedMeshes; // 0x20

		::System::Void _ctor(::Spine::AttachmentLoader* attachmentLoader)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::AttachmentLoader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_OFFSET))(this, attachmentLoader);
		}

		::System::Void _ctor_1(::Il2CppArray<::Spine::Atlas*>* atlasArray)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Spine::Atlas*>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON__CTOR_1_OFFSET))(this, atlasArray);
		}

		::Spine::SkeletonData* ReadSkeletonData(::System::String* path)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_OFFSET))(this, path);
		}

		::Spine::SkeletonData* ReadSkeletonData_1(::System::IO::TextReader* reader)
		{
			return ((::Spine::SkeletonData*(*)(::PVOID, ::System::IO::TextReader*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSKELETONDATA_1_OFFSET))(this, reader);
		}

		::Spine::TransformConstraintData_FromProperty* FromProperty(::System::String* type)
		{
			return ((::Spine::TransformConstraintData_FromProperty*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_FROMPROPERTY_OFFSET))(this, type);
		}

		::System::Single PropertyScale(::System::String* type, ::System::Single scale)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_PROPERTYSCALE_OFFSET))(this, type, scale);
		}

		::Spine::Attachment* ReadAttachment(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::Spine::Skin* skin, ::System::Int32 slotIndex, ::System::String* placeholder, ::Spine::SkeletonData* skeletonData)
		{
			return ((::Spine::Attachment*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::Skin*, ::System::Int32, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READATTACHMENT_OFFSET))(this, map, skin, slotIndex, placeholder, skeletonData);
		}

		static ::Spine::Sequence* ReadSequence(::System::Object* sequenceJson)
		{
			return ((::Spine::Sequence*(*)(::System::Object*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READSEQUENCE_OFFSET))(sequenceJson);
		}

		::System::Void ReadVertices(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::Spine::VertexAttachment* attachment, ::System::Int32 verticesLength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::Spine::VertexAttachment*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READVERTICES_OFFSET))(this, map, attachment, verticesLength);
		}

		::System::Void ReadAnimation(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::Spine::SkeletonData* skeletonData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::Spine::SkeletonData*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READANIMATION_OFFSET))(this, map, name, skeletonData);
		}

		static ::System::Void ReadTimeline(::Spine::ExposedList_1<::Spine::Timeline*>*& timelines, ::System::Object*& keyMapEnumerator, ::Spine::CurveTimeline1* timeline, ::System::Single defaultValue, ::System::Single scale)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::Spine::Timeline*>*&, ::System::Object*&, ::Spine::CurveTimeline1*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_OFFSET))(timelines, keyMapEnumerator, timeline, defaultValue, scale);
		}

		static ::System::Void ReadTimeline_1(::Spine::ExposedList_1<::Spine::Timeline*>*& timelines, ::System::Object*& keyMapEnumerator, ::Spine::BoneTimeline2* timeline, ::System::String* name1, ::System::String* name2, ::System::Single defaultValue, ::System::Single scale)
		{
			return ((::System::Void(*)(::Spine::ExposedList_1<::Spine::Timeline*>*&, ::System::Object*&, ::Spine::BoneTimeline2*, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READTIMELINE_1_OFFSET))(timelines, keyMapEnumerator, timeline, name1, name2, defaultValue, scale);
		}

		::Il2CppArray<::System::Int32>* ReadDrawOrder(::Spine::SkeletonData* skeletonData, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* keyMap, ::System::Int32 slotCount, ::Il2CppArray<::System::Int32>* folderSlots)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::Spine::SkeletonData*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::Int32, ::Il2CppArray<::System::Int32>*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READDRAWORDER_OFFSET))(this, skeletonData, keyMap, slotCount, folderSlots);
		}

		static ::System::Int32 ReadCurve(::System::Object* curve, ::Spine::CurveTimeline* timeline, ::System::Int32 bezier, ::System::Int32 frame, ::System::Int32 value, ::System::Single time1, ::System::Single time2, ::System::Single value1, ::System::Single value2, ::System::Single scale)
		{
			return ((::System::Int32(*)(::System::Object*, ::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_READCURVE_OFFSET))(curve, timeline, bezier, frame, value, time1, time2, value1, value2, scale);
		}

		static ::System::Void SetBezier(::Spine::CurveTimeline* timeline, ::System::Int32 frame, ::System::Int32 value, ::System::Int32 bezier, ::System::Single time1, ::System::Single value1, ::System::Single cx1, ::System::Single cy1, ::System::Single cx2, ::System::Single cy2, ::System::Single time2, ::System::Single value2)
		{
			return ((::System::Void(*)(::Spine::CurveTimeline*, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_SETBEZIER_OFFSET))(timeline, frame, value, bezier, time1, value1, cx1, cy1, cx2, cy2, time2, value2);
		}

		static ::Il2CppArray<::System::Single>* GetFloatArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Single scale)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOATARRAY_OFFSET))(map, name, scale);
		}

		static ::Il2CppArray<::System::Int32>* GetIntArray(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINTARRAY_OFFSET))(map, name);
		}

		static ::System::Single GetFloat(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Single defaultValue)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOAT_OFFSET))(map, name, defaultValue);
		}

		static ::System::Single GetFloat_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name)
		{
			return ((::System::Single(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETFLOAT_1_OFFSET))(map, name);
		}

		static ::System::Int32 GetInt(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Int32 defaultValue)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_OFFSET))(map, name, defaultValue);
		}

		static ::System::Int32 GetInt_1(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETINT_1_OFFSET))(map, name);
		}

		static ::System::Boolean GetBoolean(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::Boolean defaultValue)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETBOOLEAN_OFFSET))(map, name, defaultValue);
		}

		static ::System::String* GetString(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* map, ::System::String* name, ::System::String* defaultValue)
		{
			return ((::System::String*(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_GETSTRING_OFFSET))(map, name, defaultValue);
		}

		static ::System::Single ToColor(::System::String* hexString, ::System::Int32 colorIndex, ::System::Int32 expectedLength)
		{
			return ((::System::Single(*)(::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR_OFFSET))(hexString, colorIndex, expectedLength);
		}

		static ::UnityEngine::Color ToColor32(::System::String* hexString, ::System::Int32 expectedLength)
		{
			return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR32_OFFSET))(hexString, expectedLength);
		}

		static ::UnityEngine::Color ToColor24(::System::String* hexString, ::System::Int32 expectedLength)
		{
			return ((::UnityEngine::Color(*)(::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SKELETONJSON_TOCOLOR24_OFFSET))(hexString, expectedLength);
		}
	};
}
