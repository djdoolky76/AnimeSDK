#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ClipperLib { class OutPt; }
namespace ClipperLib { class PolyNode; }

#define CLIPPERLIB_OUTREC__CTOR_OFFSET UNITYSDK_OFFSET(0x1E617880)

namespace ClipperLib
{
	inline static constexpr unsigned int OutRec_TypeDefinitionIndex = 32881;

	class OutRec : public ::System::Object
	{
	public:
		::ClipperLib::OutRec* FirstLeft; // 0x10
		::ClipperLib::OutPt* BottomPt; // 0x18
		::ClipperLib::PolyNode* PolyNode; // 0x20
		::ClipperLib::OutPt* Pts; // 0x28
		::System::Boolean IsHole; // 0x30
		::System::Boolean IsOpen; // 0x31
		::System::Byte _padding0[0x2];
		::System::Int32 Idx; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_OUTREC__CTOR_OFFSET))(this);
		}
	};
}
