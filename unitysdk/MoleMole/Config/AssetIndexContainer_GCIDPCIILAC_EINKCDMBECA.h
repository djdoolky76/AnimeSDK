#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_GCIDPCIILAC_EINKCDMBECA__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8BEC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_GCIDPCIILAC_EINKCDMBECA_TypeDefinitionIndex = 92867;

	class AssetIndexContainer_GCIDPCIILAC_EINKCDMBECA : public ::System::Object
	{
	public:
		::System::Int64 NPHMDOAKJIB; // 0x10
		::System::Int64 PGAGAFLLPKA; // 0x18
		::System::Int64 EAAHHHEIBAI; // 0x20
		::System::Int64 EMAIMKNOFFJ; // 0x28
		::System::Int64 PCBBLPEJCOA; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_GCIDPCIILAC_EINKCDMBECA__CTOR_OFFSET))(this);
		}
	};
}
