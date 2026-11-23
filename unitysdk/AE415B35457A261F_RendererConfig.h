#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ACF10FE87B4C5617.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class E2E2311225330715; }
namespace UnityEngine { class SkinnedMeshRenderer; }
namespace UnityEngine { class Texture2DArray; }
namespace UnityEngine { class Transform; }
template <typename T> class F3CF946C31C5006A;

#define AE415B35457A261F_RENDERERCONFIG_DESTROYCRYSTALCENTERWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x2879180)
#define AE415B35457A261F_RENDERERCONFIG_DESTROYCRYSTALROTATIONMATRICES_OFFSET UNITYSDK_OFFSET(0x2879220)
#define AE415B35457A261F_RENDERERCONFIG_DISABLE_OFFSET UNITYSDK_OFFSET(0x28792C0)
#define AE415B35457A261F_RENDERERCONFIG_EVALUATE_OFFSET UNITYSDK_OFFSET(0x2879510)
#define AE415B35457A261F_RENDERERCONFIG_FINALIZE_OFFSET UNITYSDK_OFFSET(0x2879E50)
#define AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALCENTERWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x16DFCA0)
#define AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALINNERNORMALCUBEMAPS_OFFSET UNITYSDK_OFFSET(0x165A3A0)
#define AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALROTATIONMATRICES_OFFSET UNITYSDK_OFFSET(0x168FC80)
#define AE415B35457A261F_RENDERERCONFIG_GET_HASSETUP_OFFSET UNITYSDK_OFFSET(0x1F63570)
#define AE415B35457A261F_RENDERERCONFIG_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x287B580)
#define AE415B35457A261F_RENDERERCONFIG_GET_MATERIALPROPERTYBLOCK_OFFSET UNITYSDK_OFFSET(0x287B6F0)
#define AE415B35457A261F_RENDERERCONFIG_NORMALIZEQUATERNION_OFFSET UNITYSDK_OFFSET(0x2879EC0)
#define AE415B35457A261F_RENDERERCONFIG_QUATERNIONFROMMATRIX_OFFSET UNITYSDK_OFFSET(0x2879FE0)
#define AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALCENTERWORLDSPACE_OFFSET UNITYSDK_OFFSET(0x17F4BE0)
#define AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALINNERNORMALCUBEMAPS_OFFSET UNITYSDK_OFFSET(0x17395F0)
#define AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALROTATIONMATRICES_OFFSET UNITYSDK_OFFSET(0x17F4BD0)
#define AE415B35457A261F_RENDERERCONFIG_SKINVERTEXTOWORLD_OFFSET UNITYSDK_OFFSET(0x287A150)
#define AE415B35457A261F_RENDERERCONFIG_SKINWORLDROTATIONTOBONES_OFFSET UNITYSDK_OFFSET(0x287A430)
#define AE415B35457A261F_RENDERERCONFIG_UPDATECRYSTALINNERNORMALCUBEMAPS_OFFSET UNITYSDK_OFFSET(0x287AC60)
#define AE415B35457A261F_RENDERERCONFIG_WEIGHTEDNLERP_OFFSET UNITYSDK_OFFSET(0x287AF20)
#define AE415B35457A261F_RENDERERCONFIG__CCTOR_OFFSET UNITYSDK_OFFSET(0x287B370)
#define AE415B35457A261F_RENDERERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x287B490)

inline static constexpr unsigned int AE415B35457A261F_RendererConfig_TypeDefinitionIndex = 16143;

