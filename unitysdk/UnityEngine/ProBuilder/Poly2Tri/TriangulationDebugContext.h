#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine::ProBuilder::Poly2Tri { class TriangulationContext; }

namespace UnityEngine::ProBuilder::Poly2Tri
{
	class TriangulationDebugContext : public ::System::Object
	{
	public:
		::UnityEngine::ProBuilder::Poly2Tri::TriangulationContext* _tcx; // 0x10
	};
}
