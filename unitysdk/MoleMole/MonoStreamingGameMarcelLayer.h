#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoPartySceneObject.h"

#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET UNITYSDK_OFFSET(0x139F8410)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_IABIFPLNGNM_OFFSET UNITYSDK_OFFSET(0x139F8A60)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET UNITYSDK_OFFSET(0x139F88E0)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x139F8520)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET UNITYSDK_OFFSET(0x139F8730)
#define MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x139F89B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoStreamingGameMarcelLayer_TypeDefinitionIndex = 86306;

	class MonoStreamingGameMarcelLayer : public ::MoleMole::MonoPartySceneObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONDESTROY_OFFSET))(this);
		}

		::System::Void ResetBlocks()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_RESETBLOCKS_OFFSET))(this);
		}

		::System::Void OnAssociatedEntityRemoved()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_ONASSOCIATEDENTITYREMOVED_OFFSET))(this);
		}

		::System::Void IABIFPLNGNM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOSTREAMINGGAMEMARCELLAYER_IABIFPLNGNM_OFFSET))(this);
		}
	};
}
