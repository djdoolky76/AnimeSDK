#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/Graphic.h"
#include "unitysdk/UnityEngine/Vector4.h"
#include "unitysdk/UnityEngine/Rect.h"
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class MeshRenderer; }
namespace UnityEngine::UI { class RectMask2D; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_UI3DCLIPPABLE_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9EF9A0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_CTOR_OFFSET UNITYSDK_OFFSET(0xE9EF960)
#define UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET UNITYSDK_OFFSET(0xE9EECD0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_FDBICCMLGON_OFFSET UNITYSDK_OFFSET(0xE9EEBE0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET UNITYSDK_OFFSET(0xE9EEB90)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ODBCPKIKBDH_OFFSET UNITYSDK_OFFSET(0xE9EF030)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ODKCIKCCGID_OFFSET UNITYSDK_OFFSET(0xE9EED00)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xE9EECA0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE9EEBC0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0xE9EECE0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET UNITYSDK_OFFSET(0xE9EECC0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET UNITYSDK_OFFSET(0xE9EF330)
#define UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET UNITYSDK_OFFSET(0xE9EF6B0)
#define UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET UNITYSDK_OFFSET(0xE9EF9F0)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int UI3DClippable_TypeDefinitionIndex = 47733;

	class UI3DClippable : public ::UnityEngine::UI::Graphic
	{
	public:
		::Il2CppArray<::UnityEngine::MeshRenderer*>* _MeshRenderers; // 0xA0
		::UnityEngine::Camera* GLCKFPKNEIM; // 0xA8
		::UnityEngine::UI::RectMask2D* FBKALEJLIOO; // 0xB0
		::UnityEngine::Vector4 MEKEOLBEDPL; // 0xB8
		::UnityEngine::Vector4 BBLBAAFCLGK; // 0xC8
		static ::UnityEngine::MaterialPropertyBlock** StaticGet_PPFKJEENJCB()
		{
			return (::UnityEngine::MaterialPropertyBlock**)UnitySDK::FromName("UnityEngine.UI", "UI3DClippable")->GetStaticField(0x14200);
		}

		static ::System::Int32* StaticGet_ICLEBPIPDII()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "UI3DClippable")->GetStaticField(0x4CA0);
		}

		static ::System::Int32* StaticGet_FPCCCNGFPCD()
		{
			return (::System::Int32*)UnitySDK::FromName("UnityEngine.UI", "UI3DClippable")->GetStaticField(0x4CA4);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_CCTOR_OFFSET))();
		}

		::UnityEngine::Camera* get_UICamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_GET_UICAMERA_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONDISABLE_OFFSET))(this);
		}

		::System::Void RecalculateClipping()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_RECALCULATECLIPPING_OFFSET))(this);
		}

		::System::Void Cull(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_CULL_OFFSET))(this, a1, a2);
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ONPOPULATEMESH_OFFSET))(this, a1);
		}

		::System::Void FDBICCMLGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_FDBICCMLGON_OFFSET))(this);
		}

		::UnityEngine::Vector4 ODKCIKCCGID(::UnityEngine::Rect a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Rect))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ODKCIKCCGID_OFFSET))(this, a1);
		}

		::UnityEngine::Vector4 ODBCPKIKBDH(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_ODBCPKIKBDH_OFFSET))(this, a1);
		}

		::System::Void SetClipRect(::UnityEngine::Rect a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPRECT_OFFSET))(this, a1, a2);
		}

		::System::Void SetClipSoftness(::UnityEngine::Vector4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_SETCLIPSOFTNESS_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* UnityEngine_UI_IClippable_get_gameObject()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_UI3DCLIPPABLE_UNITYENGINE_UI_ICLIPPABLE_GET_GAMEOBJECT_OFFSET))(this);
		}

	};
}
