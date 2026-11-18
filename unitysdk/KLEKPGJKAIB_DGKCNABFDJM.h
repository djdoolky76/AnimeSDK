#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigMaterialPropertySettings; }
namespace System { class Action; }

#define KLEKPGJKAIB_DGKCNABFDJM_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x1681C3E0)
#define KLEKPGJKAIB_DGKCNABFDJM__CTOR_OFFSET UNITYSDK_OFFSET(0x1681C3D0)

inline static constexpr unsigned int KLEKPGJKAIB_DGKCNABFDJM_TypeDefinitionIndex = 42550;

class KLEKPGJKAIB_DGKCNABFDJM : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10
	::Foundation::AssetPath PJNJFACFJHP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_DGKCNABFDJM__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::Config::ConfigMaterialPropertySettings* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigMaterialPropertySettings*))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_DGKCNABFDJM_OKKMJKOAIKG_OFFSET))(this, DFMKILICPFB);
	}
};
