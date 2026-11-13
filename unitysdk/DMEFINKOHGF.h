#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BloodFlowDrawInstance;
class BloodFlowManager;
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define DMEFINKOHGF_CIAHFOIFEND_OFFSET UNITYSDK_OFFSET(0x18693870)
#define DMEFINKOHGF_CTOR_OFFSET UNITYSDK_OFFSET(0x18694860)
#define DMEFINKOHGF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x186947F0)
#define DMEFINKOHGF_FHIEEILJDNK_OFFSET UNITYSDK_OFFSET(0x18692800)
#define DMEFINKOHGF_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x18692FC0)
#define DMEFINKOHGF_HHIOOCGDDNP_OFFSET UNITYSDK_OFFSET(0x186940C0)
#define DMEFINKOHGF_HOEBONCNFEC_OFFSET UNITYSDK_OFFSET(0x18694570)
#define DMEFINKOHGF_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x18692790)
#define DMEFINKOHGF_KFMIFIIGDBP_OFFSET UNITYSDK_OFFSET(0x18694700)
#define DMEFINKOHGF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18692220)
#define DMEFINKOHGF_PBHOCKCFLAM_OFFSET UNITYSDK_OFFSET(0x18693210)

inline static constexpr unsigned int DMEFINKOHGF_TypeDefinitionIndex = 72326;

	class DMEFINKOHGF : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Bounds NMIECBBDMOF; // 0x18
		::UnityEngine::Vector3 KFEJGBAKKEF; // 0x30
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
