#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class KPACKGEBECC_PCOPMKKBHBB;
namespace MoleMole::Battle { class ColliderEventDispatcher; }
namespace MoleMole::Battle { class CurveMoveComponent_TriggerConfig_ConfigCollider; }
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace UnityEngine { class Collider; }

#define KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_DKGBIKDMMMM_OFFSET UNITYSDK_OFFSET(0x163526C0)
#define KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_NHFHCJFBFMO_OFFSET UNITYSDK_OFFSET(0x16352340)
#define KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_NINMGDPIHHG_OFFSET UNITYSDK_OFFSET(0x16352630)
#define KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP__CTOR_OFFSET UNITYSDK_OFFSET(0x16352330)

inline static constexpr unsigned int KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_TypeDefinitionIndex = 51123;

class KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP : public ::System::Object
{
public:
	::MoleMole::Battle::Entity* KECKGDFIALJ; // 0x10
	::KPACKGEBECC_PCOPMKKBHBB* KLHPEBKNIFB; // 0x18
	::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* JEFGFMFKALA; // 0x20
	::MoleMole::Battle::CurveMoveComponent_TriggerConfig_ConfigCollider* HOGCDJNHHPC; // 0x28
	::System::Action_2<::UnityEngine::Collider*, ::MoleMole::Battle::Entity*>* AONNJBMOCOH; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP__CTOR_OFFSET))(this);
	}

	::System::Void NHFHCJFBFMO(::MoleMole::Battle::ColliderEventDispatcher* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ColliderEventDispatcher*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_NHFHCJFBFMO_OFFSET))(this, EHHHMFKHNAI);
	}

	::System::Void NINMGDPIHHG(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Object* CMDHMOMFAGC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_NINMGDPIHHG_OFFSET))(this, EHHHMFKHNAI, CMDHMOMFAGC);
	}

	::System::Void DKGBIKDMMMM(::UnityEngine::Collider* EHHHMFKHNAI, ::System::Object* CMDHMOMFAGC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*, ::System::Object*))((::PBYTE)hIl2Cpp + KPACKGEBECC_PCOPMKKBHBB_BAKPIICAHCP_DKGBIKDMMMM_OFFSET))(this, EHHHMFKHNAI, CMDHMOMFAGC);
	}
};
