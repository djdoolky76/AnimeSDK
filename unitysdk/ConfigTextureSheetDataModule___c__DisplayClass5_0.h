#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class ConfigTextureSheetDataModule_TextureSheetTable;
namespace MoleMole { class ConfigTextureSheet; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS5_0__CREATEOP_B__2_OFFSET UNITYSDK_OFFSET(0x13E1F250)
#define CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13E1F240)

inline static constexpr unsigned int ConfigTextureSheetDataModule___c__DisplayClass5_0_TypeDefinitionIndex = 43799;

class ConfigTextureSheetDataModule___c__DisplayClass5_0 : public ::System::Object
{
public:
	::Il2CppArray<::Foundation::AssetPath>* paths; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS5_0__CTOR_OFFSET))(this);
	}

	::ConfigTextureSheetDataModule_TextureSheetTable* _CreateOp_b__2(::System::Collections::Generic::List_1<::MoleMole::ConfigTextureSheet*>* loadedConfigs)
	{
		return ((::ConfigTextureSheetDataModule_TextureSheetTable*(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::ConfigTextureSheet*>*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__DISPLAYCLASS5_0__CREATEOP_B__2_OFFSET))(this, loadedConfigs);
	}
};
