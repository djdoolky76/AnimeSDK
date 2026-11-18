#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MonoEffectPluginBase.h"
#include "unitysdk/MoleMole/MonoEffectPluginHitWall_ICFNMANCOJC.h"
#include "unitysdk/MoleMole/MonoEffectPluginHitWall_JJEHPDNLLNN.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/MoleMole/Config/Vector3Range.h"

#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_CALCHITDIR_OFFSET UNITYSDK_OFFSET(0x180FB040)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_GET_EFFECTLENGTH_OFFSET UNITYSDK_OFFSET(0x180FAF20)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL_PDGGCCLJJBG_OFFSET UNITYSDK_OFFSET(0x180FB3C0)
#define MOLEMOLE_MONOEFFECTPLUGINHITWALL__CTOR_OFFSET UNITYSDK_OFFSET(0x180FB360)

namespace MoleMole
{
	inline static constexpr unsigned int MonoEffectPluginHitWall_TypeDefinitionIndex = 79559;

	class MonoEffectPluginHitWall : public ::MoleMole::MonoEffectPluginBase
	{
	public:
		::MoleMole::MonoEffectPluginHitWall_ICFNMANCOJC strategy; // 0x18
		::System::Int32 updateCounter; // 0x1C
		::UnityEngine::Vector3 effectStart; // 0x20
		::UnityEngine::Vector3 effectStop; // 0x2C
		::MoleMole::MonoEffectPluginHitWall_JJEHPDNLLNN applyAxis; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL__CTOR_OFFSET))(this);
		}

		::System::Single get_EffectLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_GET_EFFECTLENGTH_OFFSET))(this);
		}

		::System::Void CalcHitDir(::UnityEngine::Vector3 LBKMCOKBJEA, ::MoleMole::Config::Vector3Range LNJFKBBFABK)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::Vector3Range))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_CALCHITDIR_OFFSET))(this, LBKMCOKBJEA, LNJFKBBFABK);
		}

		::System::Void PDGGCCLJJBG(::UnityEngine::Vector3 FEKJMJOPFJC, ::UnityEngine::Vector3 JCPNDFAEOLI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOEFFECTPLUGINHITWALL_PDGGCCLJJBG_OFFSET))(this, FEKJMJOPFJC, JCPNDFAEOLI);
		}
	};
}
