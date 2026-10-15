#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityTag.h"
#include "unitysdk/System/Object.h"
class MHEPLMICGAO;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace RPG::GameCore { class VisionConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Transform; }

#define JNPJMKLDDJA_CEJLEJENOGO_OFFSET UNITYSDK_OFFSET(0xB28C130)
#define JNPJMKLDDJA_CIMACCLFEMM_OFFSET UNITYSDK_OFFSET(0xB28BCF0)
#define JNPJMKLDDJA_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB28B890)
#define JNPJMKLDDJA_CTOR_OFFSET UNITYSDK_OFFSET(0xB28B640)
#define JNPJMKLDDJA_DKOIMGEHNCF_OFFSET UNITYSDK_OFFSET(0xB28BB90)
#define JNPJMKLDDJA_DLAILGNMFGI_OFFSET UNITYSDK_OFFSET(0xB28B940)
#define JNPJMKLDDJA_FDECAPNAGIO_OFFSET UNITYSDK_OFFSET(0xB28B500)
#define JNPJMKLDDJA_GCEKKDCBLKH_OFFSET UNITYSDK_OFFSET(0xB28BF80)
#define JNPJMKLDDJA_GET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0xB28B5E0)
#define JNPJMKLDDJA_GET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0xB28B600)
#define JNPJMKLDDJA_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xB28B4E0)
#define JNPJMKLDDJA_GET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0xB28B620)
#define JNPJMKLDDJA_GET_NAME_OFFSET UNITYSDK_OFFSET(0xB28B440)
#define JNPJMKLDDJA_GET_PITCHLIMITMAX_OFFSET UNITYSDK_OFFSET(0xB28B580)
#define JNPJMKLDDJA_GET_PITCHLIMITMIN_OFFSET UNITYSDK_OFFSET(0xB28B560)
#define JNPJMKLDDJA_GET_RAYSOURCEPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB28B5A0)
#define JNPJMKLDDJA_GET_RAYTARGETPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB28B5C0)
#define JNPJMKLDDJA_GET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xB28B460)
#define JNPJMKLDDJA_IAPPMLCCBKA_OFFSET UNITYSDK_OFFSET(0xB28B480)
#define JNPJMKLDDJA_JMGKBOEJCEK_OFFSET UNITYSDK_OFFSET(0xB28BD60)
#define JNPJMKLDDJA_NMMIHMBFLCL_OFFSET UNITYSDK_OFFSET(0xB28C430)
#define JNPJMKLDDJA_OAKCIGFKJEH_OFFSET UNITYSDK_OFFSET(0xB28C9D0)
#define JNPJMKLDDJA_SET_ALERTSPEEDLEFTVALUE_OFFSET UNITYSDK_OFFSET(0xB28B5F0)
#define JNPJMKLDDJA_SET_ALERTSPEEDRIGHTVALUE_OFFSET UNITYSDK_OFFSET(0xB28B610)
#define JNPJMKLDDJA_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0xB28B4F0)
#define JNPJMKLDDJA_SET_EXCLUDEENTITYTAGS_OFFSET UNITYSDK_OFFSET(0xB28B630)
#define JNPJMKLDDJA_SET_NAME_OFFSET UNITYSDK_OFFSET(0xB28B450)
#define JNPJMKLDDJA_SET_PITCHLIMITMAX_OFFSET UNITYSDK_OFFSET(0xB28B590)
#define JNPJMKLDDJA_SET_PITCHLIMITMIN_OFFSET UNITYSDK_OFFSET(0xB28B570)
#define JNPJMKLDDJA_SET_RAYSOURCEPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB28B5B0)
#define JNPJMKLDDJA_SET_RAYTARGETPOINTNAME_OFFSET UNITYSDK_OFFSET(0xB28B5D0)
#define JNPJMKLDDJA_SET_YAWANGLE_OFFSET UNITYSDK_OFFSET(0xB28B470)

