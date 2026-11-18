#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigZipLine_ExitPointSelectionMode.h"
#include "unitysdk/System/Object.h"

#define PABEMIJJENC_FAFFBNHHOEB_OFFSET UNITYSDK_OFFSET(0x19493440)

inline static constexpr unsigned int PABEMIJJENC_TypeDefinitionIndex = 78276;

class PABEMIJJENC : public ::System::Object
{
public:
	static ::System::Boolean FAFFBNHHOEB(::MoleMole::Config::ConfigZipLine_ExitPointSelectionMode EGEGIMGMJHN, ::MoleMole::Config::ConfigZipLine_ExitPointSelectionMode FCPCLIJNDLA)
	{
		return ((::System::Boolean(*)(::MoleMole::Config::ConfigZipLine_ExitPointSelectionMode, ::MoleMole::Config::ConfigZipLine_ExitPointSelectionMode))((::PBYTE)hIl2Cpp + PABEMIJJENC_FAFFBNHHOEB_OFFSET))(EGEGIMGMJHN, FCPCLIJNDLA);
	}
};
