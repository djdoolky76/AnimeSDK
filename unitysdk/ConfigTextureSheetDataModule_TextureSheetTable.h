#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }
namespace MoleMole { class TextureSheetData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CONFIGTEXTURESHEETDATAMODULE_TEXTURESHEETTABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B96280)

inline static constexpr unsigned int ConfigTextureSheetDataModule_TextureSheetTable_TypeDefinitionIndex = 43797;

class ConfigTextureSheetDataModule_TextureSheetTable : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>* CombineTextureSheets; // 0x10
	::System::Collections::Generic::Dictionary_2<::MoleMole::TextureSheetType, ::MoleMole::ConfigTextureSheet*>* ConfigMaps; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_TEXTURESHEETTABLE__CTOR_OFFSET))(this);
	}
};
