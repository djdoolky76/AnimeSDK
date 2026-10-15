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

#define PMMJMFOEBPN_AEDGJNNBGEN_OFFSET UNITYSDK_OFFSET(0xC320080)
#define PMMJMFOEBPN_CTOR_OFFSET UNITYSDK_OFFSET(0xC320380)
#define PMMJMFOEBPN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC31FDF0)
#define PMMJMFOEBPN_JINBNAIKBKK_OFFSET UNITYSDK_OFFSET(0xC3202E0)
#define PMMJMFOEBPN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC31FEB0)
#define PMMJMFOEBPN_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xC320250)
#define PMMJMFOEBPN__ONBIND_OFFSET UNITYSDK_OFFSET(0xC31FB10)
#define PMMJMFOEBPN__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC320030)

inline static constexpr unsigned int PMMJMFOEBPN_TypeDefinitionIndex = 71296;

	class PMMJMFOEBPN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* KMHLHECIMOF; // 0x60
		::MADHNHEMBOJ* PKIGHMIMJLF; // 0x68
		::UnityEngine::Transform* HLADPKLGPEI; // 0x70
		::UnityEngine::Transform* AMJPKCBOLEK; // 0x78
		::UnityEngine::Transform* DFKPFBCFOJJ; // 0x80
		::UnityEngine::Animation* MBONPFHGDFB; // 0x88
		::UnityEngine::Transform* MDBBPBBMCEG; // 0x90
		::UnityEngine::Transform* PGLBOIHNJPJ; // 0x98
		::EBCNJEFOMCG* FGPADGFFLIC; // 0xA0
		::System::Boolean JIEJLKLFJOL; // 0xA8
		::System::Byte _padding0[0x3];
		::GJPBCNIIEOB_Mode BHJDJDPLCLP; // 0xAC
		::System::Single DPLDFNFHAJL; // 0xB0
		// static const ::System::String* NFENFKACJNL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMMJMFOEBPN_NIJJPBOIGBI_OFFSET))(this);
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
