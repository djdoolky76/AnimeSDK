#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class Effect_LineRenderer; }
namespace System { class String; }
namespace UnityEngine { class MonoBehaviour; }
namespace UnityEngine { class Transform; }

#define MIBINCLECCE_CTOR_OFFSET UNITYSDK_OFFSET(0xB94E150)
#define MIBINCLECCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB94E0E0)
#define MIBINCLECCE_HCCKBPDFINA_OFFSET UNITYSDK_OFFSET(0xB94D6F0)
#define MIBINCLECCE_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB94D680)
#define MIBINCLECCE_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB94CFD0)
#define MIBINCLECCE_PODHAFACFLO_OFFSET UNITYSDK_OFFSET(0xB94DE20)

inline static constexpr unsigned int MIBINCLECCE_TypeDefinitionIndex = 47444;

	class MIBINCLECCE : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBINCLECCE_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + MIBINCLECCE_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HCCKBPDFINA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIBINCLECCE_HCCKBPDFINA_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* PODHAFACFLO(::System::String* a1)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MIBINCLECCE_PODHAFACFLO_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBINCLECCE_DISPOSE_OFFSET))(this);
		}

		::RPG::Client::Effect_LineRenderer* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_LineRenderer*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBINCLECCE_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
