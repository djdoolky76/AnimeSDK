#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DoctorStrangeBuildingMatrix_FractalAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define DOCTORSTRANGEBUILDINGMATRIX_APPLYPROPERTIESTORENDERER_OFFSET UNITYSDK_OFFSET(0x10625450)
#define DOCTORSTRANGEBUILDINGMATRIX_APPLYSTOPANIMATIONPROPERTIES_OFFSET UNITYSDK_OFFSET(0x10626100)
#define DOCTORSTRANGEBUILDINGMATRIX_APPLYTORENDERERS_OFFSET UNITYSDK_OFFSET(0x10625730)
#define DOCTORSTRANGEBUILDINGMATRIX_GETCURRENTNAPTIME_OFFSET UNITYSDK_OFFSET(0x106252C0)
#define DOCTORSTRANGEBUILDINGMATRIX_GETEFFECTIVESPEED_OFFSET UNITYSDK_OFFSET(0x10625370)
#define DOCTORSTRANGEBUILDINGMATRIX_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x106267A0)
#define DOCTORSTRANGEBUILDINGMATRIX_ONENABLE_OFFSET UNITYSDK_OFFSET(0x10626620)
#define DOCTORSTRANGEBUILDINGMATRIX_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x106268F0)
#define DOCTORSTRANGEBUILDINGMATRIX_RESETANIMATIONSTATELIKEENABLE_OFFSET UNITYSDK_OFFSET(0x106264B0)
#define DOCTORSTRANGEBUILDINGMATRIX_UPDATECLIPPLANE_OFFSET UNITYSDK_OFFSET(0x10626960)
#define DOCTORSTRANGEBUILDINGMATRIX_UPDATEPLAYONCEROTATION_OFFSET UNITYSDK_OFFSET(0x10625B10)
#define DOCTORSTRANGEBUILDINGMATRIX__CCTOR_OFFSET UNITYSDK_OFFSET(0x10626C60)
#define DOCTORSTRANGEBUILDINGMATRIX__CTOR_OFFSET UNITYSDK_OFFSET(0x10626B60)

inline static constexpr unsigned int DoctorStrangeBuildingMatrix_TypeDefinitionIndex = 73753;

class DoctorStrangeBuildingMatrix : public ::UnityEngine::MonoBehaviour
{
public:
	static ::System::Int32* StaticGet__ClipPlaneOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xED90);
	}
	static ::System::Int32* StaticGet__RotateTimeOffset()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xED94);
	}
	static ::System::Int32* StaticGet__FractalAxis()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xED98);
	}
	static ::System::Int32* StaticGet__RotateMin()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xED9C);
	}
	static ::System::Int32* StaticGet__RotateAroundSpeed()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xEDA0);
	}
	static ::System::Int32* StaticGet__CopyCount()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xEDA4);
	}
	static ::System::Int32* StaticGet__RotateMax()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xEDA8);
	}
	static ::System::Int32* StaticGet__GlobalTimeParamsBId()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xEDAC);
	}
	static ::System::Int32* StaticGet__CopyIndex()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DoctorStrangeBuildingMatrix_TypeDefinitionIndex)->GetStaticField(0xEDB0);
	}
	// static const ::System::String* shaderPath; // 0x0
	::UnityEngine::GameObject* copyTarget; // 0x18
	::System::Int32 copyCount; // 0x20
	::DoctorStrangeBuildingMatrix_FractalAxis fractalAxis; // 0x24
	::System::Single rotationSpeedX; // 0x28
	::System::Single rotationSpeedY; // 0x2C
	::System::Single rotationSpeedZ; // 0x30
	::UnityEngine::Vector2 rotationLimitX; // 0x34
	::UnityEngine::Vector2 rotationLimitY; // 0x3C
	::UnityEngine::Vector2 rotationLimitZ; // 0x44
	::System::Boolean useFixedTime; // 0x4C
	::System::Boolean playOnce; // 0x4D
	::System::Byte _padding0[0x2];
	::System::Single fixedTimeX; // 0x50
	::System::Single fixedTimeY; // 0x54
	::System::Single fixedTimeZ; // 0x58
	::System::Boolean clipOffsetLoop; // 0x5C
	::System::Byte _padding1[0x3];
	::System::Single clipOffsetSpeed; // 0x60
	::UnityEngine::Vector2 clipOffsetRange; // 0x64
	::System::Byte _padding2[0x4];
	::System::Collections::Generic::List_1<::System::Object*>* rendererInfos; // 0x70
	::UnityEngine::MaterialPropertyBlock* mpb; // 0x78
	::System::Single clipPlaneOffset; // 0x80
	::System::Single enableNapTime; // 0x84
	::UnityEngine::Shader* buildingMatrixShader; // 0x88
	::System::Single lastPlaneOffset; // 0x90
	::System::Boolean finishRegister; // 0x94
	::System::Byte _padding3[0x3];
	::System::Int32 playOnceStopMask; // 0x98

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX__CCTOR_OFFSET))();
	}

	::System::Single GetCurrentNapTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_GETCURRENTNAPTIME_OFFSET))(this);
	}

	::UnityEngine::Vector3 GetEffectiveSpeed()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_GETEFFECTIVESPEED_OFFSET))(this);
	}

	::System::Void ApplyPropertiesToRenderer(::UnityEngine::Renderer* renderer, ::System::Int32 copyIndex, ::UnityEngine::Vector3 rotateSpeed, ::UnityEngine::Vector3 rotateMin, ::UnityEngine::Vector3 rotateMax)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Renderer*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_APPLYPROPERTIESTORENDERER_OFFSET))(this, renderer, copyIndex, rotateSpeed, rotateMin, rotateMax);
	}

	::System::Void ApplyToRenderers()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_APPLYTORENDERERS_OFFSET))(this);
	}

	::System::Void UpdatePlayOnceRotation()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_UPDATEPLAYONCEROTATION_OFFSET))(this);
	}

	::System::Void ApplyStopAnimationProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_APPLYSTOPANIMATIONPROPERTIES_OFFSET))(this);
	}

	::System::Void ResetAnimationStateLikeEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_RESETANIMATIONSTATELIKEENABLE_OFFSET))(this);
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONDISABLE_OFFSET))(this);
	}

	::System::Void OnUpdate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_ONUPDATE_OFFSET))(this);
	}

	::System::Void UpdateClipPlane()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOCTORSTRANGEBUILDINGMATRIX_UPDATECLIPPLANE_OFFSET))(this);
	}
};
