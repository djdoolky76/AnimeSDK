#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Spine/Format.h"
#include "unitysdk/Spine/TextureFilter.h"
#include "unitysdk/Spine/TextureWrap.h"
#include "unitysdk/System/Object.h"
namespace Spine { class AtlasPage; }
namespace System { class Object; }
namespace System { class String; }

#define SPINE_ATLASPAGE_CLONE_OFFSET UNITYSDK_OFFSET(0x16CBBEE0)
#define SPINE_ATLASPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x16CB9F40)

namespace Spine
{
	inline static constexpr unsigned int AtlasPage_TypeDefinitionIndex = 40575;

	class AtlasPage : public ::System::Object
	{
	public:
		::System::Object* rendererObject; // 0x10
		::System::String* name; // 0x18
		::Spine::Format format; // 0x20
		::System::Int32 height; // 0x24
		::Spine::TextureWrap uWrap; // 0x28
		::System::Int32 width; // 0x2C
		::Spine::TextureWrap vWrap; // 0x30
		::System::Boolean pma; // 0x34
		::System::Byte _padding0[0x3];
		::Spine::TextureFilter minFilter; // 0x38
		::Spine::TextureFilter magFilter; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE_CTOR_OFFSET))(this);
		}

		::Spine::AtlasPage* Clone()
		{
			return ((::Spine::AtlasPage*(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_ATLASPAGE_CLONE_OFFSET))(this);
		}

	};
}
