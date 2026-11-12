#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class MonoRandomOffsetScale; }
namespace UnityEngine { class MonoBehaviour; }

#define JFOKKAGGJLO_APGLMKNOCEK_OFFSET UNITYSDK_OFFSET(0xB9A4E30)
#define JFOKKAGGJLO_CTOR_OFFSET UNITYSDK_OFFSET(0xB9A56B0)
#define JFOKKAGGJLO_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xB9A4CB0)
#define JFOKKAGGJLO_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xB9A4DC0)
#define JFOKKAGGJLO_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB9A4C10)

inline static constexpr unsigned int JFOKKAGGJLO_TypeDefinitionIndex = 72343;

	class JFOKKAGGJLO : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single DKOBAIALBPJ; // 0x18
		::UnityEngine::Vector3 HOOJPIALFLO; // 0x1C
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
