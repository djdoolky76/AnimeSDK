#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MHEPLMICGAO;
namespace RPG::Client { class MonoCharacterConicalVisionForward; }
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class ConicalVisionConfig; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define EFAMOJJDGJB_AMNDJMGPDFL_OFFSET UNITYSDK_OFFSET(0x13A43860)
#define EFAMOJJDGJB_CEJLEJENOGO_OFFSET UNITYSDK_OFFSET(0x13A44760)
#define EFAMOJJDGJB_CIMACCLFEMM_OFFSET UNITYSDK_OFFSET(0x13A444D0)
#define EFAMOJJDGJB_CTOR_OFFSET UNITYSDK_OFFSET(0x13A43B40)
#define EFAMOJJDGJB_DKOIMGEHNCF_OFFSET UNITYSDK_OFFSET(0x13A43D50)
#define EFAMOJJDGJB_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0x13A43EF0)
#define EFAMOJJDGJB_DNPPJCAAKPF_OFFSET UNITYSDK_OFFSET(0x13A43700)
#define EFAMOJJDGJB_FDECAPNAGIO_OFFSET UNITYSDK_OFFSET(0x13A43A80)
#define EFAMOJJDGJB_GET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x13A43AE0)
#define EFAMOJJDGJB_GET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x13A43B00)
#define EFAMOJJDGJB_GET_ANGLE_OFFSET UNITYSDK_OFFSET(0x13A43A00)
#define EFAMOJJDGJB_GET_ATTACHEDPOINT_OFFSET UNITYSDK_OFFSET(0x13A43670)
#define EFAMOJJDGJB_GET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x13A43B20)
#define EFAMOJJDGJB_GET_RADIUS_OFFSET UNITYSDK_OFFSET(0x13A439E0)
#define EFAMOJJDGJB_GET_TARGETPIVOTPOINT_OFFSET UNITYSDK_OFFSET(0x13A439A0)
#define EFAMOJJDGJB_GET_TARGETRAYPOINT_OFFSET UNITYSDK_OFFSET(0x13A439C0)
#define EFAMOJJDGJB_JMGKBOEJCEK_OFFSET UNITYSDK_OFFSET(0x13A44570)
#define EFAMOJJDGJB_LNJFPNOJKMA_OFFSET UNITYSDK_OFFSET(0x13A43690)
#define EFAMOJJDGJB_OAKCIGFKJEH_OFFSET UNITYSDK_OFFSET(0x13A44A60)
#define EFAMOJJDGJB_PGNGFKLGDKP_OFFSET UNITYSDK_OFFSET(0x13A43A20)
#define EFAMOJJDGJB_SET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0x13A43AF0)
#define EFAMOJJDGJB_SET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0x13A43B10)
#define EFAMOJJDGJB_SET_ANGLE_OFFSET UNITYSDK_OFFSET(0x13A43A10)
#define EFAMOJJDGJB_SET_ATTACHEDPOINT_OFFSET UNITYSDK_OFFSET(0x13A43680)
#define EFAMOJJDGJB_SET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0x13A43B30)
#define EFAMOJJDGJB_SET_RADIUS_OFFSET UNITYSDK_OFFSET(0x13A439F0)
#define EFAMOJJDGJB_SET_TARGETPIVOTPOINT_OFFSET UNITYSDK_OFFSET(0x13A439B0)
#define EFAMOJJDGJB_SET_TARGETRAYPOINT_OFFSET UNITYSDK_OFFSET(0x13A439D0)

