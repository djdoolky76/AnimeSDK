#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoDBBridgeControl; }
namespace RPG::Client { class MonoDBBridgeManager; }
namespace UnityEngine { class MonoBehaviour; }

#define IGDJOPOJKDO_CJHIDNDOBNJ_OFFSET UNITYSDK_OFFSET(0x16402EB0)
#define IGDJOPOJKDO_CTOR_OFFSET UNITYSDK_OFFSET(0x16409970)
#define IGDJOPOJKDO_EAJLHLEHALG_OFFSET UNITYSDK_OFFSET(0x164092C0)
#define IGDJOPOJKDO_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x164034B0)
#define IGDJOPOJKDO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16409300)
#define IGDJOPOJKDO_JKJKBKLEGNL_OFFSET UNITYSDK_OFFSET(0x16403500)
#define IGDJOPOJKDO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16402760)
#define IGDJOPOJKDO_OCIMHAIMNEP_OFFSET UNITYSDK_OFFSET(0x16409670)
#define IGDJOPOJKDO_OJDOOHBJGLB_OFFSET UNITYSDK_OFFSET(0x16409370)
#define IGDJOPOJKDO_OMMGINEECHA_OFFSET UNITYSDK_OFFSET(0x164027F0)

inline static constexpr unsigned int IGDJOPOJKDO_TypeDefinitionIndex = 70369;

	class IGDJOPOJKDO : public ::RPG::Client::BehaviorBase
	{
	public:
		::Il2CppArray<::RPG::Client::MonoDBBridgeControl*>* ACACAMHFFJM; // 0x18
		::Il2CppArray<::System::Single>* LKFOGINOJAB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void EAJLHLEHALG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_EAJLHLEHALG_OFFSET))(this);
		}

		::System::Void OMMGINEECHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_OMMGINEECHA_OFFSET))(this);
		}

		::System::Void JKJKBKLEGNL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_JKJKBKLEGNL_OFFSET))(this);
		}

		::System::Void OCIMHAIMNEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_OCIMHAIMNEP_OFFSET))(this);
		}

		::System::Void OJDOOHBJGLB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_OJDOOHBJGLB_OFFSET))(this);
		}

		::System::Void CJHIDNDOBNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_CJHIDNDOBNJ_OFFSET))(this);
		}

		::RPG::Client::MonoDBBridgeManager* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoDBBridgeManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGDJOPOJKDO_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
