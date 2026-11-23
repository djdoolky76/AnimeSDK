#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
class E9311ED9FFB8F044;
namespace ABC::Splines::CatmullRom { class Spline; }

#define A4C0E8962EA51F4F__CTOR_OFFSET UNITYSDK_OFFSET(0x166C740)

inline static constexpr unsigned int A4C0E8962EA51F4F_TypeDefinitionIndex = 77;

class A4C0E8962EA51F4F : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::E68AA4EB51923C98::A78FBDBE963A373C BB4FC9F572FD885F; // 0x18
	::System::Byte _padding0[0x4];
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x20
	::E9311ED9FFB8F044* B6CCE30319D2B0F1; // 0x28
	::System::Single F31F6792345FE370; // 0x30
	::UnityEngine::Vector3 E3745817B46098F1; // 0x34
	::System::Single FF04298E6197F414; // 0x40
	::System::Single FC14FCBDAFB70354; // 0x44
	::System::Boolean B5C0F9B268222CEC; // 0x48
	::System::Boolean B30D4E237E80A17C; // 0x49
	::System::Byte _padding1[0x2];
	::UnityEngine::Vector3 B14F5F733E2AD130; // 0x4C
	::System::Single A19C85B3A275B5AE; // 0x58
	::System::Single B108549C82338A5E; // 0x5C
	::System::Boolean A986843316F018EE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4C0E8962EA51F4F__CTOR_OFFSET))(this);
	}
};
