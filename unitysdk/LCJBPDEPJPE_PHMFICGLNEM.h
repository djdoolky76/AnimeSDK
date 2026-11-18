#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class LCJBPDEPJPE;
namespace MoleMole::Config { class ConfigGamepadRumble; }

#define LCJBPDEPJPE_PHMFICGLNEM_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x18655420)
#define LCJBPDEPJPE_PHMFICGLNEM__CTOR_OFFSET UNITYSDK_OFFSET(0x18655410)

inline static constexpr unsigned int LCJBPDEPJPE_PHMFICGLNEM_TypeDefinitionIndex = 46158;

class LCJBPDEPJPE_PHMFICGLNEM : public ::System::Object
{
public:
	::Foundation::AssetPath CJBJONJDOLI; // 0x10
	::LCJBPDEPJPE* KLHPEBKNIFB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_PHMFICGLNEM__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigGamepadRumble* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGamepadRumble*))((::PBYTE)hIl2Cpp + LCJBPDEPJPE_PHMFICGLNEM_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
