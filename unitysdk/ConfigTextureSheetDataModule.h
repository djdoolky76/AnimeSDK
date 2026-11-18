#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadPhase.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/ConfigModuleLib/Runtime/LoadOpHandle.h"
#include "unitysdk/Foundation/AssetPath.h"

class ConfigTextureSheetDataModule_TextureSheetTable;
namespace ConfigModuleLib::Runtime { template <typename T> class LoadOp_1; }
namespace MoleMole { class BlendTextureSheetData; }
namespace MoleMole { class ConfigTextureSheet; }
namespace MoleMole { class TextureSheetData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CONFIGTEXTURESHEETDATAMODULE_BUILDTABLE_OFFSET UNITYSDK_OFFSET(0x123F5C60)
#define CONFIGTEXTURESHEETDATAMODULE_CHECKHOLLOWTEXTURELOOP_OFFSET UNITYSDK_OFFSET(0x123F83D0)
#define CONFIGTEXTURESHEETDATAMODULE_CREATEOP_OFFSET UNITYSDK_OFFSET(0x123F5950)
#define CONFIGTEXTURESHEETDATAMODULE_GETBATTLETEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x123F7F50)
#define CONFIGTEXTURESHEETDATAMODULE_GETBLENDTEXTURESHEET_1_OFFSET UNITYSDK_OFFSET(0x123F7880)
#define CONFIGTEXTURESHEETDATAMODULE_GETBLENDTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x123F7610)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETASSETS_OFFSET UNITYSDK_OFFSET(0x123F7B80)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETBYALL_OFFSET UNITYSDK_OFFSET(0x123F8D30)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET UNITYSDK_OFFSET(0x123F7440)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETCONFIGPATH_OFFSET UNITYSDK_OFFSET(0x123F7F00)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETDATA_1_OFFSET UNITYSDK_OFFSET(0x123F8660)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETDATA_OFFSET UNITYSDK_OFFSET(0x123F8920)
#define CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETGROUPDATA_OFFSET UNITYSDK_OFFSET(0x123F7D40)
#define CONFIGTEXTURESHEETDATAMODULE_GET_TABLE_OFFSET UNITYSDK_OFFSET(0x123F5890)
#define CONFIGTEXTURESHEETDATAMODULE_ISCONTAINTARGETTEXTURESHEET_OFFSET UNITYSDK_OFFSET(0x123F72B0)
#define CONFIGTEXTURESHEETDATAMODULE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x123F57F0)
#define CONFIGTEXTURESHEETDATAMODULE_TRYRANDOMTEXTURESHEETKEY_OFFSET UNITYSDK_OFFSET(0x123F78E0)
#define CONFIGTEXTURESHEETDATAMODULE__CTOR_OFFSET UNITYSDK_OFFSET(0x123F5760)
#define CONFIGTEXTURESHEETDATAMODULE___BASE_PRELOADFORPHASE_OFFSET UNITYSDK_OFFSET(0x123F9150)

inline static constexpr unsigned int ConfigTextureSheetDataModule_TypeDefinitionIndex = 43796;

class ConfigTextureSheetDataModule
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE__CTOR_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase phase)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_PRELOADFORPHASE_OFFSET))(this, phase);
	}

	::ConfigTextureSheetDataModule_TextureSheetTable* get_Table()
	{
		return ((::ConfigTextureSheetDataModule_TextureSheetTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GET_TABLE_OFFSET))(this);
	}

	::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>* CreateOp()
	{
		return ((::ConfigModuleLib::Runtime::LoadOp_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_CREATEOP_OFFSET))(this);
	}

	static ::ConfigTextureSheetDataModule_TextureSheetTable* BuildTable(::Il2CppArray<::Foundation::AssetPath>* paths, ::System::Collections::Generic::List_1<::MoleMole::ConfigTextureSheet*>* loadedConfigs)
	{
		return ((::ConfigTextureSheetDataModule_TextureSheetTable*(*)(::Il2CppArray<::Foundation::AssetPath>*, ::System::Collections::Generic::List_1<::MoleMole::ConfigTextureSheet*>*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_BUILDTABLE_OFFSET))(paths, loadedConfigs);
	}

	::System::Boolean IsContainTargetTextureSheet(::System::String* key)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_ISCONTAINTARGETTEXTURESHEET_OFFSET))(this, key);
	}

	::MoleMole::TextureSheetData* GetTextureSheetByCombineLibrary(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETBYCOMBINELIBRARY_OFFSET))(this, key);
	}

	::MoleMole::BlendTextureSheetData* GetBlendTextureSheet(::MoleMole::TextureSheetType type, ::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETBLENDTEXTURESHEET_OFFSET))(this, type, key);
	}

	::MoleMole::BlendTextureSheetData* GetBlendTextureSheet_1(::System::String* key)
	{
		return ((::MoleMole::BlendTextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETBLENDTEXTURESHEET_1_OFFSET))(this, key);
	}

	::System::String* TryRandomTextureSheetKey(::System::String* key)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_TRYRANDOMTEXTURESHEETKEY_OFFSET))(this, key);
	}

	::MoleMole::ConfigTextureSheet* GetTextureSheetAssets(::MoleMole::TextureSheetType type)
	{
		return ((::MoleMole::ConfigTextureSheet*(*)(::PVOID, ::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETASSETS_OFFSET))(this, type);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>* GetTextureSheetGroupData(::MoleMole::TextureSheetType type)
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::TextureSheetData*>*(*)(::PVOID, ::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETGROUPDATA_OFFSET))(this, type);
	}

	::System::String* GetTextureSheetConfigPath(::MoleMole::TextureSheetType textureSheetType)
	{
		return ((::System::String*(*)(::PVOID, ::MoleMole::TextureSheetType))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETCONFIGPATH_OFFSET))(this, textureSheetType);
	}

	::MoleMole::TextureSheetData* GetBattleTextureSheetData(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETBATTLETEXTURESHEETDATA_OFFSET))(this, key);
	}

	::System::Boolean CheckHollowTextureLoop(::System::String* key, ::System::String* refTex)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_CHECKHOLLOWTEXTURELOOP_OFFSET))(this, key, refTex);
	}

	::MoleMole::TextureSheetData* GetTextureSheetData(::MoleMole::TextureSheetType type, ::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::MoleMole::TextureSheetType, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETDATA_OFFSET))(this, type, key, enableLog);
	}

	::MoleMole::TextureSheetData* GetTextureSheetByAll(::System::String* key)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETBYALL_OFFSET))(this, key);
	}

	::MoleMole::TextureSheetData* GetTextureSheetData_1(::System::String* key, ::System::Boolean enableLog)
	{
		return ((::MoleMole::TextureSheetData*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE_GETTEXTURESHEETDATA_1_OFFSET))(this, key, enableLog);
	}

	::ConfigModuleLib::Runtime::LoadOpHandle __base_PreloadForPhase(::ConfigModuleLib::Runtime::LoadPhase P0)
	{
		return ((::ConfigModuleLib::Runtime::LoadOpHandle(*)(::PVOID, ::ConfigModuleLib::Runtime::LoadPhase))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___BASE_PRELOADFORPHASE_OFFSET))(this, P0);
	}
};
