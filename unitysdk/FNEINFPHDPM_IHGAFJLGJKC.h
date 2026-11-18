#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardLight; }
namespace System { class Action; }

#define FNEINFPHDPM_IHGAFJLGJKC_MGFMAOOLBKM_OFFSET UNITYSDK_OFFSET(0x141124A0)
#define FNEINFPHDPM_IHGAFJLGJKC__CTOR_OFFSET UNITYSDK_OFFSET(0x141122E0)

inline static constexpr unsigned int FNEINFPHDPM_IHGAFJLGJKC_TypeDefinitionIndex = 60887;

class FNEINFPHDPM_IHGAFJLGJKC : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNEINFPHDPM_IHGAFJLGJKC__CTOR_OFFSET))(this);
	}

	::System::Void MGFMAOOLBKM(::MoleMole::Config::ConfigHollowChessboardLight* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardLight*))((::PBYTE)hIl2Cpp + FNEINFPHDPM_IHGAFJLGJKC_MGFMAOOLBKM_OFFSET))(this, DFMKILICPFB);
	}
};
