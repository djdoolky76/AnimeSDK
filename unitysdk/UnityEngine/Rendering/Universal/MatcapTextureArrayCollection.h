#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine::Rendering::Universal { class MatcapTextureArrayCollection_Entry; }

#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1C9C26E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_DESTROYTEXTUREARRAY_OFFSET UNITYSDK_OFFSET(0x1C9C2E80)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_RELEASE_OFFSET UNITYSDK_OFFSET(0x1C9C2B00)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_REMAPTEXIDS_OFFSET UNITYSDK_OFFSET(0x1C9C24C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_REMOVEENTRYAT_OFFSET UNITYSDK_OFFSET(0x1C9C2110)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_SOURCESMATCHIGNOREORDER_OFFSET UNITYSDK_OFFSET(0x1C9C23B0)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_TRYACQUIRE_OFFSET UNITYSDK_OFFSET(0x1C9C1E10)
#define UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C9C3060)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int MatcapTextureArrayCollection_TypeDefinitionIndex = 26834;

	class MatcapTextureArrayCollection : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>** StaticGet_s_ArrayIdToEntry()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MatcapTextureArrayCollection_TypeDefinitionIndex)->GetStaticField(0x24410);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_s_Entries()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(MatcapTextureArrayCollection_TypeDefinitionIndex)->GetStaticField(0x24418);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION__CCTOR_OFFSET))();
		}

		static ::System::Boolean TryAcquire(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* matcapTexsList, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* matcapTexIDsList, ::UnityEngine::Texture2DArray*& textureArray)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>*, ::UnityEngine::Texture2DArray*&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_TRYACQUIRE_OFFSET))(matcapTexsList, matcapTexIDsList, textureArray);
		}

		static ::System::Void Add(::UnityEngine::Texture2DArray* textureArray, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* sourceTextures)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2DArray*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_ADD_OFFSET))(textureArray, sourceTextures);
		}

		static ::System::Boolean Release(::UnityEngine::Texture2DArray* textureArray)
		{
			return ((::System::Boolean(*)(::UnityEngine::Texture2DArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_RELEASE_OFFSET))(textureArray);
		}

		static ::System::Boolean SourcesMatchIgnoreOrder(::UnityEngine::Rendering::Universal::MatcapTextureArrayCollection_Entry* entry, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* matcapTexsList)
		{
			return ((::System::Boolean(*)(::UnityEngine::Rendering::Universal::MatcapTextureArrayCollection_Entry*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_SOURCESMATCHIGNOREORDER_OFFSET))(entry, matcapTexsList);
		}

		static ::System::Void RemapTexIds(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* cachedOrdered, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* requestOrdered, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>* matcapTexIDsList)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>*, ::System::Collections::Generic::List_1<::Il2CppArray<::System::Int32>*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_REMAPTEXIDS_OFFSET))(cachedOrdered, requestOrdered, matcapTexIDsList);
		}

		static ::System::Void RemoveEntryAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_REMOVEENTRYAT_OFFSET))(index);
		}

		static ::System::Void DestroyTextureArray(::UnityEngine::Texture2DArray* textureArray)
		{
			return ((::System::Void(*)(::UnityEngine::Texture2DArray*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_MATCAPTEXTUREARRAYCOLLECTION_DESTROYTEXTUREARRAY_OFFSET))(textureArray);
		}
	};
}
