#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoBackDynamicControl; }
namespace UnityEngine { class MonoBehaviour; }

#define CFLFKJHJONN_CTOR_OFFSET UNITYSDK_OFFSET(0xCC51930)
#define CFLFKJHJONN_GLKEDFBMNAA_OFFSET UNITYSDK_OFFSET(0xCC4FD70)
#define CFLFKJHJONN_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xCC506F0)
#define CFLFKJHJONN_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCC51890)
#define CFLFKJHJONN_IJLOOFFCKNE_OFFSET UNITYSDK_OFFSET(0xCC51900)
#define CFLFKJHJONN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC4FCF0)
#define CFLFKJHJONN_MHELFDMJDPM_OFFSET UNITYSDK_OFFSET(0xCC50730)

	class CFLFKJHJONN : public ::RPG::Client::BehaviorBase
	{
	public:
		::System::Single KMNAGAEOEHM; // 0x18
		::System::Single PJILFGCDHLB; // 0x1C
		::System::Single EKCHCNIINGF; // 0x20
		::System::Single ELJGNKPDIIA; // 0x24
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
