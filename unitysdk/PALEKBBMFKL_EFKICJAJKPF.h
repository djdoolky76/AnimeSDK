#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class PALEKBBMFKL;
namespace MoleMole::Config { class ConfigHighLightAirCombat; }

#define PALEKBBMFKL_EFKICJAJKPF_BHEKKKNPHAM_OFFSET UNITYSDK_OFFSET(0x15523A30)
#define PALEKBBMFKL_EFKICJAJKPF__CTOR_OFFSET UNITYSDK_OFFSET(0x15523A20)

inline static constexpr unsigned int PALEKBBMFKL_EFKICJAJKPF_TypeDefinitionIndex = 68939;

class PALEKBBMFKL_EFKICJAJKPF : public ::System::Object
{
public:
	::PALEKBBMFKL* KLHPEBKNIFB; // 0x10
	::Foundation::AssetPath CJBJONJDOLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PALEKBBMFKL_EFKICJAJKPF__CTOR_OFFSET))(this);
	}

	::System::Void BHEKKKNPHAM(::MoleMole::Config::ConfigHighLightAirCombat* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHighLightAirCombat*))((::PBYTE)hIl2Cpp + PALEKBBMFKL_EFKICJAJKPF_BHEKKKNPHAM_OFFSET))(this, DFMKILICPFB);
	}
};
