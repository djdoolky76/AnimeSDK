#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoRandomOffsetScale; }
namespace UnityEngine { class MonoBehaviour; }

#define JFOKKAGGJLO_APGLMKNOCEK_OFFSET UNITYSDK_OFFSET(0x16647AE0)
#define JFOKKAGGJLO_CTOR_OFFSET UNITYSDK_OFFSET(0x16648360)
#define JFOKKAGGJLO_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x16647960)
#define JFOKKAGGJLO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x16647A70)
#define JFOKKAGGJLO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x166478C0)

inline static constexpr unsigned int JFOKKAGGJLO_TypeDefinitionIndex = 70376;

	class JFOKKAGGJLO : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Vector3 HOOJPIALFLO; // 0x18
		::System::Single DKOBAIALBPJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOKKAGGJLO_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + JFOKKAGGJLO_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOKKAGGJLO_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void APGLMKNOCEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOKKAGGJLO_APGLMKNOCEK_OFFSET))(this);
		}

		::RPG::Client::MonoRandomOffsetScale* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoRandomOffsetScale*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFOKKAGGJLO_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
