#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RootMotion/FinalIK/Grounder.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace RootMotion::FinalIK { class IK; }
namespace UnityEngine { class Rigidbody; }
namespace UnityEngine { class Transform; }

#define ROOTMOTION_FINALIK_GROUNDERIK_FORCEDISABLEPIPELINE_OFFSET UNITYSDK_OFFSET(0x1FC48290)
#define ROOTMOTION_FINALIK_GROUNDERIK_GET_GLOBALENABLED_OFFSET UNITYSDK_OFFSET(0x1FC47830)
#define ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET UNITYSDK_OFFSET(0x1FC48EA0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET UNITYSDK_OFFSET(0x1FC47ED0)
#define ROOTMOTION_FINALIK_GROUNDERIK_NEUTRALIZELEGIKWEIGHTS_OFFSET UNITYSDK_OFFSET(0x1FC48430)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1FC4A5A0)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1FC48680)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1FC48280)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC4A280)
#define ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET UNITYSDK_OFFSET(0x1FC49630)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET UNITYSDK_OFFSET(0x1FC478C0)
#define ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET UNITYSDK_OFFSET(0x1FC47870)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETGLOBALENABLED_OFFSET UNITYSDK_OFFSET(0x1FC47860)
#define ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET UNITYSDK_OFFSET(0x1FC47910)
#define ROOTMOTION_FINALIK_GROUNDERIK_SETGLOBALENABLED_OFFSET UNITYSDK_OFFSET(0x1FC47850)
#define ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET UNITYSDK_OFFSET(0x1FC49AF0)
#define ROOTMOTION_FINALIK_GROUNDERIK_SET_GLOBALENABLED_OFFSET UNITYSDK_OFFSET(0x1FC47840)
#define ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET UNITYSDK_OFFSET(0x1FC48870)
#define ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4A840)

namespace RootMotion::FinalIK
{
	inline static constexpr unsigned int GrounderIK_TypeDefinitionIndex = 36820;

	class GrounderIK : public ::RootMotion::FinalIK::Grounder
	{
	public:
		static ::System::Boolean* StaticGet__GlobalEnabled_k__BackingField()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(GrounderIK_TypeDefinitionIndex)->GetStaticField(0x9390);
		}
		::Il2CppArray<::RootMotion::FinalIK::IK*>* legs; // 0x50
		::UnityEngine::Transform* pelvis; // 0x58
		::Il2CppArray<::UnityEngine::Transform*>* attachments; // 0x60
		::UnityEngine::Transform* characterRoot; // 0x68
		::System::Single rootRotationWeight; // 0x70
		::System::Single rootRotationSpeed; // 0x74
		::System::Single maxRootRotationAngle; // 0x78
		::System::Byte _padding0[0x4];
		::Il2CppArray<::UnityEngine::Transform*>* feet; // 0x80
		::Il2CppArray<::UnityEngine::Quaternion>* footRotations; // 0x88
		::UnityEngine::Vector3 animatedPelvisLocalPosition; // 0x90
		::UnityEngine::Vector3 solvedPelvisLocalPosition; // 0x9C
		::System::Int32 solvedFeet; // 0xA8
		::System::Boolean solved; // 0xAC
		::System::Byte _padding1[0x3];
		::System::Single lastWeight; // 0xB0
		::System::Byte _padding2[0x4];
		::UnityEngine::Rigidbody* characterRootRigidbody; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK__CTOR_OFFSET))(this);
		}

		static ::System::Boolean get_GlobalEnabled()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_GET_GLOBALENABLED_OFFSET))();
		}

		static ::System::Void set_GlobalEnabled(::System::Boolean value)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SET_GLOBALENABLED_OFFSET))(value);
		}

		static ::System::Void SetGlobalEnabled(::System::Boolean enabled)
		{
			return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SETGLOBALENABLED_OFFSET))(enabled);
		}

		static ::System::Void ResetGlobalEnabled()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETGLOBALENABLED_OFFSET))();
		}

		::System::Void OpenUserManual()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENUSERMANUAL_OFFSET))(this);
		}

		::System::Void OpenScriptReference()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_OPENSCRIPTREFERENCE_OFFSET))(this);
		}

		::System::Void ResetPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_RESETPOSITION_OFFSET))(this);
		}

		::System::Boolean IsReadyToInitiate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ISREADYTOINITIATE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONENABLE_OFFSET))(this);
		}

		::System::Void ForceDisablePipeline()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_FORCEDISABLEPIPELINE_OFFSET))(this);
		}

		::System::Void NeutralizeLegIKWeights()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_NEUTRALIZELEGIKWEIGHTS_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_UPDATE_OFFSET))(this);
		}

		::System::Void Initiate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_INITIATE_OFFSET))(this);
		}

		::System::Void OnSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void SetLegIK(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_SETLEGIK_OFFSET))(this, index);
		}

		::System::Void OnPostSolverUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONPOSTSOLVERUPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ROOTMOTION_FINALIK_GROUNDERIK_ONDESTROY_OFFSET))(this);
		}
	};
}
