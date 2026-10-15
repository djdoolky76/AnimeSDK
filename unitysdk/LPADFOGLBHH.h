#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMEOMKNPNCC.h"
#include "unitysdk/RPG/GameCore/AdventureUAVFlyingProxyType.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define LPADFOGLBHH_BLNOAHMFCCK_OFFSET UNITYSDK_OFFSET(0xB8158E0)
#define LPADFOGLBHH_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0xB814410)
#define LPADFOGLBHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB813F30)
#define LPADFOGLBHH_DCJOBPKKIDB_OFFSET UNITYSDK_OFFSET(0xB8141C0)
#define LPADFOGLBHH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB815CB0)
#define LPADFOGLBHH_GAFDAEFNDHC_OFFSET UNITYSDK_OFFSET(0xB814800)
#define LPADFOGLBHH_GET_MOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xB813F10)
#define LPADFOGLBHH_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0xB813F00)
#define LPADFOGLBHH_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0xB814570)
#define LPADFOGLBHH_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0xB814130)
#define LPADFOGLBHH_SET_MOVESPEEDRATIO_OFFSET UNITYSDK_OFFSET(0xB813F20)

	class LPADFOGLBHH : public ::KMEOMKNPNCC
	{
	public:
		::System::Single _MoveSpeedRatio_k__BackingField; // 0x168
		::RPG::GameCore::AdventureUAVFlyingProxyType GCPLCNLPMGF; // 0x16C
		// static const ::System::Object OADDOIFOGON; // 0x0
		// static const ::System::Object APFHLKMLHKI; // 0x0
		// static const ::System::Object HAOBIPNJAAC; // 0x0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1, ::RPG::GameCore::AdventureUAVFlyingProxyType a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::RPG::GameCore::AdventureUAVFlyingProxyType, ::System::Boolean))((::PBYTE)hIl2Cpp + LPADFOGLBHH_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_RequireStandOnGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADFOGLBHH_GET_REQUIRESTANDONGROUND_OFFSET))(this);
		}

		::System::Single get_MoveSpeedRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADFOGLBHH_GET_MOVESPEEDRATIO_OFFSET))(this);
		}

		::System::Void set_MoveSpeedRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LPADFOGLBHH_SET_MOVESPEEDRATIO_OFFSET))(this, a1);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + LPADFOGLBHH_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 DCJOBPKKIDB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPADFOGLBHH_DCJOBPKKIDB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LPADFOGLBHH_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Void KHIMHKPIMGJ(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LPADFOGLBHH_KHIMHKPIMGJ_OFFSET))(this, a1);
		}

		::System::Void GAFDAEFNDHC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LPADFOGLBHH_GAFDAEFNDHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADFOGLBHH_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Vector3 BLNOAHMFCCK(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + LPADFOGLBHH_BLNOAHMFCCK_OFFSET))(this, a1, a2);
		}

	};
