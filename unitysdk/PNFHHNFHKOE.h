#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TABehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class InteractProxy;
class WaterInteractor;

#define PNFHHNFHKOE_CGEJMGFOLMP_OFFSET UNITYSDK_OFFSET(0xC336FB0)
#define PNFHHNFHKOE_CTOR_OFFSET UNITYSDK_OFFSET(0xC337DA0)
#define PNFHHNFHKOE_ENAIBJGFMFI_OFFSET UNITYSDK_OFFSET(0xC336F10)
#define PNFHHNFHKOE_GMEDBNAABDC_OFFSET UNITYSDK_OFFSET(0xC336C70)
#define PNFHHNFHKOE_IKOHLHDGFKH_OFFSET UNITYSDK_OFFSET(0xC337140)
#define PNFHHNFHKOE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xC336A10)
#define PNFHHNFHKOE_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0xC336EC0)
#define PNFHHNFHKOE_MNGOOLNMHGJ_OFFSET UNITYSDK_OFFSET(0xC336B00)
#define PNFHHNFHKOE_MPBEJOBDAME_OFFSET UNITYSDK_OFFSET(0xC337000)
#define PNFHHNFHKOE_NINDHOGICJD_OFFSET UNITYSDK_OFFSET(0xC337CF0)
#define PNFHHNFHKOE_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0xC336C20)
#define PNFHHNFHKOE_TICK_OFFSET UNITYSDK_OFFSET(0xC3370E0)

	class PNFHHNFHKOE : public ::RPG::Client::TABehaviorBase
	{
	public:
		::InteractProxy* LHEDMOOLMJE; // 0x38
		::WaterInteractor* DILGJEAEKGL; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_PCNAKDOLCCD_OFFSET))(this);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_MFCDKJIHDEH_OFFSET))(this);
		}

		::System::Void CGEJMGFOLMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_CGEJMGFOLMP_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_TICK_OFFSET))(this, a1);
		}

		::System::Void MNGOOLNMHGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_MNGOOLNMHGJ_OFFSET))(this);
		}

		::System::Void GMEDBNAABDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_GMEDBNAABDC_OFFSET))(this);
		}

		::System::Void ENAIBJGFMFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_ENAIBJGFMFI_OFFSET))(this);
		}

		::System::Void MPBEJOBDAME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_MPBEJOBDAME_OFFSET))(this);
		}

		::UnityEngine::Vector3 NINDHOGICJD()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_NINDHOGICJD_OFFSET))(this);
		}

		::System::Void IKOHLHDGFKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNFHHNFHKOE_IKOHLHDGFKH_OFFSET))(this);
		}

	};
