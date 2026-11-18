#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class DADFKFAGEGD_JLCGLNLBIJN;
namespace MoleMole::Config { class ConfigShaderCustomFogMap; }

#define DADFKFAGEGD_NHADBMNCCOO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1831DC20)
#define DADFKFAGEGD_NHADBMNCCOO__CTOR_OFFSET UNITYSDK_OFFSET(0x1831DC10)

inline static constexpr unsigned int DADFKFAGEGD_NHADBMNCCOO_TypeDefinitionIndex = 64252;

class DADFKFAGEGD_NHADBMNCCOO : public ::System::Object
{
public:
	::Foundation::AssetPath OIIHCACKLHD; // 0x10
	::DADFKFAGEGD_JLCGLNLBIJN* EEMOEMFLABI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DADFKFAGEGD_NHADBMNCCOO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigShaderCustomFogMap* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShaderCustomFogMap*))((::PBYTE)hIl2Cpp + DADFKFAGEGD_NHADBMNCCOO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
