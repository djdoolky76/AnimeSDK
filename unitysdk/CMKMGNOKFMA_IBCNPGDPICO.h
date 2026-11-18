#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialKeywordConditions; }
namespace System { class Action; }

#define CMKMGNOKFMA_IBCNPGDPICO_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x19717BC0)
#define CMKMGNOKFMA_IBCNPGDPICO__CTOR_OFFSET UNITYSDK_OFFSET(0x19717BB0)

inline static constexpr unsigned int CMKMGNOKFMA_IBCNPGDPICO_TypeDefinitionIndex = 78716;

class CMKMGNOKFMA_IBCNPGDPICO : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_IBCNPGDPICO__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMaterialKeywordConditions* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialKeywordConditions*))((::PBYTE)hIl2Cpp + CMKMGNOKFMA_IBCNPGDPICO_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
