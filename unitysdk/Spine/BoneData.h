#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define SPINE_BONEDATA_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1FF07D00)
#define SPINE_BONEDATA_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1FF07D20)
#define SPINE_BONEDATA_GET_PARENT_OFFSET UNITYSDK_OFFSET(0x1FF07D10)
#define SPINE_BONEDATA_SET_LENGTH_OFFSET UNITYSDK_OFFSET(0x1FF07D30)
#define SPINE_BONEDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF07C10)
#define SPINE_BONEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF07B10)

namespace Spine
{
	inline static constexpr unsigned int BoneData_TypeDefinitionIndex = 32981;

	class BoneData
	{
	public:
		::Spine::BoneData* parent; // 0x28
		::System::Int32 index; // 0x30
		::System::Single length; // 0x34

		::System::Void _ctor(::System::Int32 index, ::System::String* name, ::Spine::BoneData* parent)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEDATA__CTOR_OFFSET))(this, index, name, parent);
		}

		::System::Void _ctor_1(::Spine::BoneData* data, ::Spine::BoneData* parent)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::BoneData*, ::Spine::BoneData*))((::PBYTE)hIl2Cpp + SPINE_BONEDATA__CTOR_1_OFFSET))(this, data, parent);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_INDEX_OFFSET))(this);
		}

		::Spine::BoneData* get_Parent()
		{
			return ((::Spine::BoneData*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_PARENT_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_GET_LENGTH_OFFSET))(this);
		}

		::System::Void set_Length(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SPINE_BONEDATA_SET_LENGTH_OFFSET))(this, value);
		}
	};
}
