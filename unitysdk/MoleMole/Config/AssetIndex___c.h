#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class IndexAssetRef; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Converter_2; }

#define MOLEMOLE_CONFIG_ASSETINDEX___C_IODJECELOOE_OFFSET UNITYSDK_OFFSET(0x1BA22020)
#define MOLEMOLE_CONFIG_ASSETINDEX___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA21FD0)
#define MOLEMOLE_CONFIG_ASSETINDEX___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA22010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndex___c_TypeDefinitionIndex = 39152;

	class AssetIndex___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(AssetIndex___c_TypeDefinitionIndex)->GetStaticField(0x44A70);
		}
		static ::System::Converter_2<::MoleMole::Config::IndexAssetRef*, ::System::String*>** StaticGet___9__2_0()
		{
			return (::System::Converter_2<::MoleMole::Config::IndexAssetRef*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(AssetIndex___c_TypeDefinitionIndex)->GetStaticField(0x44A78);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C__CTOR_OFFSET))(this);
		}

		::System::String* IODJECELOOE(::MoleMole::Config::IndexAssetRef* HLFFCMIFFIB)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Config::IndexAssetRef*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX___C_IODJECELOOE_OFFSET))(this, HLFFCMIFFIB);
		}
	};
}
