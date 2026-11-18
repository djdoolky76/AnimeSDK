#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTextureSheet; }
namespace System { template <typename T> class Comparison_1; }

#define CONFIGTEXTURESHEETDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x123F56B0)
#define CONFIGTEXTURESHEETDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x123F56F0)
#define CONFIGTEXTURESHEETDATA___C__RELOADFROMFILE_B__5_1_OFFSET UNITYSDK_OFFSET(0x123F5730)
#define CONFIGTEXTURESHEETDATA___C__RELOADTEXTURESHEETFROMFILE_B__4_2_OFFSET UNITYSDK_OFFSET(0x123F5700)

inline static constexpr unsigned int ConfigTextureSheetData___c_TypeDefinitionIndex = 47977;

class ConfigTextureSheetData___c : public ::System::Object
{
public:
	static ::System::Object** StaticGet___9()
	{
		return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData___c_TypeDefinitionIndex)->GetStaticField(0x43110);
	}
	static ::System::Comparison_1<::MoleMole::ConfigTextureSheet*>** StaticGet___9__4_2()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTextureSheet*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData___c_TypeDefinitionIndex)->GetStaticField(0x43118);
	}
	static ::System::Comparison_1<::MoleMole::ConfigTextureSheet*>** StaticGet___9__5_1()
	{
		return (::System::Comparison_1<::MoleMole::ConfigTextureSheet*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigTextureSheetData___c_TypeDefinitionIndex)->GetStaticField(0x43120);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__CTOR_OFFSET))(this);
	}

	::System::Int32 _ReloadTextureSheetFromFile_b__4_2(::MoleMole::ConfigTextureSheet* configA, ::MoleMole::ConfigTextureSheet* configB)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTextureSheet*, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__RELOADTEXTURESHEETFROMFILE_B__4_2_OFFSET))(this, configA, configB);
	}

	::System::Int32 _ReloadFromFile_b__5_1(::MoleMole::ConfigTextureSheet* configA, ::MoleMole::ConfigTextureSheet* configB)
	{
		return ((::System::Int32(*)(::PVOID, ::MoleMole::ConfigTextureSheet*, ::MoleMole::ConfigTextureSheet*))((::PBYTE)hIl2Cpp + CONFIGTEXTURESHEETDATA___C__RELOADFROMFILE_B__5_1_OFFSET))(this, configA, configB);
	}
};
