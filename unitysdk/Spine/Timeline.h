#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SPINE_TIMELINE_GET_ADDITIVE_OFFSET UNITYSDK_OFFSET(0x1EC16E90)
#define SPINE_TIMELINE_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1EC16840)
#define SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET UNITYSDK_OFFSET(0x1EC16E60)
#define SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET UNITYSDK_OFFSET(0x1EC16E50)
#define SPINE_TIMELINE_GET_FRAMES_OFFSET UNITYSDK_OFFSET(0x1EC16E40)
#define SPINE_TIMELINE_GET_INSTANT_OFFSET UNITYSDK_OFFSET(0x1EC16EA0)
#define SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET UNITYSDK_OFFSET(0x1EC16E30)
#define SPINE_TIMELINE_SEARCH_1_OFFSET UNITYSDK_OFFSET(0x1EBF1A00)
#define SPINE_TIMELINE_SEARCH_OFFSET UNITYSDK_OFFSET(0x1EC16EB0)
#define SPINE_TIMELINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC16D90)

namespace Spine
{
	inline static constexpr unsigned int Timeline_TypeDefinitionIndex = 32896;

	class Timeline : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Single>* frames; // 0x10
		::Il2CppArray<::System::UInt64>* propertyIds; // 0x18
		::System::Boolean additive; // 0x20
		::System::Boolean instant; // 0x21

		::System::Void _ctor(::System::Int32 frameCount, ::Il2CppArray<::System::UInt64>* propertyIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::UInt64>*))((::PBYTE)hIl2Cpp + SPINE_TIMELINE__CTOR_OFFSET))(this, frameCount, propertyIds);
		}

		::Il2CppArray<::System::UInt64>* get_PropertyIds()
		{
			return ((::Il2CppArray<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_PROPERTYIDS_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* get_Frames()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMES_OFFSET))(this);
		}

		::System::Int32 get_FrameEntries()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMEENTRIES_OFFSET))(this);
		}

		::System::Int32 get_FrameCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_FRAMECOUNT_OFFSET))(this);
		}

		::System::Single get_Duration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_DURATION_OFFSET))(this);
		}

		::System::Boolean get_Additive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_ADDITIVE_OFFSET))(this);
		}

		::System::Boolean get_Instant()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_GET_INSTANT_OFFSET))(this);
		}

		static ::System::Int32 Search(::Il2CppArray<::System::Single>* frames, ::System::Single time)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_OFFSET))(frames, time);
		}

		static ::System::Int32 Search_1(::Il2CppArray<::System::Single>* frames, ::System::Single time, ::System::Int32 step)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_TIMELINE_SEARCH_1_OFFSET))(frames, time, step);
		}
	};
}
