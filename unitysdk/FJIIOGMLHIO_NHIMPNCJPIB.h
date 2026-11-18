#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class FJIIOGMLHIO;
namespace MoleMole::Config { class ConfigCameraShakes; }

#define FJIIOGMLHIO_NHIMPNCJPIB_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15E674A0)
#define FJIIOGMLHIO_NHIMPNCJPIB__CTOR_OFFSET UNITYSDK_OFFSET(0x15E67490)

inline static constexpr unsigned int FJIIOGMLHIO_NHIMPNCJPIB_TypeDefinitionIndex = 67036;

class FJIIOGMLHIO_NHIMPNCJPIB : public ::System::Object
{
public:
	::FJIIOGMLHIO* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJIIOGMLHIO_NHIMPNCJPIB__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigCameraShakes* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*))((::PBYTE)hIl2Cpp + FJIIOGMLHIO_NHIMPNCJPIB_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
