#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E0B1EB005A75FE28.h"
#include "unitysdk/E422587EEBF1562A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class B3687AB065DF94CB;
class E393F499D14FD84C;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AD68030EF04D3DFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int AD68030EF04D3DFF_TypeDefinitionIndex = 1114;

class AD68030EF04D3DFF : public ::System::Object
{
public:
	::System::Int32 FBAFA13454D09FDC; // 0x10
	::System::Byte _padding0[0x4];
	::AB642D1382756991* AADC05157AA5948F; // 0x18
	::E393F499D14FD84C* A764E4BC41D4957A; // 0x20
	::System::Nullable_1<::E0B1EB005A75FE28> F3AEFA3F1FBE2138; // 0x28
	::System::Byte _padding1[0x58];
	::System::UInt32 AF7D325A18DEF06C; // 0x88
	::UnityEngine::Vector3 FAF8C63C9A83F6FA; // 0x8C
	::E422587EEBF1562A F2EBF1D204382FB3; // 0x98
	::System::Collections::Generic::List_1<::B3687AB065DF94CB*>* FF6F5E6EA04F2E15; // 0xB8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AD68030EF04D3DFF__CTOR_OFFSET))(this);
	}
};
