#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJFGDPFPPOD.h"
#include "unitysdk/FLMJPFJKBGG.h"

class MFFAGJDENLJ;
namespace UnityEngine { class Transform; }

#define FAHFLGDKFCE_AFCMCJLGJDL_OFFSET UNITYSDK_OFFSET(0xBB2F370)
#define FAHFLGDKFCE_BMGMBKGNMDI_OFFSET UNITYSDK_OFFSET(0xBB2F350)
#define FAHFLGDKFCE_EPEGKMMLHLJ_OFFSET UNITYSDK_OFFSET(0xBB2F8B0)
#define FAHFLGDKFCE__CTOR_OFFSET UNITYSDK_OFFSET(0xBB2F360)

inline static constexpr unsigned int FAHFLGDKFCE_TypeDefinitionIndex = 91727;

class FAHFLGDKFCE : public ::FLMJPFJKBGG
{
public:
	::MFFAGJDENLJ* EFFAONJBCOG; // 0x28
	::UnityEngine::Transform* IBBNCKJGCMM; // 0x30
	::UnityEngine::Transform* ALNIPFLKJBO; // 0x38
	::System::Single DMOPJAGAAMP; // 0x40
	::System::Boolean BFGILPAIGND; // 0x44
	::System::Byte _padding0[0x3];
	::System::Single HJFHAILCEJA; // 0x48
	::System::Single MIPDODMPAPI; // 0x4C

	::System::Void _ctor(::MFFAGJDENLJ* LJBPECKCCEA, ::System::Single BDEDDEGJFKL, ::System::Single JMELENFGPMD)
	{
		return ((::System::Void(*)(::PVOID, ::MFFAGJDENLJ*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FAHFLGDKFCE__CTOR_OFFSET))(this, LJBPECKCCEA, BDEDDEGJFKL, JMELENFGPMD);
	}

	::DJFGDPFPPOD BMGMBKGNMDI()
	{
		return ((::DJFGDPFPPOD(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHFLGDKFCE_BMGMBKGNMDI_OFFSET))(this);
	}

	::System::Boolean AFCMCJLGJDL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHFLGDKFCE_AFCMCJLGJDL_OFFSET))(this);
	}

	::System::Boolean EPEGKMMLHLJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FAHFLGDKFCE_EPEGKMMLHLJ_OFFSET))(this);
	}
};
