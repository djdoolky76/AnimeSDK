#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlanarReflection_Axis.h"
#include "unitysdk/RPG/Client/PlanarReflection_Quality.h"
#include "unitysdk/RPG/CustomRP/GameCameraType.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RenderTextureFormat.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/RPG/CustomRP/ReflectionRenderData.h"
#include "unitysdk/UnityEngine/Rendering/CRPMainCameraDesc.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace RPG::Client { class PlanarReflection; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::Rendering { class CommandBuffer; }

#define RPG_CLIENT_PLANARREFLECTION_ACJPNPEIELH_OFFSET UNITYSDK_OFFSET(0xDB6FFE0)
#define RPG_CLIENT_PLANARREFLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0xDB72390)
#define RPG_CLIENT_PLANARREFLECTION_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xDB71170)
#define RPG_CLIENT_PLANARREFLECTION_EDGLGBBBLAG_OFFSET UNITYSDK_OFFSET(0xDB71B60)
#define RPG_CLIENT_PLANARREFLECTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDB6E860)
#define RPG_CLIENT_PLANARREFLECTION_FNEOGHHJDJL_OFFSET UNITYSDK_OFFSET(0xDB71E60)
#define RPG_CLIENT_PLANARREFLECTION_GETNAMESTR_OFFSET UNITYSDK_OFFSET(0xDB707E0)
#define RPG_CLIENT_PLANARREFLECTION_GET_KEY_OFFSET UNITYSDK_OFFSET(0xDB6E820)
#define RPG_CLIENT_PLANARREFLECTION_GET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0xDB6E800)
#define RPG_CLIENT_PLANARREFLECTION_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0xDB6EB70)
#define RPG_CLIENT_PLANARREFLECTION_GET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB6E7E0)
#define RPG_CLIENT_PLANARREFLECTION_GET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB6E7C0)
#define RPG_CLIENT_PLANARREFLECTION_GET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0xDB6EB80)
#define RPG_CLIENT_PLANARREFLECTION_ILBJMMBFGIE_OFFSET UNITYSDK_OFFSET(0xDB72330)
#define RPG_CLIENT_PLANARREFLECTION_IOLLLNALAHJ_OFFSET UNITYSDK_OFFSET(0xDB71FA0)
#define RPG_CLIENT_PLANARREFLECTION_KPHAJOJFIDG_OFFSET UNITYSDK_OFFSET(0xDB71960)
#define RPG_CLIENT_PLANARREFLECTION_LJKKGCENFDI_OFFSET UNITYSDK_OFFSET(0xDB6F8F0)
#define RPG_CLIENT_PLANARREFLECTION_MMJLFGOJIAL_OFFSET UNITYSDK_OFFSET(0xDB704F0)
#define RPG_CLIENT_PLANARREFLECTION_NBCOHPHKMDF_OFFSET UNITYSDK_OFFSET(0xDB70120)
#define RPG_CLIENT_PLANARREFLECTION_OJGDMOAFGLJ_OFFSET UNITYSDK_OFFSET(0xDB71470)
#define RPG_CLIENT_PLANARREFLECTION_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDB70DA0)
#define RPG_CLIENT_PLANARREFLECTION_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xDB70B00)
#define RPG_CLIENT_PLANARREFLECTION_ONENABLE_OFFSET UNITYSDK_OFFSET(0xDB70830)
#define RPG_CLIENT_PLANARREFLECTION_PGEIMNKECJF_OFFSET UNITYSDK_OFFSET(0xDB6F550)
#define RPG_CLIENT_PLANARREFLECTION_PGMKBNCMIIN_OFFSET UNITYSDK_OFFSET(0xDB720C0)
#define RPG_CLIENT_PLANARREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0xDB72460)
#define RPG_CLIENT_PLANARREFLECTION_SET_NAMEKEY_OFFSET UNITYSDK_OFFSET(0xDB6E810)
#define RPG_CLIENT_PLANARREFLECTION_SET_RENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB6E7F0)
#define RPG_CLIENT_PLANARREFLECTION_SET_USERENDERLIST_OFFSET UNITYSDK_OFFSET(0xDB6E7D0)
#define RPG_CLIENT_PLANARREFLECTION_SET_VALIDFORRENDERING_OFFSET UNITYSDK_OFFSET(0xDB6EB90)
#define RPG_CLIENT_PLANARREFLECTION_UPDATEREFLECTION_OFFSET UNITYSDK_OFFSET(0xDB6EC00)
#define RPG_CLIENT_PLANARREFLECTION_UPDATE_OFFSET UNITYSDK_OFFSET(0xDB70EC0)

namespace RPG::Client
{
	inline static constexpr unsigned int PlanarReflection_TypeDefinitionIndex = 70163;

