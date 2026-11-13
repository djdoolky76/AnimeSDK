#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/GJPBCNIIEOB_Mode.h"
class EBCNJEFOMCG;
class GEDMHFPPBHN;
class MADHNHEMBOJ;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define PMMJMFOEBPN_AEDGJNNBGEN_OFFSET UNITYSDK_OFFSET(0x1849AD90)
#define PMMJMFOEBPN_CTOR_OFFSET UNITYSDK_OFFSET(0x1849B070)
#define PMMJMFOEBPN_JINBNAIKBKK_OFFSET UNITYSDK_OFFSET(0x1849AFD0)
#define PMMJMFOEBPN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x1849AF50)
#define PMMJMFOEBPN__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1849ABB0)
#define PMMJMFOEBPN__ONBIND_OFFSET UNITYSDK_OFFSET(0x1849A7D0)
#define PMMJMFOEBPN__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1849AD40)
#define PMMJMFOEBPN__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1849AB00)

inline static constexpr unsigned int PMMJMFOEBPN_TypeDefinitionIndex = 73273;

	class PMMJMFOEBPN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* MDBBPBBMCEG; // 0x60
		::UnityEngine::Transform* DFKPFBCFOJJ; // 0x68
		::UnityEngine::Transform* AMJPKCBOLEK; // 0x70
		::UnityEngine::Transform* PGLBOIHNJPJ; // 0x78
		::UnityEngine::Animation* MBONPFHGDFB; // 0x80
		::UnityEngine::Transform* KMHLHECIMOF; // 0x88
		::EBCNJEFOMCG* FGPADGFFLIC; // 0x90
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x98
		::UnityEngine::Transform* HLADPKLGPEI; // 0xA0
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0xA8
		::System::Single DPLDFNFHAJL; // 0xAC
		::System::Boolean JIEJLKLFJOL; // 0xB0
		// static const ::System::String* NFENFKACJNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN__ONDISPOSE_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::GEDMHFPPBHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GEDMHFPPBHN*))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void AEDGJNNBGEN(::System::Boolean a1, ::GJPBCNIIEOB_Mode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::GJPBCNIIEOB_Mode))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_AEDGJNNBGEN_OFFSET))(this, a1, a2);
		}

		::System::Void JINBNAIKBKK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_JINBNAIKBKK_OFFSET))(this, a1);
		}

	};
