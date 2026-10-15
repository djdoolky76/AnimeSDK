#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BloodFlowDrawInstance;
class BloodFlowManager;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define DMEFINKOHGF_CIAHFOIFEND_OFFSET UNITYSDK_OFFSET(0xFEBC430)
#define DMEFINKOHGF_CTOR_OFFSET UNITYSDK_OFFSET(0xFEBD420)
#define DMEFINKOHGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0xFEBD3B0)
#define DMEFINKOHGF_FHIEEILJDNK_OFFSET UNITYSDK_OFFSET(0xFEBB3C0)
#define DMEFINKOHGF_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xFEBBB80)
#define DMEFINKOHGF_HHIOOCGDDNP_OFFSET UNITYSDK_OFFSET(0xFEBCC80)
#define DMEFINKOHGF_HOEBONCNFEC_OFFSET UNITYSDK_OFFSET(0xFEBD130)
#define DMEFINKOHGF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xFEBB350)
#define DMEFINKOHGF_KFMIFIIGDBP_OFFSET UNITYSDK_OFFSET(0xFEBD2C0)
#define DMEFINKOHGF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xFEBADE0)
#define DMEFINKOHGF_PBHOCKCFLAM_OFFSET UNITYSDK_OFFSET(0xFEBBDD0)

	class DMEFINKOHGF : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x18
		::UnityEngine::Bounds NMIECBBDMOF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + DMEFINKOHGF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void FHIEEILJDNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_FHIEEILJDNK_OFFSET))(this);
		}

		::System::Void CIAHFOIFEND(::BloodFlowDrawInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*))((::PBYTE)hIl2Cpp + DMEFINKOHGF_CIAHFOIFEND_OFFSET))(this, a1);
		}

		::System::Single HHIOOCGDDNP(::UnityEngine::Transform* a1)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + DMEFINKOHGF_HHIOOCGDDNP_OFFSET))(this, a1);
		}

		::System::Void PBHOCKCFLAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_PBHOCKCFLAM_OFFSET))(this);
		}

		::System::Void HOEBONCNFEC(::BloodFlowDrawInstance* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + DMEFINKOHGF_HOEBONCNFEC_OFFSET))(this, a1, a2);
		}

		::System::Void KFMIFIIGDBP(::BloodFlowDrawInstance* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::BloodFlowDrawInstance*, ::System::Single))((::PBYTE)hIl2Cpp + DMEFINKOHGF_KFMIFIIGDBP_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_DISPOSE_OFFSET))(this);
		}

		::BloodFlowManager* HPNDIIPEFLJ()
		{
			return ((::BloodFlowManager*(*)(::PVOID))((::PBYTE)hIl2Cpp + DMEFINKOHGF_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
