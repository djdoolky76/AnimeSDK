#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ConfigTextureSheetDataModule_TextureSheetTable;
namespace Foundation::AssetLoadTask { template <typename T> class AssetLoadTask_1; }
namespace MoleMole { class ConfigTextureSheet; }
namespace System { template <typename T> class Comparison_1; }
namespace System { template <typename T> class Func_1; }

#define CONFIGTEXTURESHEETDATAMODULE___C__BUILDTABLE_B__6_1_OFFSET UNITYSDK_OFFSET(0x1A1C8240)
#define CONFIGTEXTURESHEETDATAMODULE___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A1C8050)
#define CONFIGTEXTURESHEETDATAMODULE___C__CREATEOP_B__5_0_OFFSET UNITYSDK_OFFSET(0x1A1C80A0)
#define CONFIGTEXTURESHEETDATAMODULE___C__CREATEOP_B__5_1_OFFSET UNITYSDK_OFFSET(0x1A1C80F0)
#define CONFIGTEXTURESHEETDATAMODULE___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1C8090)

inline static constexpr unsigned int ConfigTextureSheetDataModule___c_TypeDefinitionIndex = 43800;

class ConfigTextureSheetDataModule___c : public ::System::Object
{
public:
	static ::System::Func_1<::System::Object*>** StaticGet___9__5_0()
	{
		return (::System::Func_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetDataModule___c_TypeDefinitionIndex)->GetStaticField(0x3D710);
	}
	static ::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>** StaticGet___9__5_1()
	{
		return (::System::Func_1<::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetDataModule___c_TypeDefinitionIndex)->GetStaticField(0x3D718);
	}
	static ::System::Comparison_1<::MoleMole::ConfigTextureSheet*>** StaticGet___9__6_1()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTextureSheet*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetDataModule___c_TypeDefinitionIndex)->GetStaticField(0x3D720);
	}
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetDataModule___c_TypeDefinitionIndex)->GetStaticField(0x3D728);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__CTOR_OFFSET))(this);
	}

	::ConfigTextureSheetDataModule_TextureSheetTable* _CreateOp_b__5_0()
	{
		return ((::ConfigTextureSheetDataModule_TextureSheetTable*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__CREATEOP_B__5_0_OFFSET))(this);
	}

	::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>* _CreateOp_b__5_1()
	{
		return ((::Foundation::AssetLoadTask::AssetLoadTask_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__CREATEOP_B__5_1_OFFSET))(this);
	}

	::System::Int32 _BuildTable_b__6_1(::MoleMole::ConfigTextureSheet* configA, ::MoleMole::ConfigTextureSheet* configB)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTextureSheet*, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATAMODULE___C__BUILDTABLE_B__6_1_OFFSET))(this, configA, configB);
	}
};
