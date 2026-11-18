#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSkinPreview; }
namespace System { class Action; }

#define MOKOLKNFBDC_EKLAEBALDBD_PPNBKGNDOOG_OFFSET UNITYSDK_OFFSET(0x1274A160)
#define MOKOLKNFBDC_EKLAEBALDBD__CTOR_OFFSET UNITYSDK_OFFSET(0x1274A150)

inline static constexpr unsigned int MOKOLKNFBDC_EKLAEBALDBD_TypeDefinitionIndex = 70024;

class MOKOLKNFBDC_EKLAEBALDBD : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_EKLAEBALDBD__CTOR_OFFSET))(this);
	}

	::System::Void PPNBKGNDOOG(::MoleMole::Config::ConfigSkinPreview* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSkinPreview*))((::PBYTE)hIl2Cpp + MOKOLKNFBDC_EKLAEBALDBD_PPNBKGNDOOG_OFFSET))(this, DFMKILICPFB);
	}
};
