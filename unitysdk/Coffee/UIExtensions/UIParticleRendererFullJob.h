#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"

namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_CACHEFRAMEGLOBALS_OFFSET UNITYSDK_OFFSET(0x1E209B20)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_CLEARPERFRAMESTATE_OFFSET UNITYSDK_OFFSET(0x1E209BD0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_GETPOOLEDBAKEMESH_OFFSET UNITYSDK_OFFSET(0x1E1FC4B0)
#define COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E209CC0)

namespace Coffee::UIExtensions
{
	inline static constexpr unsigned int UIParticleRendererFullJob_TypeDefinitionIndex = 34419;

	class UIParticleRendererFullJob : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Mesh*>** StaticGet_s_BakeMeshPool()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Mesh*>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x2A3D0);
		}
		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_s_NormalBakeVertexPSR()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x2A3D8);
		}
		static ::System::Single* StaticGet_s_CachedDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x8880);
		}
		static ::System::Int32* StaticGet_kOptCanvasMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x8884);
		}
		static ::System::Int32* StaticGet_kOptCombineMeshMatrix()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x8888);
		}
		static ::System::Single* StaticGet_s_CachedUnscaledDeltaTime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x888C);
		}
		static ::System::Int32* StaticGet_kOptMultipliedColor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x8890);
		}
		static ::UnityEngine::Vector2Int* StaticGet_s_CachedScreenSize()
		{
			return (::UnityEngine::Vector2Int*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x8894);
		}
		static ::System::Int32* StaticGet_kOptUITransform()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x889C);
		}
		static ::System::Int32* StaticGet_kOptClipRect()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIParticleRendererFullJob_TypeDefinitionIndex)->GetStaticField(0x88A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB__CCTOR_OFFSET))();
		}

		static ::UnityEngine::Mesh* GetPooledBakeMesh(::System::Int32 index)
		{
			return ((::UnityEngine::Mesh*(*)(::System::Int32))((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_GETPOOLEDBAKEMESH_OFFSET))(index);
		}

		static ::System::Void CacheFrameGlobals()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_CACHEFRAMEGLOBALS_OFFSET))();
		}

		static ::System::Void ClearPerFrameState()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIEXTENSIONS_UIPARTICLERENDERERFULLJOB_CLEARPERFRAMESTATE_OFFSET))();
		}
	};
}
