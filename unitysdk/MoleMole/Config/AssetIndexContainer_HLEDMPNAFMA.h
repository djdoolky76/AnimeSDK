#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_HLEDMPNAFMA_DMNMGPHKMFI_OFFSET UNITYSDK_OFFSET(0x1922E8B0)
#define MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_HLEDMPNAFMA__CTOR_OFFSET UNITYSDK_OFFSET(0x1922E8A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AssetIndexContainer_HLEDMPNAFMA_TypeDefinitionIndex = 92868;

	class AssetIndexContainer_HLEDMPNAFMA : public ::System::Object
	{
	public:
		::System::Int32 KCPCBOFIMNO; // 0x10
		::System::Int32 HMFLGGEJHOC; // 0x14
		::System::Int32 JEHMPFOHPLE; // 0x18
		::System::Int32 PBEJIGBHNLA; // 0x1C
		::System::Int32 PFAOFHFLHEG; // 0x20
		::System::Int32 POKNJGKFOPD; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_HLEDMPNAFMA__CTOR_OFFSET))(this);
		}

		::System::Void DMNMGPHKMFI(::System::Object* LIPNGCENBJF)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_ASSETINDEXCONTAINER_HLEDMPNAFMA_DMNMGPHKMFI_OFFSET))(this, LIPNGCENBJF);
		}
	};
}
