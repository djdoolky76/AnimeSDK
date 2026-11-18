#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Transform; }

#define EASYPBD_EASYPBDROPE_ADDFORCE_OFFSET UNITYSDK_OFFSET(0x1CF55340)
#define EASYPBD_EASYPBDROPE_ADDIMPULSETOPARTICLE_OFFSET UNITYSDK_OFFSET(0x1CF54A00)
#define EASYPBD_EASYPBDROPE_ADDIMPULSETOWHOLEROPE_OFFSET UNITYSDK_OFFSET(0x1CF54D20)
#define EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_1_OFFSET UNITYSDK_OFFSET(0x1CF55110)
#define EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_OFFSET UNITYSDK_OFFSET(0x1CF54FE0)
#define EASYPBD_EASYPBDROPE_ADDROTATION_OFFSET UNITYSDK_OFFSET(0x1CF55470)
#define EASYPBD_EASYPBDROPE_ADVANCEANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1CF522A0)
#define EASYPBD_EASYPBDROPE_APPLYANCHORPOSEDELTATOROPE_OFFSET UNITYSDK_OFFSET(0x1CF57070)
#define EASYPBD_EASYPBDROPE_APPLYANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1CF523F0)
#define EASYPBD_EASYPBDROPE_APPLYSOFTMOTIONLIMITS_OFFSET UNITYSDK_OFFSET(0x1CF4FDA0)
#define EASYPBD_EASYPBDROPE_APPLYSWINGLIMIT_OFFSET UNITYSDK_OFFSET(0x1CF53130)
#define EASYPBD_EASYPBDROPE_ATTACHOBJECT_OFFSET UNITYSDK_OFFSET(0x1CF54560)
#define EASYPBD_EASYPBDROPE_AUTOBINDATTACHMENTSFROMCURRENTTRANSFORMS_OFFSET UNITYSDK_OFFSET(0x1CF53C80)
#define EASYPBD_EASYPBDROPE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CF4FB30)
#define EASYPBD_EASYPBDROPE_CACHELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1CF4FBD0)
#define EASYPBD_EASYPBDROPE_CALCULATERESTLOCALDIRECTION_OFFSET UNITYSDK_OFFSET(0x1CF57F70)
#define EASYPBD_EASYPBDROPE_CLAMPPARTICLEINDEX_OFFSET UNITYSDK_OFFSET(0x1CF549A0)
#define EASYPBD_EASYPBDROPE_CLAMPSTEPVELOCITY_OFFSET UNITYSDK_OFFSET(0x1CF55DE0)
#define EASYPBD_EASYPBDROPE_CLEARATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1CF55D70)
#define EASYPBD_EASYPBDROPE_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1CF56DE0)
#define EASYPBD_EASYPBDROPE_CONFIGURELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1CF50940)
#define EASYPBD_EASYPBDROPE_FACEROOTTOWARDS_OFFSET UNITYSDK_OFFSET(0x1CF55B00)
#define EASYPBD_EASYPBDROPE_FINDNEARESTRESTPARTICLEINDEX_OFFSET UNITYSDK_OFFSET(0x1CF578D0)
#define EASYPBD_EASYPBDROPE_GETACCEPTEDANCHORINERTIALDELTA_OFFSET UNITYSDK_OFFSET(0x1CF57680)
#define EASYPBD_EASYPBDROPE_GETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1CF56120)
#define EASYPBD_EASYPBDROPE_GETATTACHMENTBASEROTATION_OFFSET UNITYSDK_OFFSET(0x1CF564B0)
#define EASYPBD_EASYPBDROPE_GETCLOSESTPOINTONROPE_OFFSET UNITYSDK_OFFSET(0x1CF56BA0)
#define EASYPBD_EASYPBDROPE_GETIMPULSETIMESTEP_OFFSET UNITYSDK_OFFSET(0x1CF54CD0)
#define EASYPBD_EASYPBDROPE_GETLIMITEDANCHORINERTIALDELTA_OFFSET UNITYSDK_OFFSET(0x1CF577A0)
#define EASYPBD_EASYPBDROPE_GETRANDOMDIRECTIONSEED_OFFSET UNITYSDK_OFFSET(0x1CF57F20)
#define EASYPBD_EASYPBDROPE_GETRANDOMFORCEDIRECTION_OFFSET UNITYSDK_OFFSET(0x1CF551B0)
#define EASYPBD_EASYPBDROPE_GETRESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1CF53AF0)
#define EASYPBD_EASYPBDROPE_GETRESTPARTICLEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CF579D0)
#define EASYPBD_EASYPBDROPE_GETROOTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x1CF55670)
#define EASYPBD_EASYPBDROPE_GETROPETANGENT_OFFSET UNITYSDK_OFFSET(0x1CF56280)
#define EASYPBD_EASYPBDROPE_GETTARGETANCHORPOSITION_OFFSET UNITYSDK_OFFSET(0x1CF53700)
#define EASYPBD_EASYPBDROPE_GETTARGETANCHORROTATION_OFFSET UNITYSDK_OFFSET(0x1CF53920)
#define EASYPBD_EASYPBDROPE_GETVERTICALONLYLOCALOFFSET_OFFSET UNITYSDK_OFFSET(0x1CF56940)
#define EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1CF4FAB0)
#define EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET UNITYSDK_OFFSET(0x1CF4FAD0)
#define EASYPBD_EASYPBDROPE_GET_SEGMENTLENGTH_OFFSET UNITYSDK_OFFSET(0x1CF4FAC0)
#define EASYPBD_EASYPBDROPE_HASVALIDSIMULATIONSTATE_OFFSET UNITYSDK_OFFSET(0x1CF52050)
#define EASYPBD_EASYPBDROPE_INTEGRATE_OFFSET UNITYSDK_OFFSET(0x1CF52D00)
#define EASYPBD_EASYPBDROPE_ISINITIALIZED_OFFSET UNITYSDK_OFFSET(0x1CF504B0)
#define EASYPBD_EASYPBDROPE_NORMALIZEANGLE_OFFSET UNITYSDK_OFFSET(0x1CF58430)
#define EASYPBD_EASYPBDROPE_NORMALIZEEULER_OFFSET UNITYSDK_OFFSET(0x1CF57CD0)
#define EASYPBD_EASYPBDROPE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1CF50530)
#define EASYPBD_EASYPBDROPE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0x1CF58510)
#define EASYPBD_EASYPBDROPE_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CF50350)
#define EASYPBD_EASYPBDROPE_ONTRANSFORMPARENTCHANGED_OFFSET UNITYSDK_OFFSET(0x1CF505B0)
#define EASYPBD_EASYPBDROPE_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1CF506B0)
#define EASYPBD_EASYPBDROPE_REBUILDINVERSEMASSES_OFFSET UNITYSDK_OFFSET(0x1CF52570)
#define EASYPBD_EASYPBDROPE_REFRESHEDITORPREVIEW_OFFSET UNITYSDK_OFFSET(0x1CF584D0)
#define EASYPBD_EASYPBDROPE_REFRESHRESTDIRECTION_OFFSET UNITYSDK_OFFSET(0x1CF520D0)
#define EASYPBD_EASYPBDROPE_RESETROOTROPES_OFFSET UNITYSDK_OFFSET(0x1CF557F0)
#define EASYPBD_EASYPBDROPE_RESETROPEFORSTATICPREVIEW_OFFSET UNITYSDK_OFFSET(0x1CF53640)
#define EASYPBD_EASYPBDROPE_RESETROPE_1_OFFSET UNITYSDK_OFFSET(0x1CF4FF30)
#define EASYPBD_EASYPBDROPE_RESETROPE_OFFSET UNITYSDK_OFFSET(0x1CF52000)
#define EASYPBD_EASYPBDROPE_SAFENORMALIZE_OFFSET UNITYSDK_OFFSET(0x1CF56F50)
#define EASYPBD_EASYPBDROPE_SCHEDULEDFIXEDSTEP_OFFSET UNITYSDK_OFFSET(0x1CF50D90)
#define EASYPBD_EASYPBDROPE_SCHEDULEDLATESTEP_OFFSET UNITYSDK_OFFSET(0x1CF51790)
#define EASYPBD_EASYPBDROPE_SETYAWROTATION_OFFSET UNITYSDK_OFFSET(0x1CF55990)
#define EASYPBD_EASYPBDROPE_SHOULDAUTOBINDATTACHMENTSONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CF4FED0)
#define EASYPBD_EASYPBDROPE_SIMULATE_OFFSET UNITYSDK_OFFSET(0x1CF50E00)
#define EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1CF52F90)
#define EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINT_OFFSET UNITYSDK_OFFSET(0x1CF55EF0)
#define EASYPBD_EASYPBDROPE_UPDATEANCHORMOVEMENTIMPULSECOOLDOWN_OFFSET UNITYSDK_OFFSET(0x1CF52220)
#define EASYPBD_EASYPBDROPE_UPDATEATTACHMENTS_OFFSET UNITYSDK_OFFSET(0x1CF51040)
#define EASYPBD_EASYPBDROPE_UPDATELINERENDERER_OFFSET UNITYSDK_OFFSET(0x1CF517E0)
#define EASYPBD_EASYPBDROPE_WARNMISSINGLINERENDERER_OFFSET UNITYSDK_OFFSET(0x1CF561E0)
#define EASYPBD_EASYPBDROPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF58820)

