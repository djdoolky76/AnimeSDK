#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ClipperLib/EdgeSide.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/ClipperLib/PolyType.h"
#include "unitysdk/System/Object.h"

#define CLIPPERLIB_TEDGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1E617640)

namespace ClipperLib
{
	inline static constexpr unsigned int TEdge_TypeDefinitionIndex = 32875;

	class TEdge : public ::System::Object
	{
	public:
		::ClipperLib::TEdge* NextInSEL; // 0x10
		::ClipperLib::TEdge* Prev; // 0x18
		::ClipperLib::TEdge* PrevInSEL; // 0x20
		::ClipperLib::TEdge* PrevInAEL; // 0x28
		::ClipperLib::TEdge* NextInLML; // 0x30
		::ClipperLib::TEdge* Next; // 0x38
		::ClipperLib::TEdge* NextInAEL; // 0x40
		::System::Double Dx; // 0x48
		::ClipperLib::IntPoint Delta; // 0x50
		::ClipperLib::IntPoint Bot; // 0x60
		::ClipperLib::EdgeSide Side; // 0x70
		::ClipperLib::PolyType PolyTyp; // 0x74
		::System::Int32 WindDelta; // 0x78
		::System::Int32 WindCnt; // 0x7C
		::System::Int32 OutIdx; // 0x80
		::System::Int32 WindCnt2; // 0x84
		::ClipperLib::IntPoint Curr; // 0x88
		::ClipperLib::IntPoint Top; // 0x98

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_TEDGE__CTOR_OFFSET))(this);
		}
	};
}
