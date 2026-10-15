#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NOBBAHKMNDK.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterInputData; }
namespace UnityEngine { class CapsuleCollider; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Rigidbody; }

#define JPHCGLNOHHL_AOOHBEHLAEG_OFFSET UNITYSDK_OFFSET(0xB2B8150)
#define JPHCGLNOHHL_BGEBNMOEDEE_OFFSET UNITYSDK_OFFSET(0xB2B70D0)
#define JPHCGLNOHHL_BPMMLAJPPMH_OFFSET UNITYSDK_OFFSET(0xB2B7C00)
#define JPHCGLNOHHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB2B7040)
#define JPHCGLNOHHL_DCJOBPKKIDB_OFFSET UNITYSDK_OFFSET(0xB2B7120)
#define JPHCGLNOHHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB2B8100)
#define JPHCGLNOHHL_GET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0xB2B8200)
#define JPHCGLNOHHL_GET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0xB2B8220)
#define JPHCGLNOHHL_GET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0xB2B81E0)
#define JPHCGLNOHHL_GET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0xB2B8240)
#define JPHCGLNOHHL_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0xB2B8280)
#define JPHCGLNOHHL_LAJIJKAIKEE_OFFSET UNITYSDK_OFFSET(0xB2B7060)
#define JPHCGLNOHHL_SET_KINEMATICACCELERATION_OFFSET UNITYSDK_OFFSET(0xB2B8210)
#define JPHCGLNOHHL_SET_KINEMATICDECELERATION_OFFSET UNITYSDK_OFFSET(0xB2B8230)
#define JPHCGLNOHHL_SET_KINEMATICSPEED_OFFSET UNITYSDK_OFFSET(0xB2B81F0)
#define JPHCGLNOHHL_SET_KINEMATICVELOCITY_OFFSET UNITYSDK_OFFSET(0xB2B8260)
#define JPHCGLNOHHL_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET UNITYSDK_OFFSET(0xB2B8290)

inline static constexpr unsigned int JPHCGLNOHHL_TypeDefinitionIndex = 57104;

	class JPHCGLNOHHL : public ::NOBBAHKMNDK
	{
	public:
		::System::Single _KinematicSpeed_k__BackingField; // 0x188
		::System::Single _KinematicAcceleration_k__BackingField; // 0x18C
		::System::Nullable_1<::UnityEngine::Vector3> _OverrideMoveDeltaVector_k__BackingField; // 0x190
		::System::Byte _padding0[0x8];
		::UnityEngine::Vector3 _KinematicVelocity_k__BackingField; // 0x1A0
		::System::Single _KinematicDeceleration_k__BackingField; // 0x1AC
		::System::Void _ctor(::RPG::GameCore::AdventureCharacterController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_CTOR_OFFSET))(this, a1);
		}

		::System::Void LAJIJKAIKEE(::UnityEngine::GameObject* a1, ::UnityEngine::Rigidbody* a2, ::UnityEngine::CapsuleCollider* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Rigidbody*, ::UnityEngine::CapsuleCollider*))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_LAJIJKAIKEE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BGEBNMOEDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_BGEBNMOEDEE_OFFSET))(this);
		}

		::UnityEngine::Vector3 DCJOBPKKIDB(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_DCJOBPKKIDB_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 BPMMLAJPPMH(::RPG::GameCore::CharacterInputData* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::GameCore::CharacterInputData*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_BPMMLAJPPMH_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_DISPOSE_OFFSET))(this);
		}

		::System::Void AOOHBEHLAEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_AOOHBEHLAEG_OFFSET))(this);
		}

		::System::Single get_KinematicSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_GET_KINEMATICSPEED_OFFSET))(this);
		}

		::System::Void set_KinematicSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_SET_KINEMATICSPEED_OFFSET))(this, a1);
		}

		::System::Single get_KinematicAcceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_GET_KINEMATICACCELERATION_OFFSET))(this);
		}

		::System::Void set_KinematicAcceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_SET_KINEMATICACCELERATION_OFFSET))(this, a1);
		}

		::System::Single get_KinematicDeceleration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_GET_KINEMATICDECELERATION_OFFSET))(this);
		}

		::System::Void set_KinematicDeceleration(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_SET_KINEMATICDECELERATION_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_KinematicVelocity()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_GET_KINEMATICVELOCITY_OFFSET))(this);
		}

		::System::Void set_KinematicVelocity(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_SET_KINEMATICVELOCITY_OFFSET))(this, a1);
		}

		::System::Nullable_1<::UnityEngine::Vector3> get_OverrideMoveDeltaVector()
		{
			return ((::System::Nullable_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_GET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this);
		}

		::System::Void set_OverrideMoveDeltaVector(::System::Nullable_1<::UnityEngine::Vector3> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable_1<::UnityEngine::Vector3>))((::PBYTE)hIl2Cpp + JPHCGLNOHHL_SET_OVERRIDEMOVEDELTAVECTOR_OFFSET))(this, a1);
		}

	};
