#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class AssetIndexContainer_GCIDPCIILAC_EINKCDMBECA; }
namespace MoleMole::Config { class IndexAssetRef; }
namespace MoleMole::Config { class IndexBlockRef; }
namespace MoleMole::Config { class IndexBundleRef; }

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_GCIDPCIILAC__CTOR_OFFSET UNITYSDK_OFFSET(0x19092FE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_GCIDPCIILAC_TypeDefinitionIndex = 92866;

	class AssetIndexContainer_GCIDPCIILAC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Byte>* DDMJEBMJJFK; // 0x10
		::MoleMole::Config::AssetIndexContainer_GCIDPCIILAC_EINKCDMBECA* KOGMBPFFFGE; // 0x18
		::Il2CppArray<::MoleMole::Config::IndexAssetRef*>* IICJBLAJEJN; // 0x20
		::Il2CppArray<::MoleMole::Config::IndexBundleRef*>* OGEAMGINNNE; // 0x28
		::Il2CppArray<::MoleMole::Config::IndexBlockRef*>* GEFCJMICMME; // 0x30
		::System::Int32 FOFPPHJMECE; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_GCIDPCIILAC__CTOR_OFFSET))(this);
		}
	};
}
