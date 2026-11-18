#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define KKHGAIBALBK_KMFJFGMECHA_DIKEPIBBMND_OFFSET UNITYSDK_OFFSET(0x157F2F10)
#define KKHGAIBALBK_KMFJFGMECHA__CTOR_OFFSET UNITYSDK_OFFSET(0x157F2F00)

inline static constexpr unsigned int KKHGAIBALBK_KMFJFGMECHA_TypeDefinitionIndex = 81362;

class KKHGAIBALBK_KMFJFGMECHA : public ::System::Object
{
public:
	::System::Action* NJJPAJNJFOJ; // 0x10
	::System::Boolean DMELAFOODCG; // 0x18
	::System::Boolean ICEECLOOGBM; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_KMFJFGMECHA__CTOR_OFFSET))(this);
	}

	::System::Void DIKEPIBBMND()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKHGAIBALBK_KMFJFGMECHA_DIKEPIBBMND_OFFSET))(this);
	}
};
