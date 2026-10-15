#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KMEOMKNPNCC.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDEEGFCFOCG;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace System { class Action; }
namespace System { class Nullable; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define NOBBAHKMNDK_AOOHBEHLAEG_OFFSET UNITYSDK_OFFSET(0xBCE4670)
#define NOBBAHKMNDK_BGEBNMOEDEE_OFFSET UNITYSDK_OFFSET(0xBCE1010)
#define NOBBAHKMNDK_BLNOAHMFCCK_OFFSET UNITYSDK_OFFSET(0xBCE3DC0)
#define NOBBAHKMNDK_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0xBCE1F80)
#define NOBBAHKMNDK_CLCLJFEAAMD_OFFSET UNITYSDK_OFFSET(0xBCE2680)
#define NOBBAHKMNDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCE0C50)
#define NOBBAHKMNDK_DCJOBPKKIDB_OFFSET UNITYSDK_OFFSET(0xBCE1350)
#define NOBBAHKMNDK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBCE4190)
#define NOBBAHKMNDK_EMBGELOMKDJ_OFFSET UNITYSDK_OFFSET(0xBCE4500)
#define NOBBAHKMNDK_EOMLOGPIMKO_OFFSET UNITYSDK_OFFSET(0xBCE24C0)
#define NOBBAHKMNDK_FBGOBNIIOJO_OFFSET UNITYSDK_OFFSET(0xBCE1E30)
#define NOBBAHKMNDK_FCHLEBPLAAE_OFFSET UNITYSDK_OFFSET(0xBCE12E0)
#define NOBBAHKMNDK_GAFDAEFNDHC_OFFSET UNITYSDK_OFFSET(0xBCE2B00)
#define NOBBAHKMNDK_GET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBCE4750)
#define NOBBAHKMNDK_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0xBCE4860)
#define NOBBAHKMNDK_GET_REQUIRESTANDONGROUND_OFFSET UNITYSDK_OFFSET(0xBCE4790)
#define NOBBAHKMNDK_GET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0xBCE4840)
#define NOBBAHKMNDK_GET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0xBCE4770)
#define NOBBAHKMNDK_IKGFOCFLHAF_OFFSET UNITYSDK_OFFSET(0xBCE46B0)
#define NOBBAHKMNDK_JHJMDMMKGOJ_OFFSET UNITYSDK_OFFSET(0xBCE47A0)
#define NOBBAHKMNDK_KHIMHKPIMGJ_OFFSET UNITYSDK_OFFSET(0xBCE2820)
#define NOBBAHKMNDK_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0xBCE0D20)
#define NOBBAHKMNDK_NNKOCEMFMNF_OFFSET UNITYSDK_OFFSET(0xBCE4270)
#define NOBBAHKMNDK_NPPIPHCKHCC_OFFSET UNITYSDK_OFFSET(0xBCE2430)
#define NOBBAHKMNDK_SET_ONUPDATE_OFFSET UNITYSDK_OFFSET(0xBCE4760)
#define NOBBAHKMNDK_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET UNITYSDK_OFFSET(0xBCE4870)
#define NOBBAHKMNDK_SET_ROOTMOTIONSCALE_OFFSET UNITYSDK_OFFSET(0xBCE4850)
#define NOBBAHKMNDK_SET_USERIGIDBODY_OFFSET UNITYSDK_OFFSET(0xBCE4780)

	class NOBBAHKMNDK : public ::KMEOMKNPNCC
	{
	public:
		::System::Action* _OnUpdate_k__BackingField; // 0x168
		::KDEEGFCFOCG* MODCPGEJFOF; // 0x170
		::System::Nullable* _OverrideMoveDeltaPositionOtherDirectionConstraint_k__BackingField; // 0x178
		::System::Single _RootMotionScale_k__BackingField; // 0x180
		::System::Boolean _UseRigidbody_k__BackingField; // 0x184
		// static const ::System::Object OADDOIFOGON; // 0x0
		// static const ::System::Object APFHLKMLHKI; // 0x0
		// static const ::System::Object HAOBIPNJAAC; // 0x0
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_CTOR_OFFSET))(this, a1);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGEBNMOEDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_BGEBNMOEDEE_OFFSET))(this);
		}

		::System::Void FCHLEBPLAAE(::UnityEngine::Quaternion a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_FCHLEBPLAAE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DCJOBPKKIDB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_DCJOBPKKIDB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Void NPPIPHCKHCC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_NPPIPHCKHCC_OFFSET))(this, a1);
		}

		::System::Void EOMLOGPIMKO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_EOMLOGPIMKO_OFFSET))(this, a1);
		}

		::System::Void CLCLJFEAAMD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_CLCLJFEAAMD_OFFSET))(this, a1);
		}

		::System::Void KHIMHKPIMGJ(::UnityEngine::RaycastHit a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_KHIMHKPIMGJ_OFFSET))(this, a1);
		}

		::System::Void GAFDAEFNDHC(::UnityEngine::Vector3 a1, ::System::Boolean a2, ::UnityEngine::RaycastHit a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GAFDAEFNDHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_DISPOSE_OFFSET))(this);
		}

		::System::Void NNKOCEMFMNF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_NNKOCEMFMNF_OFFSET))(this, a1);
		}

		::System::Void EMBGELOMKDJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_EMBGELOMKDJ_OFFSET))(this, a1);
		}

		::System::Void AOOHBEHLAEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_AOOHBEHLAEG_OFFSET))(this);
		}

		::System::Void IKGFOCFLHAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_IKGFOCFLHAF_OFFSET))(this);
		}

		::UnityEngine::Vector3 BLNOAHMFCCK(::UnityEngine::Vector3 a1, ::UnityEngine::RaycastHit a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::RaycastHit))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_BLNOAHMFCCK_OFFSET))(this, a1, a2);
		}

		::System::Action* get_OnUpdate()
		{
			return ((::System::Action*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GET_ONUPDATE_OFFSET))(this);
		}

		::System::Void set_OnUpdate(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_SET_ONUPDATE_OFFSET))(this, a1);
		}

		::System::Boolean get_UseRigidbody()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GET_USERIGIDBODY_OFFSET))(this);
		}

		::System::Void set_UseRigidbody(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_SET_USERIGIDBODY_OFFSET))(this, a1);
		}

		::System::Boolean get_RequireStandOnGround()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GET_REQUIRESTANDONGROUND_OFFSET))(this);
		}

		::System::Boolean FBGOBNIIOJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_FBGOBNIIOJO_OFFSET))(this);
		}

		::UnityEngine::Vector3 JHJMDMMKGOJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_JHJMDMMKGOJ_OFFSET))(this);
		}

		::System::Single get_RootMotionScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GET_ROOTMOTIONSCALE_OFFSET))(this);
		}

		::System::Void set_RootMotionScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_SET_ROOTMOTIONSCALE_OFFSET))(this, a1);
		}

		::System::Nullable* get_OverrideMoveDeltaPositionOtherDirectionConstraint()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_GET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this);
		}

		::System::Void set_OverrideMoveDeltaPositionOtherDirectionConstraint(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + NOBBAHKMNDK_SET_OVERRIDEMOVEDELTAPOSITIONOTHERDIRECTIONCONSTRAINT_OFFSET))(this, a1);
		}

	};
