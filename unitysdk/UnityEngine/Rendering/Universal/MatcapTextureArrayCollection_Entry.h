#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_ENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E8EE9A0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MatcapTextureArrayCollection_Entry_TypeDefinitionIndex = 26835;

	class MatcapTextureArrayCollection_Entry : public ::System::Object
	{
	public:
		::UnityEngine::Texture2DArray* textureArray; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* sourceTextures; // 0x18
		::System::Collections::Generic::HashSet_1<::UnityEngine::Texture2D*>* sourceTextureSet; // 0x20
		::System::Int32 refCount; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_ENTRY__CTOR_OFFSET))(this);
		}
	};
}
