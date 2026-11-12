#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace Spine { class IHasTextureRegion; }
namespace Spine { class Sequence; }
namespace Spine { class Slot; }
namespace Spine { class TextureRegion; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_SEQUENCE_APPLY_OFFSET UNITYSDK_OFFSET(0x1FF57330)
#define SPINE_SEQUENCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF60D40)
#define SPINE_SEQUENCE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FF56D10)
#define SPINE_SEQUENCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF60BF0)
#define SPINE_SEQUENCE_GETPATH_OFFSET UNITYSDK_OFFSET(0x1FF4E6E0)
#define SPINE_SEQUENCE_GET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1FF60B90)
#define SPINE_SEQUENCE_GET_ID_OFFSET UNITYSDK_OFFSET(0x1FF60BE0)
#define SPINE_SEQUENCE_GET_REGIONS_OFFSET UNITYSDK_OFFSET(0x1FF60BD0)
#define SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1FF60BB0)
#define SPINE_SEQUENCE_GET_START_OFFSET UNITYSDK_OFFSET(0x1FF60B70)
#define SPINE_SEQUENCE_SET_DIGITS_OFFSET UNITYSDK_OFFSET(0x1FF60BA0)
#define SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET UNITYSDK_OFFSET(0x1FF60BC0)
#define SPINE_SEQUENCE_SET_START_OFFSET UNITYSDK_OFFSET(0x1FF60B80)

namespace Spine
{
	inline static constexpr unsigned int Sequence_TypeDefinitionIndex = 40589;

	class Sequence : public ::System::Object
	{
	public:
		::Il2CppArray<::Spine::TextureRegion*>* regions; // 0x10
		::System::Int32 digits; // 0x18
		::System::Int32 setupIndex; // 0x1C
		::System::Int32 start; // 0x20
		::System::Int32 id; // 0x24
		static ::System::Object** StaticGet_nextIdLock()
		{
			return (::System::Object**)UnitySDK::FromName("Spine", "Sequence")->GetStaticField(0x50180);
		}

		static ::System::Int32* StaticGet_nextID()
		{
			return (::System::Int32*)UnitySDK::FromName("Spine", "Sequence")->GetStaticField(0xFE60);
		}

		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_CTOR_OFFSET))(this, a1);
		}

		::System::Void _ctor_1(::Spine::Sequence* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Sequence*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_CCTOR_OFFSET))();
		}

		::System::Int32 get_Start()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_START_OFFSET))(this, a1);
		}

		::System::Int32 get_Digits()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_DIGITS_OFFSET))(this);
		}

		::System::Void set_Digits(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_DIGITS_OFFSET))(this, a1);
		}

		::System::Int32 get_SetupIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_SETUPINDEX_OFFSET))(this);
		}

		::System::Void set_SetupIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_SET_SETUPINDEX_OFFSET))(this, a1);
		}

		::Il2CppArray<::Spine::TextureRegion*>* get_Regions()
		{
			return ((::Il2CppArray<::Spine::TextureRegion*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_REGIONS_OFFSET))(this);
		}

		::System::Int32 get_Id()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GET_ID_OFFSET))(this);
		}

		::System::Void Apply(::Spine::Slot* a1, ::Spine::IHasTextureRegion* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Spine::Slot*, ::Spine::IHasTextureRegion*))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_APPLY_OFFSET))(this, a1, a2);
		}

		::System::String* GetPath(::System::String* a1, ::System::Int32 a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_SEQUENCE_GETPATH_OFFSET))(this, a1, a2);
		}

	};
}