class AE415B35457A261F_RendererConfig : public ::System::Object
{
public:
	static ::System::Int32* StaticGet__CustomCrystalCenterArrayID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0x0);
	}
	static ::System::Int32* StaticGet__EnableMultiCrystalNormalCubemapID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0x4);
	}
	static ::System::Int32* StaticGet__CustomCrystalInnerNormalCubemapArrayID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0x8);
	}
	static ::System::Int32* StaticGet__InnerNormalCubeMapID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0xC);
	}
	static ::System::Int32* StaticGet__CustomCyrstalRotationArrayID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0x10);
	}
	static ::System::Int32* StaticGet__EnableMultiCrystalID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(AE415B35457A261F_RendererConfig_TypeDefinitionIndex)->GetStaticField(0x14);
	}
	::System::Boolean Enable; // 0x10
	::System::Byte _padding0[0x7];
	::UnityEngine::SkinnedMeshRenderer* SkinnedRenderer; // 0x18
	::System::Int32 SubMeshIndex; // 0x20
	::System::Int32 MaterialIndex; // 0x24
	::UnityEngine::Cubemap* PublicInnerNormalCubemap; // 0x28
	::System::Boolean UseCrystalConfigSelfInnerNormalCubemap; // 0x30
	::System::Byte _padding1[0x7];
	::F3CF946C31C5006A<::System::Int32>* _submeshValueDropdownNameToIndeices; // 0x38
	::F3CF946C31C5006A<::System::Int32>* _matIndexValueDropdownNameToIndeices; // 0x40
	::System::Boolean _hasSetup; // 0x48
	::System::Byte _padding2[0x3];
	::UnityEngine::Vector3 _CurrStaticCenterWS_k__BackingField; // 0x4C
	::System::Collections::Generic::List_1<::System::Object*>* CrystalConfigs; // 0x58
	::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* _CrystalCenterWorldSpace_k__BackingField; // 0x60
	::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* _CrystalRotationMatrices_k__BackingField; // 0x68
	::UnityEngine::Texture2DArray* _CrystalInnerNormalCubemaps_k__BackingField; // 0x70
	::UnityEngine::E2E2311225330715* _propertyBlock; // 0x78

	::System::Boolean get_HasSetup()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_HASSETUP_OFFSET))(this);
	}

	::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* get_CrystalCenterWorldSpace()
	{
		return ((::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALCENTERWORLDSPACE_OFFSET))(this);
	}

	::System::Void set_CrystalCenterWorldSpace(::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::E8984F4E44AE20E5>*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALCENTERWORLDSPACE_OFFSET))(this, E937D4885DAA1AE8);
	}

	::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* get_CrystalRotationMatrices()
	{
		return ((::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALROTATIONMATRICES_OFFSET))(this);
	}

	::System::Void set_CrystalRotationMatrices(::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALROTATIONMATRICES_OFFSET))(this, E937D4885DAA1AE8);
	}

	::UnityEngine::Texture2DArray* get_CrystalInnerNormalCubemaps()
	{
		return ((::UnityEngine::Texture2DArray*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_CRYSTALINNERNORMALCUBEMAPS_OFFSET))(this);
	}

	::System::Void set_CrystalInnerNormalCubemaps(::UnityEngine::Texture2DArray* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2DArray*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_SET_CRYSTALINNERNORMALCUBEMAPS_OFFSET))(this, E937D4885DAA1AE8);
	}

	::UnityEngine::E2E2311225330715* get_MaterialPropertyBlock()
	{
		return ((::UnityEngine::E2E2311225330715*(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_MATERIALPROPERTYBLOCK_OFFSET))(this);
	}

	::System::Void Finalize()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_FINALIZE_OFFSET))(this);
	}

	::System::Void DestroyCrystalCenterWorldSpace()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_DESTROYCRYSTALCENTERWORLDSPACE_OFFSET))(this);
	}

	::System::Void DestroyCrystalRotationMatrices()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_DESTROYCRYSTALROTATIONMATRICES_OFFSET))(this);
	}

	::System::Void Evaluate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_EVALUATE_OFFSET))(this);
	}

	::System::Void Disable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_DISABLE_OFFSET))(this);
	}

	::System::Void UpdateCrystalInnerNormalCubemaps()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_UPDATECRYSTALINNERNORMALCUBEMAPS_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 SkinVertexToWorld(::UnityEngine::Vector3 BB74689FADE509E0, ::Il2CppArray<::UnityEngine::Transform*>* AD8CD782CC1B036B, ::Il2CppArray<::System::Single>* BBD160A6867C0867, ::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* F24557226D7613D1)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::System::Single>*, ::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_SKINVERTEXTOWORLD_OFFSET))(BB74689FADE509E0, AD8CD782CC1B036B, BBD160A6867C0867, F24557226D7613D1);
	}

	static ::UnityEngine::Quaternion QuaternionFromMatrix(::UnityEngine::ACF10FE87B4C5617 B8A196AEAF73E28B)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::ACF10FE87B4C5617))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_QUATERNIONFROMMATRIX_OFFSET))(B8A196AEAF73E28B);
	}

	static ::UnityEngine::Quaternion WeightedNlerp(::Il2CppArray<::UnityEngine::Quaternion>* AC250744A4C3DC7E, ::Il2CppArray<::System::Single>* F59E632D47B75C29)
	{
		return ((::UnityEngine::Quaternion(*)(::Il2CppArray<::UnityEngine::Quaternion>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_WEIGHTEDNLERP_OFFSET))(AC250744A4C3DC7E, F59E632D47B75C29);
	}

	static ::UnityEngine::Quaternion NormalizeQuaternion(::UnityEngine::E8984F4E44AE20E5 F5006C45C2B93A1C)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::E8984F4E44AE20E5))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_NORMALIZEQUATERNION_OFFSET))(F5006C45C2B93A1C);
	}

	static ::UnityEngine::Quaternion SkinWorldRotationToBones(::UnityEngine::Quaternion A4E1E64E2C1555A5, ::Il2CppArray<::UnityEngine::Transform*>* AD8CD782CC1B036B, ::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>* F24557226D7613D1, ::Il2CppArray<::System::Single>* F59E632D47B75C29)
	{
		return ((::UnityEngine::Quaternion(*)(::UnityEngine::Quaternion, ::Il2CppArray<::UnityEngine::Transform*>*, ::Il2CppArray<::UnityEngine::ACF10FE87B4C5617>*, ::Il2CppArray<::System::Single>*))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_SKINWORLDROTATIONTOBONES_OFFSET))(A4E1E64E2C1555A5, AD8CD782CC1B036B, F24557226D7613D1, F59E632D47B75C29);
	}

	::System::Boolean get_IsValid()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG_GET_ISVALID_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AE415B35457A261F_RENDERERCONFIG__CCTOR_OFFSET))();
	}
};