inline static constexpr unsigned int EFAMOJJDGJB_TypeDefinitionIndex = 56976;

	class EFAMOJJDGJB : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* JOBLPEAIANE; // 0x10
		::RPG::GameCore::TransformComponent* NLBPDLKLMED; // 0x18
		::Il2CppArray<::RPG::GameCore::EntityTag>* _ExcludeEntityTags_k__BackingField; // 0x20
		::RPG::Client::MonoCharacterConicalVisionForward* DIPBCFLAEEK; // 0x28
		::System::String* _TargetPivotPoint_k__BackingField; // 0x30
		::System::String* _TargetRayPoint_k__BackingField; // 0x38
		::System::String* _AttachedPoint_k__BackingField; // 0x40
		::RPG::GameCore::GameEntity* DKJACCPODMO; // 0x48
		::System::Single _AlertSpeedLeftValue_k__BackingField; // 0x50
		::System::Single _Radius_k__BackingField; // 0x54
		::System::Single _AlertSpeedRightValue_k__BackingField; // 0x58
		::System::Single _Angle_k__BackingField; // 0x5C
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::ConicalVisionConfig* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ConicalVisionConfig*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_AttachedPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_ATTACHEDPOINT_OFFSET))(this);
		}

		::System::Void set_AttachedPoint(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_ATTACHEDPOINT_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* LNJFPNOJKMA()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_LNJFPNOJKMA_OFFSET))(this);
		}

		::UnityEngine::Vector3 DNPPJCAAKPF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_DNPPJCAAKPF_OFFSET))(this);
		}

		::UnityEngine::Vector3 AMNDJMGPDFL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_AMNDJMGPDFL_OFFSET))(this);
		}

		::System::String* get_TargetPivotPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_TARGETPIVOTPOINT_OFFSET))(this);
		}

		::System::Void set_TargetPivotPoint(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_TARGETPIVOTPOINT_OFFSET))(this, a1);
		}

		::System::String* get_TargetRayPoint()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_TARGETRAYPOINT_OFFSET))(this);
		}

		::System::Void set_TargetRayPoint(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_TARGETRAYPOINT_OFFSET))(this, a1);
		}

		::System::Single get_Radius()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_RADIUS_OFFSET))(this);
		}

		::System::Void set_Radius(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_RADIUS_OFFSET))(this, a1);
		}

		::System::Single get_Angle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_ANGLE_OFFSET))(this);
		}

		::System::Void set_Angle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_ANGLE_OFFSET))(this, a1);
		}

		::System::Single PGNGFKLGDKP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_PGNGFKLGDKP_OFFSET))(this);
		}

		::System::Single FDECAPNAGIO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_FDECAPNAGIO_OFFSET))(this);
		}

		::System::Single get_AlertSpeedLeftValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_ALERTSPEEDLEFTVALUE_OFFSET))(this);
		}

		::System::Void set_AlertSpeedLeftValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_ALERTSPEEDLEFTVALUE_OFFSET))(this, a1);
		}

		::System::Single get_AlertSpeedRightValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_ALERTSPEEDRIGHTVALUE_OFFSET))(this);
		}

		::System::Void set_AlertSpeedRightValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_ALERTSPEEDRIGHTVALUE_OFFSET))(this, a1);
		}

		::Il2CppArray<::RPG::GameCore::EntityTag>* get_ExcludeEntityTags()
		{
			return ((::Il2CppArray<::RPG::GameCore::EntityTag>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_GET_EXCLUDEENTITYTAGS_OFFSET))(this);
		}

		::System::Void set_ExcludeEntityTags(::Il2CppArray<::RPG::GameCore::EntityTag>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_SET_EXCLUDEENTITYTAGS_OFFSET))(this, a1);
		}

		::System::Boolean DKOIMGEHNCF(::RPG::GameCore::GameEntity* a1, ::MHEPLMICGAO* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MHEPLMICGAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_DKOIMGEHNCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Single OAKCIGFKJEH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_OAKCIGFKJEH_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::MHEPLMICGAO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Boolean CEJLEJENOGO(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_CEJLEJENOGO_OFFSET))(this, a1);
		}

		::System::Boolean JMGKBOEJCEK(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_JMGKBOEJCEK_OFFSET))(this, a1);
		}

		::System::Boolean CIMACCLFEMM(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + EFAMOJJDGJB_CIMACCLFEMM_OFFSET))(this, a1);
		}

	};
