#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Effect_LineRendererSkinning_CullingMode.h"
#include "unitysdk/RPG/Client/Effect_LineRendererSkinning_WeightCurveMode.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_APIDHHKLGEJ_OFFSET UNITYSDK_OFFSET(0xCD494F0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BIPKLDKKFNP_OFFSET UNITYSDK_OFFSET(0xCD4AC60)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BOHLLIBNLLK_OFFSET UNITYSDK_OFFSET(0xCD49E20)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_CCTOR_OFFSET UNITYSDK_OFFSET(0xCD4B340)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_CTOR_OFFSET UNITYSDK_OFFSET(0xCD4B290)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_DMHOOMPPFMK_OFFSET UNITYSDK_OFFSET(0xCD4AE10)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ENDOFLATETICK_OFFSET UNITYSDK_OFFSET(0xCD49D30)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_FAINKAFENAL_OFFSET UNITYSDK_OFFSET(0xCD49820)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GETDERIVATIVEWEIGHT_OFFSET UNITYSDK_OFFSET(0xCD4A890)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GKAHCKIBEOI_OFFSET UNITYSDK_OFFSET(0xCD4A180)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ILCMDJJCPOF_OFFSET UNITYSDK_OFFSET(0xCD4AB00)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JEIDOGLNHFB_OFFSET UNITYSDK_OFFSET(0xCD4ABA0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JKIJCJMCBMI_OFFSET UNITYSDK_OFFSET(0xCD4AA60)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JOHJGPOEEAG_OFFSET UNITYSDK_OFFSET(0xCD4B120)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_NMHHFJBGJCJ_OFFSET UNITYSDK_OFFSET(0xCD49FB0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xCD49630)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONENABLE_OFFSET UNITYSDK_OFFSET(0xCD49450)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_PCGCCKNCEFL_OFFSET UNITYSDK_OFFSET(0xCD498B0)
#define RPG_CLIENT_EFFECT_LINERENDERERSKINNING_UPDATE_OFFSET UNITYSDK_OFFSET(0xCD49750)

namespace RPG::Client
{
	class Effect_LineRendererSkinning : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Int32 LineLength; // 0x18
		::System::Byte _padding0[0x4];
		::Il2CppArray<::System::Object*>* AdjustBoneArray; // 0x20
		::UnityEngine::Vector3 BaseLineOffset; // 0x28
		::System::Single FirstBoneWeightScale; // 0x34
		::RPG::Client::Effect_LineRendererSkinning_WeightCurveMode CurveMode; // 0x38
		::System::Single WeightCurveOffset; // 0x3C
		::System::Boolean UseTransScale; // 0x40
		::System::Byte _padding1[0x3];
		::System::Single OriWidthMultiplier; // 0x44
		::UnityEngine::Transform* CamOffsetSimSpace; // 0x48
		::System::Boolean XYPlane; // 0x50
		::System::Boolean YZPlane; // 0x51
		::System::Boolean ZXPlane; // 0x52
		::System::Byte _padding2[0x1];
		::System::Single OffsetDistance; // 0x54
		::System::Single CameraOffsetLength; // 0x58
		::System::Single CameraMaxValue; // 0x5C
		::System::Single ScaleOffset; // 0x60
		::System::Boolean EditorPreview; // 0x64
		::System::Byte _padding3[0x3];
		::RPG::Client::Effect_LineRendererSkinning_CullingMode LineRenderCullingMode; // 0x68
		::System::Boolean VisableState; // 0x6C
		::System::Boolean UpdatePointInLateTick; // 0x6D
		::System::Byte _padding4[0x2];
		::UnityEngine::Vector2 WeightFunctionsRange; // 0x70
		::System::Single WeightFunctionsScale; // 0x78
		::System::Byte _padding5[0x4];
		::UnityEngine::LineRenderer* KGGEHOGPAOJ; // 0x80
		::Il2CppArray<::UnityEngine::Vector3>* KKOKJFBOPLI; // 0x88
		::UnityEngine::Camera* MJKHFGJGNKE; // 0x90
		::UnityEngine::Vector3 AHMPFJIABIC; // 0x98
		::System::Byte _padding6[0x4];
		::Il2CppArray<::UnityEngine::Matrix4x4>* EKNIBMCNJID; // 0xA8
		::UnityEngine::Bounds LEMEEBPKBJB; // 0xB0
		::System::Boolean DNALBLMLCHM; // 0xC8
		::System::Byte _padding7[0x7];
		::Il2CppArray<::System::Object*>* ABDCDHABJLH; // 0xD0
		static ::Il2CppArray<::UnityEngine::Plane>** StaticGet_GACDMFGMLLG()
		{
			return (::Il2CppArray<::UnityEngine::Plane>**)UnitySDK::FromName("RPG.Client", "Effect_LineRendererSkinning")->GetStaticField(0x3A7D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_CCTOR_OFFSET))();
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ONDISABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_UPDATE_OFFSET))(this);
		}

		::System::Void EndOfLateTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ENDOFLATETICK_OFFSET))(this, a1);
		}

		::System::Void APIDHHKLGEJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_APIDHHKLGEJ_OFFSET))(this);
		}

		::System::Void PCGCCKNCEFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_PCGCCKNCEFL_OFFSET))(this);
		}

		::Il2CppArray<::System::Object*>* NMHHFJBGJCJ(::System::Single a1)
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_NMHHFJBGJCJ_OFFSET))(this, a1);
		}

		::System::Single GetDerivativeWeight(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GETDERIVATIVEWEIGHT_OFFSET))(this, a1);
		}

		::System::Single JKIJCJMCBMI(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JKIJCJMCBMI_OFFSET))(this, a1);
		}

		::System::Single ILCMDJJCPOF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_ILCMDJJCPOF_OFFSET))(this, a1);
		}

		::System::Single JEIDOGLNHFB(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JEIDOGLNHFB_OFFSET))(this, a1);
		}

		::System::Boolean FAINKAFENAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_FAINKAFENAL_OFFSET))(this);
		}

		::System::Single JOHJGPOEEAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_JOHJGPOEEAG_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GKAHCKIBEOI(::Il2CppArray<::UnityEngine::Vector3>* a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_GKAHCKIBEOI_OFFSET))(this, a1, a2);
		}

		::Il2CppArray<::UnityEngine::Matrix4x4>* BOHLLIBNLLK()
		{
			return ((::Il2CppArray<::UnityEngine::Matrix4x4>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BOHLLIBNLLK_OFFSET))(this);
		}

		::System::Boolean DMHOOMPPFMK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_DMHOOMPPFMK_OFFSET))(this);
		}

		::System::Boolean BIPKLDKKFNP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_EFFECT_LINERENDERERSKINNING_BIPKLDKKFNP_OFFSET))(this);
		}

	};
}