	class PlanarReflection : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single CameraRange; // 0x18
		::RPG::Client::PlanarReflection_Axis PlaneDir; // 0x1C
		::System::Boolean ForceUp; // 0x20
		::System::Byte _padding0[0x3];
		::System::Single PlaneOffset; // 0x24
		::System::Boolean ClearRenderListOnDisable; // 0x28
		::System::Boolean _UseRenderList; // 0x29
		::System::Byte _padding1[0x6];
		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* _RenderList_k__BackingField; // 0x30
		::System::String* _NameKey; // 0x38
		::System::Boolean IsEnable; // 0x40
		::System::Byte _padding2[0x3];
		::System::Single BlurScale; // 0x44
		::System::Single Brightness; // 0x48
		::System::UInt32 AdditionalCasterRenderingLayerMask; // 0x4C
		::System::Int32 Priority; // 0x50
		::System::Boolean UseTAA; // 0x54
		::System::Byte _padding3[0x3];
		::UnityEngine::Renderer* boundsRenderer; // 0x58
		::UnityEngine::Vector4 ReflectionST; // 0x60
		::System::Boolean overrideScaleQuality; // 0x70
		::System::Byte _padding4[0x3];
		::System::Single overrideScaleFactor; // 0x74
		::RPG::Client::PlanarReflection_Quality ScaleQuality; // 0x78
		::UnityEngine::Vector3 DMGKOIHDAEJ; // 0x7C
		::UnityEngine::Quaternion CJGFKFJMIEI; // 0x88
		::UnityEngine::Matrix4x4 PPHJJDJBEKA; // 0x98
		::System::Boolean HDJOGGDMCIO; // 0xD8
		::System::Boolean JCCHJNKFOAG; // 0xD9
		::System::Byte _padding5[0x6];
		::UnityEngine::Camera* IEMGKEFBPCG; // 0xE0
		::UnityEngine::Transform* ILPDLGIJMNN; // 0xE8
		::UnityEngine::Renderer* JAMDAALMOAL; // 0xF0
		::Il2CppArray<::UnityEngine::Material*>* EPJOHHLLIAD; // 0xF8
		::UnityEngine::Plane GKFMHMEFJKB; // 0x100
		::UnityEngine::RenderTexture* MENDDEGFGFN; // 0x110
		::UnityEngine::RenderTexture* LPOCEHFGHFB; // 0x118
		::UnityEngine::RenderTexture* GIKOIBLPGDH; // 0x120
		::System::Int32 PBHMHJNDLDL; // 0x128
		::System::Byte _padding6[0x4];
		::Il2CppArray<::System::String*>* CJMNEPKDIGB; // 0x130
		::System::Collections::Generic::List_1<::UnityEngine::Material*>* JEJPCEHMBON; // 0x138
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseRenderList()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_USERENDERLIST_OFFSET))(this);
		}

		::System::Void set_UseRenderList(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_USERENDERLIST_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* get_RenderList()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_RENDERLIST_OFFSET))(this);
		}

		::System::Void set_RenderList(::System::Collections::Generic::List_1<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_RENDERLIST_OFFSET))(this, a1);
		}

		::System::String* get_NameKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_NAMEKEY_OFFSET))(this);
		}

		::System::Void set_NameKey(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_NAMEKEY_OFFSET))(this, a1);
		}

		::System::Int32 get_Key()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_KEY_OFFSET))(this);
		}

		::System::Void Execute(::UnityEngine::Rendering::CommandBuffer* a1, ::UnityEngine::Rendering::CRPMainCameraDesc a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::CRPMainCameraDesc))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_EXECUTE_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_validForRendering()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GET_VALIDFORRENDERING_OFFSET))(this);
		}

		::System::Void set_validForRendering(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_SET_VALIDFORRENDERING_OFFSET))(this, a1);
		}

		::System::Boolean UpdateReflection(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::RPG::CustomRP::GameCameraType a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::RPG::CustomRP::ReflectionRenderData a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::ReflectionRenderData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_UPDATEREFLECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* GetNameStr()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_GETNAMESTR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ONDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_UPDATE_OFFSET))(this);
		}

		::System::Void KPHAJOJFIDG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_KPHAJOJFIDG_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_DIOEAJEHHND_OFFSET))(this);
		}

		static ::System::Void EDGLGBBBLAG(::RPG::Client::PlanarReflection* a1, ::UnityEngine::Camera* a2, ::UnityEngine::Transform* a3, ::System::String* a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPG::Client::PlanarReflection*, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_EDGLGBBBLAG_OFFSET))(a1, a2, a3, a4, a5);
		}

		::System::Void IOLLLNALAHJ(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_IOLLLNALAHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PGMKBNCMIIN(::UnityEngine::Camera* a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_PGMKBNCMIIN_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector3 OJGDMOAFGLJ()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_OJGDMOAFGLJ_OFFSET))(this);
		}

		::System::Void FNEOGHHJDJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_FNEOGHHJDJL_OFFSET))(this);
		}

		::System::Single ACJPNPEIELH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ACJPNPEIELH_OFFSET))(this);
		}

		::UnityEngine::RenderTexture* PGEIMNKECJF(::RPG::CustomRP::GameCameraType a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_PGEIMNKECJF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void LJKKGCENFDI(::RPG::CustomRP::GameCameraType a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4, ::System::Int32 a5)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_LJKKGCENFDI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::RenderTextureFormat ILBJMMBFGIE()
		{
			return ((::UnityEngine::RenderTextureFormat(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_ILBJMMBFGIE_OFFSET))(this);
		}

		::System::Void NBCOHPHKMDF(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_NBCOHPHKMDF_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::Vector2 MMJLFGOJIAL(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_MMJLFGOJIAL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean RPG_CustomRP_IPlaneReflection_UpdateReflection(::UnityEngine::Camera* a1, ::UnityEngine::Transform* a2, ::RPG::CustomRP::GameCameraType a3, ::System::Int32 a4, ::System::Int32 a5, ::UnityEngine::Vector3 a6, ::UnityEngine::Vector3 a7, ::RPG::CustomRP::ReflectionRenderData a8)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Camera*, ::UnityEngine::Transform*, ::RPG::CustomRP::GameCameraType, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::RPG::CustomRP::ReflectionRenderData))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANARREFLECTION_RPG_CUSTOMRP_IPLANEREFLECTION_UPDATEREFLECTION_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

	};
}
