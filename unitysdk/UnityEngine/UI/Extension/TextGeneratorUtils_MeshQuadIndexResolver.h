#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/UIVertex.h"

namespace System::Collections::Generic { template <typename T> class IList_1; }

#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_GETDEFERREDSTART_OFFSET UNITYSDK_OFFSET(0x8597C0)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_RESOLVE_OFFSET UNITYSDK_OFFSET(0x859730)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_SKIPDEGENERATEQUADS_OFFSET UNITYSDK_OFFSET(0x859810)
#define UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER__CTOR_OFFSET UNITYSDK_OFFSET(0x859710)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int TextGeneratorUtils_MeshQuadIndexResolver_TypeDefinitionIndex = 46064;

	struct alignas(8) TextGeneratorUtils_MeshQuadIndexResolver
	{
		::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* _genVerts; // 0x10
		::System::Boolean _isPreReorder; // 0x18
		::System::Boolean _hasDegenQuads; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 _meshQuadCursor; // 0x1C

		::System::Void _ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>* genVerts, ::System::Boolean isPreReorder, ::System::Boolean hasDegenQuads)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::UnityEngine::UIVertex>*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER__CTOR_OFFSET))(this, genVerts, isPreReorder, hasDegenQuads);
		}

		::System::Int32 Resolve(::System::Int32 charIndex, ::System::Boolean isTruncated, ::System::Boolean isDeferredIcon)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_RESOLVE_OFFSET))(this, charIndex, isTruncated, isDeferredIcon);
		}

		::System::Int32 GetDeferredStart()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_GETDEFERREDSTART_OFFSET))(this);
		}

		::System::Void SkipDegenerateQuads()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_TEXTGENERATORUTILS_MESHQUADINDEXRESOLVER_SKIPDEGENERATEQUADS_OFFSET))(this);
		}
	};
}
