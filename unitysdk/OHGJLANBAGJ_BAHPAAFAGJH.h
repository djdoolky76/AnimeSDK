#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigGhostEffects; }

#define OHGJLANBAGJ_BAHPAAFAGJH_FLIAEJGDMLI_OFFSET UNITYSDK_OFFSET(0x10072580)
#define OHGJLANBAGJ_BAHPAAFAGJH__CTOR_OFFSET UNITYSDK_OFFSET(0x10072080)

inline static constexpr unsigned int OHGJLANBAGJ_BAHPAAFAGJH_TypeDefinitionIndex = 38361;

class OHGJLANBAGJ_BAHPAAFAGJH : public ::System::Object
{
public:
	::Foundation::AssetPath PJNJFACFJHP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_BAHPAAFAGJH__CTOR_OFFSET))(this);
	}

	::System::Void FLIAEJGDMLI(::MoleMole::Config::ConfigGhostEffects* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigGhostEffects*))((::PBYTE)hIl2Cpp + OHGJLANBAGJ_BAHPAAFAGJH_FLIAEJGDMLI_OFFSET))(this, DFMKILICPFB);
	}
};
