#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Edge.h"
#include "unitysdk/UnityEngine/ProBuilder/EdgeLookup.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Comparison_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class WingedEdge; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD70E280)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD70E2C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET UNITYSDK_OFFSET(0xD70E460)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET UNITYSDK_OFFSET(0xD70E480)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET UNITYSDK_OFFSET(0xD70E420)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET UNITYSDK_OFFSET(0xD70E440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET UNITYSDK_OFFSET(0xD70E400)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET UNITYSDK_OFFSET(0xD70E3F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET UNITYSDK_OFFSET(0xD70E3E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET UNITYSDK_OFFSET(0xD70E3D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET UNITYSDK_OFFSET(0xD70E3C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET UNITYSDK_OFFSET(0xD70E2D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET UNITYSDK_OFFSET(0xD70E300)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET UNITYSDK_OFFSET(0xD70E320)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET UNITYSDK_OFFSET(0xD70E360)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET UNITYSDK_OFFSET(0xD70E380)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ElementSelection___c_TypeDefinitionIndex = 45569;

	class ElementSelection___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B50);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__14_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B58);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__12_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B60);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B68);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B70);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__5_2()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B78);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>, ::System::Boolean>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B80);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__15_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B88);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B90);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__13_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66B98);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66BA0);
		}

		static ::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>** StaticGet___9__27_0()
		{
			return (::System::Comparison_1<::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66BA8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>** StaticGet___9__5_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>, ::System::Boolean>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66BB0);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66BB8);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::EdgeLookup, ::UnityEngine::ProBuilder::Edge>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66BC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>* _GetPerimeterEdges_b__5_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Edge>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetPerimeterEdges_b__5_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetPerimeterEdges_b__5_2(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*> a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETEREDGES_B__5_2_OFFSET))(this, a1);
		}

		::System::Boolean _GetPerimeterFaces_b__7_0(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _GetPerimeterFaces_b__7_1(::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*> a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::UnityEngine::ProBuilder::Edge, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETPERIMETERFACES_B__7_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRing_b__10_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERING_B__10_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeRingIterative_b__11_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGERINGITERATIVE_B__11_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoop_b__12_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOP_B__12_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopIterative_b__13_0(::UnityEngine::ProBuilder::EdgeLookup a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::EdgeLookup))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPITERATIVE_B__13_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternal_b__14_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNAL_B__14_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_0_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _GetEdgeLoopInternalIterative_b__15_1(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__GETEDGELOOPINTERNALITERATIVE_B__15_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Edge _FindHoles_b__26_0(::UnityEngine::ProBuilder::WingedEdge* a1)
		{
			return ((::UnityEngine::ProBuilder::Edge(*)(::PVOID, ::UnityEngine::ProBuilder::WingedEdge*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__26_0_OFFSET))(this, a1);
		}

		::System::Int32 _FindHoles_b__27_0(::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> a1, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32> a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>, ::UnityEngine::ProBuilder::SimpleTuple_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_ELEMENTSELECTION___C__FINDHOLES_B__27_0_OFFSET))(this, a1, a2);
		}

	};
}
