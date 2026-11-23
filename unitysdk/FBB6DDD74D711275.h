#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"

class AB642D1382756991;
class E9311ED9FFB8F044;
namespace ABC::Splines::CatmullRom { class Spline; }

#define FBB6DDD74D711275__CTOR_OFFSET UNITYSDK_OFFSET(0x1675150)

inline static constexpr unsigned int FBB6DDD74D711275_TypeDefinitionIndex = 936;

class FBB6DDD74D711275 : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::E68AA4EB51923C98::A78FBDBE963A373C BB4FC9F572FD885F; // 0x18
	::System::Byte _padding0[0x4];
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x20
	::E9311ED9FFB8F044* B6CCE30319D2B0F1; // 0x28
	::System::Single AC43F3A93310C46C; // 0x30
	::System::Boolean AADBE2207DB9D0BD; // 0x34
	::System::Byte _padding1[0x3];
	::System::Single FF04298E6197F414; // 0x38
	::System::Single FC14FCBDAFB70354; // 0x3C
	::System::Single B108549C82338A5E; // 0x40
	::System::Boolean A986843316F018EE; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBB6DDD74D711275__CTOR_OFFSET))(this);
	}
};
