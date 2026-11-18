#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertyExclusivity; }
namespace System { class Action; }

#define IAMNIAECDLK_OEAMDMMPLOL_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1012C380)
#define IAMNIAECDLK_OEAMDMMPLOL__CTOR_OFFSET UNITYSDK_OFFSET(0x1012C370)

inline static constexpr unsigned int IAMNIAECDLK_OEAMDMMPLOL_TypeDefinitionIndex = 65178;

class IAMNIAECDLK_OEAMDMMPLOL : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10
	::System::Action* IBNICCGMILF; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAMNIAECDLK_OEAMDMMPLOL__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMaterialPropertyExclusivity* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertyExclusivity*))((::PBYTE)hIl2Cpp + IAMNIAECDLK_OEAMDMMPLOL_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
