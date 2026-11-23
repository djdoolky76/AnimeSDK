#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/A78FBDBE963A373C.h"
#include "unitysdk/F4A2748143F3AEF6.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;

#define BE059156ED09A8F3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BE059156ED09A8F3_TypeDefinitionIndex = 1235;

class BE059156ED09A8F3 : public ::F4A2748143F3AEF6
{
public:
	::AB642D1382756991* E63E0F25F251B753; // 0x10
	::E68AA4EB51923C98::A78FBDBE963A373C B6414E00B58F108B; // 0x18
	::System::Single EFD7DBDE5BF28F03; // 0x1C
	::UnityEngine::Vector3 E3745817B46098F1; // 0x20
	::System::Single FF04298E6197F414; // 0x2C
	::System::Boolean A9BA1F6570F4774C; // 0x30
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 B14F5F733E2AD130; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BE059156ED09A8F3__CTOR_OFFSET))(this);
	}
};
