#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }

#define CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS6_0__BUILDTABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1831A8C0)
#define CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1831A8B0)

inline static constexpr unsigned int ConfigTextureSheetDataModule___c__DisplayClass6_0_TypeDefinitionIndex = 43798;

class ConfigTextureSheetDataModule___c__DisplayClass6_0 : public ::System::Object
{
public:
	::MoleMole::TextureSheetType value; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
	}

	::System::Boolean _BuildTable_b__0(::MoleMole::ConfigTextureSheet* config)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS6_0__BUILDTABLE_B__0_OFFSET))(this, config);
	}
};
