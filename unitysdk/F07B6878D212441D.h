#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"

class E399AD8E05B714CE;
class E9311ED9FFB8F044;
namespace ABC::Splines::CatmullRom { class Spline; }

#define F07B6878D212441D__CTOR_OFFSET UNITYSDK_OFFSET(0x1B2B570)

inline static constexpr unsigned int F07B6878D212441D_TypeDefinitionIndex = 2133;

class F07B6878D212441D : public ::F4A2748143F3AEF6
{
public:
	::E399AD8E05B714CE* FAEAEA93C5FDC9FC; // 0x10
	::E68AA4EB51923C98::A78FBDBE963A373C BB4FC9F572FD885F; // 0x18
	::System::Byte _padding0[0x4];
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x20
	::E9311ED9FFB8F044* B6CCE30319D2B0F1; // 0x28
	::System::Boolean AADBE2207DB9D0BD; // 0x30
	::System::Byte _padding1[0x3];
	::System::Single FF04298E6197F414; // 0x34
	::System::Single FC14FCBDAFB70354; // 0x38
	::System::Single B108549C82338A5E; // 0x3C
	::System::Boolean A986843316F018EE; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F07B6878D212441D__CTOR_OFFSET))(this);
	}
};