inline static constexpr unsigned int JNPJMKLDDJA_TypeDefinitionIndex = 56975;

	class JNPJMKLDDJA : public ::System::Object
	{
	public:
		::RPG::GameCore::TransformComponent* NLBPDLKLMED; // 0x10
		::System::String* _RayTargetPointName_k__BackingField; // 0x18
		::System::String* _Name_k__BackingField; // 0x20
		::UnityEngine::Transform* JBHBCIPAHKI; // 0x28
		::RPG::GameCore::GameEntity* DKJACCPODMO; // 0x30
		::System::String* _RaySourcePointName_k__BackingField; // 0x38
		::System::Single _AlertSpeedRightValue_k__BackingField; // 0x40
		::System::Single _YawAngle_k__BackingField; // 0x44
		::System::Single _Distance_k__BackingField; // 0x48
		::System::Int32 _ExcludeEntityTags_k__BackingField; // 0x4C
		::System::Single _PitchLimitMin_k__BackingField; // 0x50
		::System::Single _PitchLimitMax_k__BackingField; // 0x54
		::System::Single _AlertSpeedLeftValue_k__BackingField; // 0x58
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::RPG::GameCore::VisionConfig* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::RPG::GameCore::VisionConfig*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ctor_1(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::TransformComponent* a2, ::System::String* a3, ::System::Single a4, ::System::Single a5, ::System::Single a6, ::System::Single a7, ::System::String* a8, ::System::String* a9, ::System::Single a10, ::System::Single a11)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::TransformComponent*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::String*, ::System::String*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_CTOR_1_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_NAME_OFFSET))(this);
		}

		::System::Void set_Name(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_NAME_OFFSET))(this, a1);
		}

		::System::Single get_YawAngle()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_YAWANGLE_OFFSET))(this);
		}

		::System::Void set_YawAngle(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_YAWANGLE_OFFSET))(this, a1);
		}

		::System::Single IAPPMLCCBKA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_IAPPMLCCBKA_OFFSET))(this);
		}

		::System::Single get_Distance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_DISTANCE_OFFSET))(this);
		}

		::System::Void set_Distance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_DISTANCE_OFFSET))(this, a1);
		}

		::System::Single FDECAPNAGIO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_FDECAPNAGIO_OFFSET))(this);
		}

		::System::Single get_PitchLimitMin()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_PITCHLIMITMIN_OFFSET))(this);
		}

		::System::Void set_PitchLimitMin(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_PITCHLIMITMIN_OFFSET))(this, a1);
		}

		::System::Single get_PitchLimitMax()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_PITCHLIMITMAX_OFFSET))(this);
		}

		::System::Void set_PitchLimitMax(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_PITCHLIMITMAX_OFFSET))(this, a1);
		}

		::System::String* get_RaySourcePointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_RAYSOURCEPOINTNAME_OFFSET))(this);
		}

		::System::Void set_RaySourcePointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_RAYSOURCEPOINTNAME_OFFSET))(this, a1);
		}

		::System::String* get_RayTargetPointName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_RAYTARGETPOINTNAME_OFFSET))(this);
		}

		::System::Void set_RayTargetPointName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_RAYTARGETPOINTNAME_OFFSET))(this, a1);
		}

		::System::Single get_AlertSpeedLeftValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_ALERTSPEEDLEFTVALUE_OFFSET))(this);
		}

		::System::Void set_AlertSpeedLeftValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_ALERTSPEEDLEFTVALUE_OFFSET))(this, a1);
		}

		::System::Single get_AlertSpeedRightValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_ALERTSPEEDRIGHTVALUE_OFFSET))(this);
		}

		::System::Void set_AlertSpeedRightValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_ALERTSPEEDRIGHTVALUE_OFFSET))(this, a1);
		}

		::System::Int32 get_ExcludeEntityTags()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GET_EXCLUDEENTITYTAGS_OFFSET))(this);
		}

		::System::Void set_ExcludeEntityTags(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_SET_EXCLUDEENTITYTAGS_OFFSET))(this, a1);
		}

		::System::Void DLAILGNMFGI(::RPG::GameCore::GameEntity* a1, ::MHEPLMICGAO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_DLAILGNMFGI_OFFSET))(this, a1, a2);
		}

		::System::Boolean DKOIMGEHNCF(::RPG::GameCore::GameEntity* a1, ::MHEPLMICGAO* a2, ::System::Boolean a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::MHEPLMICGAO*, ::System::Boolean))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_DKOIMGEHNCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GCEKKDCBLKH(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_GCEKKDCBLKH_OFFSET))(this, a1);
		}

		::System::Boolean CEJLEJENOGO(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_CEJLEJENOGO_OFFSET))(this, a1);
		}

		::System::Boolean JMGKBOEJCEK(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_JMGKBOEJCEK_OFFSET))(this, a1);
		}

		::System::Boolean CIMACCLFEMM(::MHEPLMICGAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MHEPLMICGAO*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_CIMACCLFEMM_OFFSET))(this, a1);
		}

		::System::Void NMMIHMBFLCL(::System::Boolean a1, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::EntityTag>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::EntityTag>*))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_NMMIHMBFLCL_OFFSET))(this, a1, a2);
		}

		::System::Single OAKCIGFKJEH(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JNPJMKLDDJA_OAKCIGFKJEH_OFFSET))(this, a1);
		}

	};
