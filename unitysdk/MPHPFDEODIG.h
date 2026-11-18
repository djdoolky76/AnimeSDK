#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define MPHPFDEODIG_BMIJOPPPAIE_OFFSET UNITYSDK_OFFSET(0x192114F0)
#define MPHPFDEODIG_CIODNCMDMDN_OFFSET UNITYSDK_OFFSET(0x19210F10)
#define MPHPFDEODIG_CLEAN_OFFSET UNITYSDK_OFFSET(0x19210FD0)
#define MPHPFDEODIG_CNECMBJOKGP_OFFSET UNITYSDK_OFFSET(0x192114E0)
#define MPHPFDEODIG_DLJECPGNHJJ_OFFSET UNITYSDK_OFFSET(0x192111B0)
#define MPHPFDEODIG_ENNIIACOGBE_OFFSET UNITYSDK_OFFSET(0x19211470)
#define MPHPFDEODIG_LLLGCIAFLKJ_OFFSET UNITYSDK_OFFSET(0x19211020)
#define MPHPFDEODIG_NMJJDFFIDIM_OFFSET UNITYSDK_OFFSET(0x192111A0)
#define MPHPFDEODIG_ODLLAHNHCDD_OFFSET UNITYSDK_OFFSET(0x19210F80)
#define MPHPFDEODIG_OKMEFGGMPFG_OFFSET UNITYSDK_OFFSET(0x19211480)
#define MPHPFDEODIG__CTOR_1_OFFSET UNITYSDK_OFFSET(0x19210F70)
#define MPHPFDEODIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19210EB0)

inline static constexpr unsigned int MPHPFDEODIG_TypeDefinitionIndex = 86749;

class MPHPFDEODIG : public ::System::Object
{
public:
	::UnityEngine::Transform* _CAMJANMFLDA_k__BackingField; // 0x10
	::UnityEngine::GameObject* _HKKABOKEDOG_k__BackingField; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MPHPFDEODIG__CTOR_OFFSET))(this, JEIDPPCEHLD);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPFDEODIG__CTOR_1_OFFSET))(this);
	}

	::System::Void ODLLAHNHCDD(::System::Boolean EGEGIMGMJHN, ::System::Boolean HHBFNJMGNGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MPHPFDEODIG_ODLLAHNHCDD_OFFSET))(this, EGEGIMGMJHN, HHBFNJMGNGD);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPFDEODIG_CLEAN_OFFSET))(this);
	}

	::System::Boolean LLLGCIAFLKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPFDEODIG_LLLGCIAFLKJ_OFFSET))(this);
	}

	::System::Void CIODNCMDMDN(::UnityEngine::GameObject* JEIDPPCEHLD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MPHPFDEODIG_CIODNCMDMDN_OFFSET))(this, JEIDPPCEHLD);
	}

	::UnityEngine::GameObject* NMJJDFFIDIM()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPFDEODIG_NMJJDFFIDIM_OFFSET))(this);
	}

	::System::Void DLJECPGNHJJ(::System::Boolean EGEGIMGMJHN, ::System::Boolean HHBFNJMGNGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MPHPFDEODIG_DLJECPGNHJJ_OFFSET))(this, EGEGIMGMJHN, HHBFNJMGNGD);
	}

	::UnityEngine::Transform* ENNIIACOGBE()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MPHPFDEODIG_ENNIIACOGBE_OFFSET))(this);
	}

	::System::Void OKMEFGGMPFG(::System::Boolean FIPHFGHNNBE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MPHPFDEODIG_OKMEFGGMPFG_OFFSET))(this, FIPHFGHNNBE);
	}

	::System::Void CNECMBJOKGP(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MPHPFDEODIG_CNECMBJOKGP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BMIJOPPPAIE(::UnityEngine::GameObject* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MPHPFDEODIG_BMIJOPPPAIE_OFFSET))(this, EGEGIMGMJHN);
	}
};
