#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Foundation/AssetPath.h"

class FKNIEPCILLG;
namespace MoleMole::Config { class IndexAssetRef; }
namespace MoleMole::Config { class IndexBlockRef; }
namespace MoleMole::Config { class IndexBundleRef; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_ASSETINDEX_CAGNDHJIOGB_OFFSET UNITYSDK_OFFSET(0x16402180)
#define MOLEMOLE_CONFIG_ASSETINDEX_DFFLIKFAENB_OFFSET UNITYSDK_OFFSET(0x16402080)
#define MOLEMOLE_CONFIG_ASSETINDEX_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x16402040)
#define MOLEMOLE_CONFIG_ASSETINDEX_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16401D20)
#define MOLEMOLE_CONFIG_ASSETINDEX_FROMFLX_OFFSET UNITYSDK_OFFSET(0x164017F0)
#define MOLEMOLE_CONFIG_ASSETINDEX_IAEALJJMOKA_OFFSET UNITYSDK_OFFSET(0x16401D80)
#define MOLEMOLE_CONFIG_ASSETINDEX_PDHKICNJNGG_OFFSET UNITYSDK_OFFSET(0x16401870)
#define MOLEMOLE_CONFIG_ASSETINDEX_TOSTRING_OFFSET UNITYSDK_OFFSET(0x16401230)
#define MOLEMOLE_CONFIG_ASSETINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x16402030)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndex_TypeDefinitionIndex = 39151;

	class AssetIndex : public ::System::Object
	{
	public:
		::Il2CppArray<::MoleMole::Config::IndexAssetRef*>* assets; // 0x10
		::Il2CppArray<::MoleMole::Config::IndexBundleRef*>* bundles; // 0x18
		::Il2CppArray<::MoleMole::Config::IndexBlockRef*>* blocks; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX__CTOR_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_TOSTRING_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_FROMFLX_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::Boolean FromBinary(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_FROMBINARY_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}

		::System::Boolean PDHKICNJNGG(::FlexBuffers::FlxMap HHIJHDFHPOI)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_PDHKICNJNGG_OFFSET))(this, HHIJHDFHPOI);
		}

		::System::String* DPIHOJBBGLA()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_DPIHOJBBGLA_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::UInt64>* DFFLIKFAENB()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt64>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_DFFLIKFAENB_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Foundation::AssetPath>* CAGNDHJIOGB()
		{
			return ((::System::Collections::Generic::List_1<::Foundation::AssetPath>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_CAGNDHJIOGB_OFFSET))(this);
		}

		::System::Boolean IAEALJJMOKA(::FKNIEPCILLG* EAIMGHKJLNF, ::System::Int32 PIIOJAOKMDK)
		{
			return ((::System::Boolean(*)(::PVOID, ::FKNIEPCILLG*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEX_IAEALJJMOKA_OFFSET))(this, EAIMGHKJLNF, PIIOJAOKMDK);
		}
	};
}
