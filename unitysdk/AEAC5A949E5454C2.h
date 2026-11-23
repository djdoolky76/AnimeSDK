#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace ABC::Splines::CatmullRom { class Spline; }

#define AEAC5A949E5454C2__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int AEAC5A949E5454C2_TypeDefinitionIndex = 321;

class AEAC5A949E5454C2 : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::AB642D1382756991* A49F872E9491C52E; // 0x18
	::E68AA4EB51923C98::A78FBDBE963A373C BB4FC9F572FD885F; // 0x20
	::UnityEngine::Vector3 E3745817B46098F1; // 0x24
	::UnityEngine::Quaternion B14F5F733E2AD130; // 0x30
	::System::Boolean AEBC30CA891838C8; // 0x40
	::System::Byte _padding0[0x3];
	::System::Single FF04298E6197F414; // 0x44
	::System::Single FC14FCBDAFB70354; // 0x48
	::System::UInt32 A1FEC5BC334697F7; // 0x4C
	::System::Boolean A986843316F018EE; // 0x50
	::System::Boolean B5C0F9B268222CEC; // 0x51
	::System::Byte _padding1[0x6];
	::ABC::Splines::CatmullRom::Spline* ED5CE2E00999B89B; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEAC5A949E5454C2__CTOR_OFFSET))(this);
	}
};
