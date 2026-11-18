#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPBPGBNIDOK.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace UnityEngine { class GameObject; }

#define BBMEACCONNF_KEANAEFNDJP_CAGNNKLBOFL_OFFSET UNITYSDK_OFFSET(0x182261B0)
#define BBMEACCONNF_KEANAEFNDJP_GLKFMGHHJKG_OFFSET UNITYSDK_OFFSET(0x18225E00)
#define BBMEACCONNF_KEANAEFNDJP_JCPJDOIPKKI_OFFSET UNITYSDK_OFFSET(0x182261A0)
#define BBMEACCONNF_KEANAEFNDJP_NFAEDMAHNLE_1_OFFSET UNITYSDK_OFFSET(0x182261C0)
#define BBMEACCONNF_KEANAEFNDJP_NFAEDMAHNLE_OFFSET UNITYSDK_OFFSET(0x18225CF0)
#define BBMEACCONNF_KEANAEFNDJP_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x18226010)
#define BBMEACCONNF_KEANAEFNDJP__CTOR_OFFSET UNITYSDK_OFFSET(0x18225CE0)

inline static constexpr unsigned int BBMEACCONNF_KEANAEFNDJP_TypeDefinitionIndex = 47186;

class BBMEACCONNF_KEANAEFNDJP : public ::System::Object
{
public:
	::UnityEngine::GameObject* JFANPGDNHDI; // 0x10
	::MoleMole::Battle::Entity* MPEMJGDJDEJ; // 0x18
	::KPBPGBNIDOK GEFOCNMCNJA; // 0x20
	::System::Boolean _CEKOKOHHDEM_k__BackingField; // 0x24

	::System::Void _ctor(::UnityEngine::GameObject* HIBFPDOBPGE)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP__CTOR_OFFSET))(this, HIBFPDOBPGE);
	}

	::System::Void NFAEDMAHNLE(::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_NFAEDMAHNLE_OFFSET))(this, KECKGDFIALJ, KKOGCPPLPNJ);
	}

	::System::Void GLKFMGHHJKG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_GLKFMGHHJKG_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void JCPJDOIPKKI(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_JCPJDOIPKKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean CAGNNKLBOFL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_CAGNNKLBOFL_OFFSET))(this);
	}

	::System::Void NFAEDMAHNLE_1(::System::Int32 AELLPLBJELA, ::MoleMole::Battle::Entity* KECKGDFIALJ, ::KPBPGBNIDOK KKOGCPPLPNJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::Battle::Entity*, ::KPBPGBNIDOK))((::PBYTE)hIl2Cpp + BBMEACCONNF_KEANAEFNDJP_NFAEDMAHNLE_1_OFFSET))(this, AELLPLBJELA, KECKGDFIALJ, KKOGCPPLPNJ);
	}
};
