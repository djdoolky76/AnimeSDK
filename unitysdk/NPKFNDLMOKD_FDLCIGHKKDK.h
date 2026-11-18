#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class NPKFNDLMOKD_IMLJIMGEPGO;
namespace MoleMole::Config { class WindFieldConfig; }

#define NPKFNDLMOKD_FDLCIGHKKDK_NKJJNLIDKFG_OFFSET UNITYSDK_OFFSET(0xE1294C0)
#define NPKFNDLMOKD_FDLCIGHKKDK__CTOR_OFFSET UNITYSDK_OFFSET(0xE1294B0)

inline static constexpr unsigned int NPKFNDLMOKD_FDLCIGHKKDK_TypeDefinitionIndex = 68750;

class NPKFNDLMOKD_FDLCIGHKKDK : public ::System::Object
{
public:
	::NPKFNDLMOKD_IMLJIMGEPGO* FGBNBFHOKAA; // 0x10
	::Foundation::AssetPath OIIHCACKLHD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_FDLCIGHKKDK__CTOR_OFFSET))(this);
	}

	::System::Void NKJJNLIDKFG(::MoleMole::Config::WindFieldConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + NPKFNDLMOKD_FDLCIGHKKDK_NKJJNLIDKFG_OFFSET))(this, DFMKILICPFB);
	}
};
