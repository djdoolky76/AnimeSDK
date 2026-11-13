#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class MonoLightRandomCoontrol; }
namespace UnityEngine { class Light; }
namespace UnityEngine { class MonoBehaviour; }

#define OKNPMFIPGGK_CTOR_OFFSET UNITYSDK_OFFSET(0x17890720)
#define OKNPMFIPGGK_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0x17890110)
#define OKNPMFIPGGK_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0x178900A0)
#define OKNPMFIPGGK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1788FD20)

inline static constexpr unsigned int OKNPMFIPGGK_TypeDefinitionIndex = 72340;

	class OKNPMFIPGGK : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::Light* BGBEABCKMJG; // 0x18
		::System::Single PPMKCDLJGJM; // 0x20
		::System::Single NEGLJGAODBN; // 0x24
		::System::Int32 LDCBNKNFILD; // 0x28
		::System::Single FGFAKKLGAPD; // 0x2C
		::System::Single HHLGLKKIEBD; // 0x30
		::System::Int32 NMJJJIMHKOG; // 0x34
		::System::Single EFLJDLDCFPM; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNPMFIPGGK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + OKNPMFIPGGK_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNPMFIPGGK_HBOHKIPCHHE_OFFSET))(this);
		}

		::RPG::Client::MonoLightRandomCoontrol* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::MonoLightRandomCoontrol*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKNPMFIPGGK_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
