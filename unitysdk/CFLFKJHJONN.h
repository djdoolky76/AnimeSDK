#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoBackDynamicControl; }
namespace UnityEngine { class MonoBehaviour; }

#define CFLFKJHJONN_CTOR_OFFSET UNITYSDK_OFFSET(0x178251F0)
#define CFLFKJHJONN_GLKEDFBMNAA_OFFSET UNITYSDK_OFFSET(0x17823630)
#define CFLFKJHJONN_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x17823FB0)
#define CFLFKJHJONN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x17825150)
#define CFLFKJHJONN_IJLOOFFCKNE_OFFSET UNITYSDK_OFFSET(0x178251C0)
#define CFLFKJHJONN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x178235B0)
#define CFLFKJHJONN_MHELFDMJDPM_OFFSET UNITYSDK_OFFSET(0x17823FF0)

inline static constexpr unsigned int CFLFKJHJONN_TypeDefinitionIndex = 72334;

	class CFLFKJHJONN : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single PJILFGCDHLB; // 0x18
		::System::Single ELJGNKPDIIA; // 0x1C
		::System::Single KMNAGAEOEHM; // 0x20
		::System::Single EKCHCNIINGF; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CFLFKJHJONN_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void MHELFDMJDPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_MHELFDMJDPM_OFFSET))(this);
		}

		::System::Void GLKEDFBMNAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_GLKEDFBMNAA_OFFSET))(this);
		}

		::System::Single IJLOOFFCKNE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_IJLOOFFCKNE_OFFSET))(this);
		}

		::RPG::Client::MonoBackDynamicControl* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoBackDynamicControl*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFLFKJHJONN_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
