#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ZNet/ZNetSceneRootCom_FGCOLFDLJHB.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace MoleMole::EffectSimulate { class FxEditorConfigData; }

#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_FORCERESIMULATEAFTERONESECOND_OFFSET UNITYSDK_OFFSET(0x13B46B70)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_GHKEPOJICMP_OFFSET UNITYSDK_OFFSET(0x13B46B30)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_KOBEJBFMIAP_OFFSET UNITYSDK_OFFSET(0x13B46C00)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM_UPDATE_OFFSET UNITYSDK_OFFSET(0x13B46A60)
#define MOLEMOLE_ZNET_ZNETSCENEROOTCOM__CTOR_OFFSET UNITYSDK_OFFSET(0x13B46BB0)

namespace MoleMole::ZNet
{
	inline static constexpr unsigned int ZNetSceneRootCom_TypeDefinitionIndex = 46736;

	class ZNetSceneRootCom : public ::UnityEngine::MonoBehaviour
	{
	public:
		::MoleMole::ZNet::ZNetSceneRootCom_FGCOLFDLJHB rootType; // 0x18
		::System::Single JCILLMKAIOK; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_UPDATE_OFFSET))(this);
		}

		::System::Void ForceResimulateAfterOneSecond()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_FORCERESIMULATEAFTERONESECOND_OFFSET))(this);
		}

		static ::MoleMole::EffectSimulate::FxEditorConfigData* KOBEJBFMIAP()
		{
			return ((::MoleMole::EffectSimulate::FxEditorConfigData*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_KOBEJBFMIAP_OFFSET))();
		}

		::System::Void GHKEPOJICMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZNET_ZNETSCENEROOTCOM_GHKEPOJICMP_OFFSET))(this);
		}
	};
}
