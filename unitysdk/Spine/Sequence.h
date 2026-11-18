#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Spine { class IHasSequence; }
namespace Spine { class SlotPose; }
namespace Spine { class TextureRegion; }
namespace System { class String; }

#define SPINE_SEQUENCE_GETOFFSETS_OFFSET UNITYSDK_OFFSET(0x1FF09DE0)
#define SPINE_SEQUENCE_GETPATH_OFFSET UNITYSDK_OFFSET(0x1FF09E20)
#define SPINE_SEQUENCE_GETREGION_OFFSET UNITYSDK_OFFSET(0x1FF09D60)
#define SPINE_SEQUENCE_GETUVS_OFFSET UNITYSDK_OFFSET(0x1FF09DA0)
#define SPINE_SEQUENCE_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1FF09B50)
#define SPINE_SEQUENCE_GET_HASPATHSUFFIX_OFFSET UNITYSDK_OFFSET(0x1FF09BA0)
#define SPINE_SEQUENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1FF09BB0)
#define SPINE_SEQUENCE_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x1FF09B90)
#define SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1FF09B70)
#define SPINE_SEQUENCE_GET_START_OFFSET UNITYSDK_OFFSET(0x1FF09B30)
#define SPINE_SEQUENCE_RESOLVEINDEX_OFFSET UNITYSDK_OFFSET(0x1FF09D20)
#define SPINE_SEQUENCE_SET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1FF09B60)
#define SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1FF09B80)
#define SPINE_SEQUENCE_SET_START_OFFSET UNITYSDK_OFFSET(0x1FF09B40)
#define SPINE_SEQUENCE_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FF08B90)
#define SPINE_SEQUENCE__CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF09F80)
#define SPINE_SEQUENCE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF08670)
#define SPINE_SEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FF09BC0)

namespace Spine
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 32976;

	class Sequence : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Sequence_TypeDefinitionIndex)->GetStaticField(0x29C30);
		}
		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Sequence_TypeDefinitionIndex)->GetStaticField(0x8560);
		}
		::Il2CppArray<::Il2CppArray<::System::Single>*>* uvs; // 0x10
		::Il2CppArray<::Il2CppArray<::System::Single>*>* offsets; // 0x18
		::Il2CppArray<::Spine::TextureRegion*>* regions; // 0x20
		::System::Boolean pathSuffix; // 0x28
		::System::Byte _padding0[0x3];
		::System::Int32 id; // 0x2C
		::System::Int32 start; // 0x30
		::System::Int32 setupIndex; // 0x34
		::System::Int32 digits; // 0x38

		::System::Void _ctor(::System::Int32 count, ::System::Boolean pathSuffix)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CTOR_OFFSET))(this, count, pathSuffix);
		}

		::System::Void _ctor_1(::Spine::Sequence* other)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CTOR_1_OFFSET))(this, other);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SEQUENCE__CCTOR_OFFSET))();
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_START_OFFSET))(this, value);
		}

		::System::Int32 get_Digits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_DIGITS_OFFSET))(this);
		}

		::System::Void set_Digits(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_DIGITS_OFFSET))(this, value);
		}

		::System::Int32 get_SetupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET))(this);
		}

		::System::Void set_SetupIndex(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET))(this, value);
		}

		::Il2CppArray<::Spine::TextureRegion*>* get_Regions()
		{
			return ((::Il2CppArray<::Spine::TextureRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_REGIONS_OFFSET))(this);
		}

		::System::Boolean get_HasPathSuffix()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_HASPATHSUFFIX_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_ID_OFFSET))(this);
		}

		::System::Void Update(::Spine::IHasSequence* attachment)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::IHasSequence*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_UPDATE_OFFSET))(this, attachment);
		}

		::System::Int32 ResolveIndex(::Spine::SlotPose* pose)
		{
			return ((::System::Int32(*)(::PVOID, ::Spine::SlotPose*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_RESOLVEINDEX_OFFSET))(this, pose);
		}

		::Spine::TextureRegion* GetRegion(::System::Int32 index)
		{
			return ((::Spine::TextureRegion*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETREGION_OFFSET))(this, index);
		}

		::Il2CppArray<::System::Single>* GetUVs(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETUVS_OFFSET))(this, index);
		}

		::Il2CppArray<::System::Single>* GetOffsets(::System::Int32 index)
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETOFFSETS_OFFSET))(this, index);
		}

		::System::String* GetPath(::System::String* basePath, ::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETPATH_OFFSET))(this, basePath, index);
		}
	};
}