namespace EasyPBD
{
	inline static constexpr unsigned int EasyPBDRope_TypeDefinitionIndex = 27239;

	class EasyPBDRope : public ::UnityEngine::MonoBehaviour
	{
	public:
		// static const ::System::Int32 FixedParticleCount = 0x10; // 0x0
		// static const ::System::Single FixedSegmentLength; // 0x0
		// static const ::System::Single SoftDamping; // 0x0
		// static const ::System::Single SoftMaxStepDisplacement; // 0x0
		// static const ::System::Single SoftRandomDirectionAngle; // 0x0
		// static const ::System::Single SoftMaxExternalForceVelocity; // 0x0
		// static const ::System::Single SoftMinRandomForceVelocity; // 0x0
		// static const ::System::Single SoftMaxRandomForceVelocity; // 0x0
		// static const ::System::Single SoftRandomForceVerticalRatio; // 0x0
		::UnityEngine::Transform* anchor; // 0x18
		::System::Int32 solverIterations; // 0x20
		::System::Single damping; // 0x24
		::UnityEngine::Vector3 gravity; // 0x28
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* attachments; // 0x38
		::System::Boolean autoBindAttachmentsOnStart; // 0x40
		::System::Boolean constrainAttachmentsToRope; // 0x41
		::System::Boolean runtimeProjectAttachmentsToRope; // 0x42
		::System::Boolean limitSwingDistance; // 0x43
		::System::Single maxSwingDistance; // 0x44
		::System::Single maxStepDisplacement; // 0x48
		::System::Boolean anchorMovementDrivesPhysics; // 0x4C
		::System::Boolean limitAnchorMovement; // 0x4D
		::System::Byte _padding1[0x2];
		::System::Single maxAnchorStepDisplacement; // 0x50
		::System::Boolean gateAnchorMovementImpulse; // 0x54
		::System::Byte _padding2[0x3];
		::System::Single anchorMovementImpulseCooldown; // 0x58
		::System::Boolean randomizeDirection; // 0x5C
		::System::Byte _padding3[0x3];
		::System::Single randomDirectionAngle; // 0x60
		::System::Int32 randomDirectionSeed; // 0x64
		::System::Single maxExternalForceVelocity; // 0x68
		::System::Single minRandomForceVelocity; // 0x6C
		::System::Single maxRandomForceVelocity; // 0x70
		::System::Single randomForceVerticalRatio; // 0x74
		::System::Boolean simulateInEditMode; // 0x78
		::System::Byte _padding4[0x3];
		::System::Single editModeTimeStep; // 0x7C
		::System::Int32 editModeMaxSubsteps; // 0x80
		::System::Single ropeWidth; // 0x84
		::UnityEngine::Material* ropeMaterial; // 0x88
		::System::Boolean drawGizmos; // 0x90
		::System::Boolean drawSegmentGizmos; // 0x91
		::System::Byte _padding5[0x2];
		::UnityEngine::Color gizmoColor; // 0x94
		::System::Byte _padding6[0x4];
		::Il2CppArray<::UnityEngine::Vector3>* positions; // 0xA8
		::Il2CppArray<::UnityEngine::Vector3>* previousPositions; // 0xB0
		::Il2CppArray<::UnityEngine::Vector3>* linePositions; // 0xB8
		::Il2CppArray<::System::Single>* invMasses; // 0xC0
		::Il2CppArray<::System::Single>* particleMasses; // 0xC8
		::UnityEngine::LineRenderer* lineRendererCache; // 0xD0
		::UnityEngine::Vector3 simulatedAnchorPosition; // 0xD8
		::UnityEngine::Quaternion simulatedAnchorRotation; // 0xE4
		::UnityEngine::Vector3 restLocalDirection; // 0xF4
		::System::Int32 appliedRandomDirectionSeed; // 0x100
		::System::Single appliedRandomDirectionAngle; // 0x104
		::System::Boolean appliedRandomizeDirection; // 0x108
		::System::Boolean simulatedAnchorInitialized; // 0x109
		::System::Boolean autoBindApplied; // 0x10A
		::System::Byte _padding7[0x1];
		::System::Single anchorMovementImpulseCooldownTimer; // 0x10C
		::System::Boolean warnedMissingAnchor; // 0x110
		::System::Boolean warnedMissingLineRenderer; // 0x111

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_particleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET))(this);
		}

		::System::Single get_segmentLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_SEGMENTLENGTH_OFFSET))(this);
		}

		::System::Int32 get_ParticleCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GET_PARTICLECOUNT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_AWAKE_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnTransformParentChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONTRANSFORMPARENTCHANGED_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONVALIDATE_OFFSET))(this);
		}

		::System::Void ApplySoftMotionLimits()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYSOFTMOTIONLIMITS_OFFSET))(this);
		}

		::System::Void ScheduledFixedStep(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SCHEDULEDFIXEDSTEP_OFFSET))(this, deltaTime);
		}

		::System::Void ScheduledLateStep()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SCHEDULEDLATESTEP_OFFSET))(this);
		}

		::System::Void Simulate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SIMULATE_OFFSET))(this, deltaTime);
		}

		::System::Void ResetRope()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPE_OFFSET))(this);
		}

		::System::Void ResetRopeForStaticPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPEFORSTATICPREVIEW_OFFSET))(this);
		}

		::System::Void ResetRope_1(::System::Boolean autoBindFromCurrentTransforms)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROPE_1_OFFSET))(this, autoBindFromCurrentTransforms);
		}

		::System::Void AttachObject(::UnityEngine::Transform* target, ::System::Int32 particleIndex, ::System::Single extraMass, ::UnityEngine::Vector3 localOffset, ::UnityEngine::Vector3 localEuler, ::UnityEngine::Vector3 impulseVelocity)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Int32, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ATTACHOBJECT_OFFSET))(this, target, particleIndex, extraMass, localOffset, localEuler, impulseVelocity);
		}

		::System::Void AddImpulseToParticle(::System::Int32 particleIndex, ::UnityEngine::Vector3 velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDIMPULSETOPARTICLE_OFFSET))(this, particleIndex, velocity);
		}

		::System::Void AddImpulseToWholeRope(::UnityEngine::Vector3 velocity, ::System::Single falloff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDIMPULSETOWHOLEROPE_OFFSET))(this, velocity, falloff);
		}

		::System::Void AddRandomForce(::System::Int32 level)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_OFFSET))(this, level);
		}

		::System::Void AddRandomForce_1(::System::Single strength)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDRANDOMFORCE_1_OFFSET))(this, strength);
		}

		::System::Void AddForce(::UnityEngine::Vector3 direction, ::System::Single strength, ::System::Single falloff)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDFORCE_OFFSET))(this, direction, strength, falloff);
		}

		::System::Void AddRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADDROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void SetYawRotation(::System::Single yawDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SETYAWROTATION_OFFSET))(this, yawDegrees);
		}

		::System::Void FaceRootTowards(::UnityEngine::Vector3 worldPosition, ::System::Single yawOffsetDegrees)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_FACEROOTTOWARDS_OFFSET))(this, worldPosition, yawOffsetDegrees);
		}

		::UnityEngine::Transform* GetRootTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETROOTTRANSFORM_OFFSET))(this);
		}

		::System::Void ResetRootRopes()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_RESETROOTROPES_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRandomForceDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRANDOMFORCEDIRECTION_OFFSET))(this);
		}

		::System::Single GetImpulseTimeStep()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETIMPULSETIMESTEP_OFFSET))(this);
		}

		::System::Void ClearAttachments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLEARATTACHMENTS_OFFSET))(this);
		}

		::System::Void Integrate(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_INTEGRATE_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 ClampStepVelocity(::UnityEngine::Vector3 velocity)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLAMPSTEPVELOCITY_OFFSET))(this, velocity);
		}

		::System::Void SolveDistanceConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINTS_OFFSET))(this);
		}

		::System::Void SolveDistanceConstraint(::System::Int32 indexA, ::System::Int32 indexB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SOLVEDISTANCECONSTRAINT_OFFSET))(this, indexA, indexB);
		}

		::System::Void ApplySwingLimit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYSWINGLIMIT_OFFSET))(this);
		}

		::System::Void RebuildInverseMasses()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REBUILDINVERSEMASSES_OFFSET))(this);
		}

		::System::Void UpdateLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATELINERENDERER_OFFSET))(this);
		}

		::System::Void UpdateAttachments()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATEATTACHMENTS_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetClosestPointOnRope(::UnityEngine::Vector3 worldPosition)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETCLOSESTPOINTONROPE_OFFSET))(this, worldPosition);
		}

		static ::UnityEngine::Vector3 ClosestPointOnSegment(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Vector3 point)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLOSESTPOINTONSEGMENT_OFFSET))(start, end, point);
		}

		static ::UnityEngine::Vector3 GetVerticalOnlyLocalOffset(::UnityEngine::Quaternion rotation, ::UnityEngine::Vector3 localOffset)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETVERTICALONLYLOCALOFFSET_OFFSET))(rotation, localOffset);
		}

		::UnityEngine::Quaternion GetAttachmentBaseRotation(::UnityEngine::Vector3 tangent, ::System::Boolean alignToRopeTangent)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::UnityEngine::Vector3, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETATTACHMENTBASEROTATION_OFFSET))(this, tangent, alignToRopeTangent);
		}

		::UnityEngine::Vector3 GetRopeTangent(::System::Int32 particleIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETROPETANGENT_OFFSET))(this, particleIndex);
		}

		::System::Void ApplyAnchorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETANCHORPOSITION_OFFSET))(this);
		}

		::System::Void AdvanceAnchorPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ADVANCEANCHORPOSITION_OFFSET))(this);
		}

		::System::Void ApplyAnchorPoseDeltaToRope(::UnityEngine::Vector3 previousAnchorPosition, ::UnityEngine::Quaternion previousAnchorRotation, ::UnityEngine::Vector3 anchorDelta)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_APPLYANCHORPOSEDELTATOROPE_OFFSET))(this, previousAnchorPosition, previousAnchorRotation, anchorDelta);
		}

		::System::Void UpdateAnchorMovementImpulseCooldown(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_UPDATEANCHORMOVEMENTIMPULSECOOLDOWN_OFFSET))(this, deltaTime);
		}

		::UnityEngine::Vector3 GetAcceptedAnchorInertialDelta(::UnityEngine::Vector3 anchorDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETACCEPTEDANCHORINERTIALDELTA_OFFSET))(this, anchorDelta);
		}

		::UnityEngine::Vector3 GetLimitedAnchorInertialDelta(::UnityEngine::Vector3 anchorDelta)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETLIMITEDANCHORINERTIALDELTA_OFFSET))(this, anchorDelta);
		}

		::UnityEngine::Vector3 GetTargetAnchorPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETTARGETANCHORPOSITION_OFFSET))(this);
		}

		::UnityEngine::Quaternion GetTargetAnchorRotation()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETTARGETANCHORROTATION_OFFSET))(this);
		}

		::UnityEngine::Vector3 GetRestDirection()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRESTDIRECTION_OFFSET))(this);
		}

		::System::Boolean ShouldAutoBindAttachmentsOnInitialize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SHOULDAUTOBINDATTACHMENTSONINITIALIZE_OFFSET))(this);
		}

		::System::Void AutoBindAttachmentsFromCurrentTransforms()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_AUTOBINDATTACHMENTSFROMCURRENTTRANSFORMS_OFFSET))(this);
		}

		::System::Int32 FindNearestRestParticleIndex(::UnityEngine::Vector3 worldPosition)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_FINDNEARESTRESTPARTICLEINDEX_OFFSET))(this, worldPosition);
		}

		::UnityEngine::Vector3 GetRestParticlePosition(::System::Int32 particleIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRESTPARTICLEPOSITION_OFFSET))(this, particleIndex);
		}

		::System::Void RefreshRestDirection(::System::Boolean force)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REFRESHRESTDIRECTION_OFFSET))(this, force);
		}

		::UnityEngine::Vector3 CalculateRestLocalDirection(::System::Int32 seed)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CALCULATERESTLOCALDIRECTION_OFFSET))(this, seed);
		}

		::System::Int32 GetRandomDirectionSeed()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_GETRANDOMDIRECTIONSEED_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 NormalizeEuler(::UnityEngine::Vector3 euler)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_NORMALIZEEULER_OFFSET))(euler);
		}

		static ::System::Single NormalizeAngle(::System::Single angle)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_NORMALIZEANGLE_OFFSET))(angle);
		}

		::System::Int32 ClampParticleIndex(::System::Int32 particleIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CLAMPPARTICLEINDEX_OFFSET))(this, particleIndex);
		}

		::System::Boolean IsInitialized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ISINITIALIZED_OFFSET))(this);
		}

		::System::Boolean HasValidSimulationState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_HASVALIDSIMULATIONSTATE_OFFSET))(this);
		}

		::System::Void CacheLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CACHELINERENDERER_OFFSET))(this);
		}

		::System::Void ConfigureLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_CONFIGURELINERENDERER_OFFSET))(this);
		}

		::System::Void WarnMissingLineRenderer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_WARNMISSINGLINERENDERER_OFFSET))(this);
		}

		::System::Void RefreshEditorPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_REFRESHEDITORPREVIEW_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_ONDRAWGIZMOS_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 SafeNormalize(::UnityEngine::Vector3 value, ::UnityEngine::Vector3 fallback)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EASYPBD_EASYPBDROPE_SAFENORMALIZE_OFFSET))(value, fallback);
		}
	};
}
