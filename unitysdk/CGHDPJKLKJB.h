#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BehaviorBase.h"
namespace RPG::Client { class Effect_RunePositionPaster; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MonoBehaviour; }

#define CGHDPJKLKJB_CTOR_OFFSET UNITYSDK_OFFSET(0xCC837A0)
#define CGHDPJKLKJB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC83490)
#define CGHDPJKLKJB_GFNHBILDNFJ_OFFSET UNITYSDK_OFFSET(0xCC83430)
#define CGHDPJKLKJB_GHLBGCJMCGP_OFFSET UNITYSDK_OFFSET(0xCC83550)
#define CGHDPJKLKJB_HBOHKIPCHHE_OFFSET UNITYSDK_OFFSET(0xCC83500)
#define CGHDPJKLKJB_HPNDIIPEFLJ_OFFSET UNITYSDK_OFFSET(0xCC83750)
#define CGHDPJKLKJB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCC83360)

inline static constexpr unsigned int CGHDPJKLKJB_TypeDefinitionIndex = 70365;

	class CGHDPJKLKJB : public ::RPG::Client::BehaviorBase
	{
	public:
		::UnityEngine::MaterialPropertyBlock* GCGIDIIPDBC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::UnityEngine::MonoBehaviour* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::MonoBehaviour*))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_DISPOSE_OFFSET))(this);
		}

		::System::Void HBOHKIPCHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_HBOHKIPCHHE_OFFSET))(this);
		}

		::System::Void GFNHBILDNFJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_GFNHBILDNFJ_OFFSET))(this);
		}

		::System::Void GHLBGCJMCGP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_GHLBGCJMCGP_OFFSET))(this);
		}

		::RPG::Client::Effect_RunePositionPaster* HPNDIIPEFLJ()
		{
			return ((::RPG::Client::Effect_RunePositionPaster*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGHDPJKLKJB_HPNDIIPEFLJ_OFFSET))(this);
		}

	};
