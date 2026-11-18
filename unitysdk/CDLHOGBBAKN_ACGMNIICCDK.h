#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyModifierBatchLoad; }
namespace System { class Action; }

#define CDLHOGBBAKN_ACGMNIICCDK_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x16A122A0)
#define CDLHOGBBAKN_ACGMNIICCDK__CTOR_OFFSET UNITYSDK_OFFSET(0x16A12290)

inline static constexpr unsigned int CDLHOGBBAKN_ACGMNIICCDK_TypeDefinitionIndex = 46179;

class CDLHOGBBAKN_ACGMNIICCDK : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::System::Boolean GHOLINNCJCE; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_ACGMNIICCDK__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad* AOBFDBKJENG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyModifierBatchLoad*))((::PBYTE)hIl2Cpp + CDLHOGBBAKN_ACGMNIICCDK_OKKMJKOAIKG_OFFSET))(this, AOBFDBKJENG);
	}
};
