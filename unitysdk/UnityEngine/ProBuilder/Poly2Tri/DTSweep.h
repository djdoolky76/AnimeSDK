#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/Poly2Tri/Orientation.h"
namespace UnityEngine::ProBuilder::Poly2Tri { class AdvancingFrontNode; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepConstraint; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DTSweepContext; }
namespace UnityEngine::ProBuilder::Poly2Tri { class DelaunayTriangle; }
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationPoint; }

#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_BASINANGLE_OFFSET UNITYSDK_OFFSET(0x2043EAB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_1_OFFSET UNITYSDK_OFFSET(0x2043BE10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_OFFSET UNITYSDK_OFFSET(0x204396C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLADVANCINGFRONT_OFFSET UNITYSDK_OFFSET(0x2043AE20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASINREQ_OFFSET UNITYSDK_OFFSET(0x2043ED40)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASIN_OFFSET UNITYSDK_OFFSET(0x2043EB20)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043BDD0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTABOVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043C410)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTBELOWEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043D120)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONCAVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043CFA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONVEXEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043CDB0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTABOVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043C1F0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTBELOWEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043C9B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONCAVEEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043C630)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONVEXEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043C7B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILL_OFFSET UNITYSDK_OFFSET(0x2043A7A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONCONVEXHULL_OFFSET UNITYSDK_OFFSET(0x20438B40)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONPOLYGON_OFFSET UNITYSDK_OFFSET(0x20438A30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043D8B0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPSCANEDGEEVENT_OFFSET UNITYSDK_OFFSET(0x2043E4A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_HOLEANGLE_OFFSET UNITYSDK_OFFSET(0x2043EA10)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISEDGESIDEOFTRIANGLE_OFFSET UNITYSDK_OFFSET(0x2043BBA0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISSHALLOW_OFFSET UNITYSDK_OFFSET(0x2043EF50)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_LEGALIZE_OFFSET UNITYSDK_OFFSET(0x2043B350)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEWFRONTTRIANGLE_OFFSET UNITYSDK_OFFSET(0x2043AB80)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPPOINT_OFFSET UNITYSDK_OFFSET(0x2043E380)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPTRIANGLE_OFFSET UNITYSDK_OFFSET(0x2043E010)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_POINTEVENT_OFFSET UNITYSDK_OFFSET(0x20439380)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ROTATETRIANGLEPAIR_OFFSET UNITYSDK_OFFSET(0x20439D30)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_SWEEP_OFFSET UNITYSDK_OFFSET(0x204387A0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TRIANGULATE_OFFSET UNITYSDK_OFFSET(0x204384C0)
#define UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TURNADVANCINGFRONTCONVEX_OFFSET UNITYSDK_OFFSET(0x204398F0)

namespace UnityEngine::ProBuilder::Poly2Tri
{
	inline static constexpr unsigned int DTSweep_TypeDefinitionIndex = 39669;

	class DTSweep : public ::System::Object
	{
	public:
		static ::System::Void Triangulate(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TRIANGULATE_OFFSET))(a1);
		}

		static ::System::Void Sweep(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_SWEEP_OFFSET))(a1);
		}

		static ::System::Void FinalizationConvexHull(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONCONVEXHULL_OFFSET))(a1);
		}

		static ::System::Void TurnAdvancingFrontConvex(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_TURNADVANCINGFRONTCONVEX_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FinalizationPolygon(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FINALIZATIONPOLYGON_OFFSET))(a1);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* PointEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_POINTEVENT_OFFSET))(a1, a2);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* NewFrontTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEWFRONTTRIANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillRightConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONCAVEEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillRightConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTCONVEXEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillRightBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTBELOWEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillRightAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLRIGHTABOVEEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillLeftConvexEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONVEXEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillLeftConcaveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTCONCAVEEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillLeftBelowEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTBELOWEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FillLeftAboveEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint* a2, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a3)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLLEFTABOVEEDGEEVENT_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean IsEdgeSideOfTriangle(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISEDGESIDEOFTRIANGLE_OFFSET))(a1, a2, a3);
		}

		static ::System::Void EdgeEvent_1(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a4, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_EDGEEVENT_1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void FlipEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a4, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a5)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPEDGEEVENT_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* NextFlipPoint(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a3, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a4)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*(*)(::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPPOINT_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* NextFlipTriangle(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::Orientation a2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a3, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a4, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a5, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a6)
		{
			return ((::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::Orientation, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_NEXTFLIPTRIANGLE_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FlipScanEdgeEvent(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a3, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a4, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a5, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a6)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FLIPSCANEDGEEVENT_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::System::Void FillAdvancingFront(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLADVANCINGFRONT_OFFSET))(a1, a2);
		}

		static ::System::Void FillBasin(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASIN_OFFSET))(a1, a2);
		}

		static ::System::Void FillBasinReq(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILLBASINREQ_OFFSET))(a1, a2);
		}

		static ::System::Boolean IsShallow(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ISSHALLOW_OFFSET))(a1, a2);
		}

		static ::System::Double HoleAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a1)
		{
			return ((::System::Double(*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_HOLEANGLE_OFFSET))(a1);
		}

		static ::System::Double BasinAngle(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a1)
		{
			return ((::System::Double(*)(::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_BASINANGLE_OFFSET))(a1);
		}

		static ::System::Void Fill(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode* a2)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::AdvancingFrontNode*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_FILL_OFFSET))(a1, a2);
		}

		static ::System::Boolean Legalize(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext* a1, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a2)
		{
			return ((::System::Boolean(*)(::UnityEngine::ProBuilder::Poly2Tri::DTSweepContext*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_LEGALIZE_OFFSET))(a1, a2);
		}

		static ::System::Void RotateTrianglePair(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a1, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a2, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle* a3, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint* a4)
		{
			return ((::System::Void(*)(::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*, ::UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle*, ::UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_POLY2TRI_DTSWEEP_ROTATETRIANGLEPAIR_OFFSET))(a1, a2, a3, a4);
		}

	};
}
