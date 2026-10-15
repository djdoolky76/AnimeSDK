#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/EnviroCharaType.h"
#include "unitysdk/RPG/CustomRP/EObjectFeature.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_CTOR_OFFSET UNITYSDK_OFFSET(0xD85F370)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_DIPJEIDGKJN_OFFSET UNITYSDK_OFFSET(0xD85F210)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_HIKEHGFJNEP_OFFSET UNITYSDK_OFFSET(0xD85EFE0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_LLMDNCAOCDN_OFFSET UNITYSDK_OFFSET(0xD85F0B0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD85F320)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONENABLE_OFFSET UNITYSDK_OFFSET(0xD85F2C0)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_REFRESH_OFFSET UNITYSDK_OFFSET(0xD85EF70)
#define RPG_CLIENT_MONORENDERPERFOPTINDICATOR_SETRENDERERLAYERMASKWITHPOSM_OFFSET UNITYSDK_OFFSET(0xD85EE20)

namespace RPG::Client
{
	class MonoRenderPerfOptIndicator : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Boolean IsSceneObject; // 0x18
		::System::Boolean NeedShadow; // 0x19
		::System::Boolean IsFrequencyMove; // 0x1A
		::System::Boolean OverrideShadowExtent; // 0x1B
		::System::Single ShadowExtent; // 0x1C
		::System::Int32 POSMPriority; // 0x20
		::System::Boolean ShadowProbe; // 0x24
		::System::Boolean OverridePosition; // 0x25
		::System::Byte _padding0[0x2];
		::RPG::Client::EnviroCharaType EnviroChara; // 0x28
		::RPG::CustomRP::EObjectFeature OFAACLMDJHG; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_CTOR_OFFSET))(this);
		}

		::System::Void SetRendererLayerMaskWithPOSM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_SETRENDERERLAYERMASKWITHPOSM_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_REFRESH_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_ONDISABLE_OFFSET))(this);
		}

		::System::Void LLMDNCAOCDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_LLMDNCAOCDN_OFFSET))(this);
		}

		::System::Void DIPJEIDGKJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_DIPJEIDGKJN_OFFSET))(this);
		}

		::System::Void HIKEHGFJNEP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONORENDERPERFOPTINDICATOR_HIKEHGFJNEP_OFFSET))(this);
		}

	};
}
