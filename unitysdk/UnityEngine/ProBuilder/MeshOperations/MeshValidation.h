#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/Triangle.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class ProBuilderMesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET UNITYSDK_OFFSET(0xD7204E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET UNITYSDK_OFFSET(0xD71F950)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET UNITYSDK_OFFSET(0xD7200D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0xD71F930)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0xD720320)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET UNITYSDK_OFFSET(0xD6FC2C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET UNITYSDK_OFFSET(0xD6F9550)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET UNITYSDK_OFFSET(0xD720E70)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET UNITYSDK_OFFSET(0xD720910)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET UNITYSDK_OFFSET(0xD721480)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET UNITYSDK_OFFSET(0xD704680)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET UNITYSDK_OFFSET(0xD705620)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshValidation_TypeDefinitionIndex = 45583;

	class MeshValidation : public ::System::Object
	{
	public:
		static ::System::Boolean ContainsDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_OFFSET))(a1);
		}

		static ::System::Boolean ContainsDegenerateTriangles_1(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsDegenerateTriangles_2(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSDEGENERATETRIANGLES_2_OFFSET))(a1, a2);
		}

		static ::System::Boolean ContainsNonContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_CONTAINSNONCONTIGUOUSTRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* EnsureFacesAreComposedOfContiguousTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREFACESARECOMPOSEDOFCONTIGUOUSTRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>* CollectFaceGroups(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::UnityEngine::ProBuilder::Face* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Triangle>*>*(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_COLLECTFACEGROUPS_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveDegenerateTriangles(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEDEGENERATETRIANGLES_OFFSET))(a1, a2);
		}

		static ::System::Boolean RemoveUnusedVertices(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REMOVEUNUSEDVERTICES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* RebuildIndexes(::System::Collections::Generic::IEnumerable_1<::System::Int32>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::System::Collections::Generic::IEnumerable_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDINDEXES_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* RebuildEdges(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* a1, ::System::Collections::Generic::List_1<::System::Int32>* a2)
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*(*)(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDEDGES_OFFSET))(a1, a2);
		}

		static ::System::Void RebuildSelectionIndexes(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Object* a2, ::System::Object* a3, ::System::Object* a4, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_REBUILDSELECTIONINDEXES_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Boolean EnsureMeshIsValid(::UnityEngine::ProBuilder::ProBuilderMesh* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHVALIDATION_ENSUREMESHISVALID_OFFSET))(a1, a2);
		}

	};
}
