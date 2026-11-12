#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedArray3_1.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/FixedBitArray3.h"
namespace System { class String; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CONTAINS_OFFSET UNITYSDK_OFFSET(0x20439BE0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CTOR_OFFSET UNITYSDK_OFFSET(0x2043AF60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_EDGEINDEX_OFFSET UNITYSDK_OFFSET(0x2043D520)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECCW_OFFSET UNITYSDK_OFFSET(0x2043F2A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECW_OFFSET UNITYSDK_OFFSET(0x2043A980)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECCW_OFFSET UNITYSDK_OFFSET(0x2043F400)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECW_OFFSET UNITYSDK_OFFSET(0x2043F560)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GET_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x20440D60)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXCCWFROM_OFFSET UNITYSDK_OFFSET(0x20440D80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXOF_OFFSET UNITYSDK_OFFSET(0x2043F0A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_LEGALIZE_OFFSET UNITYSDK_OFFSET(0x2043F6C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_1_OFFSET UNITYSDK_OFFSET(0x2043D6B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_OFFSET UNITYSDK_OFFSET(0x2043D630)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_1_OFFSET UNITYSDK_OFFSET(0x2043AFB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_OFFSET UNITYSDK_OFFSET(0x20440E30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORACROSSFROM_OFFSET UNITYSDK_OFFSET(0x20439C50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCCWFROM_OFFSET UNITYSDK_OFFSET(0x2043A320)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCWFROM_OFFSET UNITYSDK_OFFSET(0x2043A450)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_OPPOSITEPOINT_OFFSET UNITYSDK_OFFSET(0x20439D00)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCCWFROM_OFFSET UNITYSDK_OFFSET(0x2043A260)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCWFROM_OFFSET UNITYSDK_OFFSET(0x2043A3A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_ROTATECW_OFFSET UNITYSDK_OFFSET(0x20441000)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECCW_OFFSET UNITYSDK_OFFSET(0x2043FB90)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECW_OFFSET UNITYSDK_OFFSET(0x2043FCF0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECCW_OFFSET UNITYSDK_OFFSET(0x2043F8D0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECW_OFFSET UNITYSDK_OFFSET(0x2043FA30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SET_ISINTERIOR_OFFSET UNITYSDK_OFFSET(0x20440D70)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204410B0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DelaunayTriangle_TypeDefinitionIndex = 39666;

	class DelaunayTriangle : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*> Points; // 0x10
		::System::Byte _padding0[0x10];
		::UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*> Neighbors; // 0x28
		::System::Byte _padding1[0x10];
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsDelaunay; // 0x40
		::System::Boolean _IsInterior_k__BackingField; // 0x43
		::UnityEngine::ProBuilder::Poly2Tri::FixedBitArray3 EdgeIsConstrained; // 0x44
		::System::Void _ctor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsInterior()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GET_ISINTERIOR_OFFSET))(this);
		}

		::System::Void set_IsInterior(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SET_ISINTERIOR_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXOF_OFFSET))(this, a1);
		}

		::System::Int32 IndexCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_INDEXCCWFROM_OFFSET))(this, a1);
		}

		::System::Boolean Contains(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_CONTAINS_OFFSET))(this, a1);
		}

		::System::Void MarkNeighbor(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MarkNeighbor_1(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKNEIGHBOR_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* OppositePoint(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_OPPOSITEPOINT_OFFSET))(this, a1, a2);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCWFROM_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORCCWFROM_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NeighborAcrossFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_NEIGHBORACROSSFROM_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCCWFROM_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* PointCWFrom(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_POINTCWFROM_OFFSET))(this, a1);
		}

		::System::Void RotateCW()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_ROTATECW_OFFSET))(this);
		}

		::System::Void Legalize(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_LEGALIZE_OFFSET))(this, a1, a2);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_TOSTRING_OFFSET))(this);
		}

		::System::Void MarkConstrainedEdge(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_OFFSET))(this, a1);
		}

		::System::Void MarkConstrainedEdge_1(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_MARKCONSTRAINEDEDGE_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 EdgeIndex(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_EDGEINDEX_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECCW_OFFSET))(this, a1);
		}

		::System::Boolean GetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETCONSTRAINEDEDGECW_OFFSET))(this, a1);
		}

		::System::Void SetConstrainedEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECCW_OFFSET))(this, a1, a2);
		}

		::System::Void SetConstrainedEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETCONSTRAINEDEDGECW_OFFSET))(this, a1, a2);
		}

		::System::Boolean GetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECCW_OFFSET))(this, a1);
		}

		::System::Boolean GetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_GETDELAUNAYEDGECW_OFFSET))(this, a1);
		}

		::System::Void SetDelaunayEdgeCCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECCW_OFFSET))(this, a1, a2);
		}

		::System::Void SetDelaunayEdgeCW(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DELAUNAYTRIANGLE_SETDELAUNAYEDGECW_OFFSET))(this, a1, a2);
		}

	};
}
