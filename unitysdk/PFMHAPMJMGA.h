#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoEffectPluginInitStateByTargetNormalizedTime; }
namespace UnityEngine { class MonoBehaviour; }

#define PFMHAPMJMGA_CTOR_OFFSET UNITYSDK_OFFSET(0x16D868A0)
#define PFMHAPMJMGA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16D86410)
#define PFMHAPMJMGA_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16D867F0)
#define PFMHAPMJMGA_KLIOBGEPFEH_OFFSET UNITYSDK_OFFSET(0x16D86480)
#define PFMHAPMJMGA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x16D863A0)
#define PFMHAPMJMGA_POPNLPIAOCM_OFFSET UNITYSDK_OFFSET(0x16D86860)

inline static constexpr unsigned int PFMHAPMJMGA_TypeDefinitionIndex = 71841;

	class PFMHAPMJMGA : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_DISPOSE_OFFSET))(this);
		}

		::System::Void KLIOBGEPFEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_KLIOBGEPFEH_OFFSET))(this);
		}

		::System::Void POPNLPIAOCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_POPNLPIAOCM_OFFSET))(this);
		}

		::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoEffectPluginInitStateByTargetNormalizedTime*(*)(::PVOID))((::PBYTE)hIl2Cpp + PFMHAPMJMGA_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
