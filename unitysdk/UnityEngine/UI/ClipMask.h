#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/UIVertex.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace UnityEngine { class Mesh; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::Pooled { template <typename T> class PooledList_1; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI { class VertexHelper; }

#define UNITYENGINE_UI_CLIPMASK_ANGOIOFGDMF_OFFSET UNITYSDK_OFFSET(0xE9EC480)
#define UNITYENGINE_UI_CLIPMASK_CCTOR_OFFSET UNITYSDK_OFFSET(0xE9EEAE0)
#define UNITYENGINE_UI_CLIPMASK_CGCJFLMAKCF_OFFSET UNITYSDK_OFFSET(0xE9EC6D0)
#define UNITYENGINE_UI_CLIPMASK_CICJNKDNMNF_OFFSET UNITYSDK_OFFSET(0xE9EC400)
#define UNITYENGINE_UI_CLIPMASK_CTOR_OFFSET UNITYSDK_OFFSET(0xE9EC5A0)
#define UNITYENGINE_UI_CLIPMASK_DCJHDFHKINI_OFFSET UNITYSDK_OFFSET(0xE9EDA80)
#define UNITYENGINE_UI_CLIPMASK_EOAGKKAIAGM_OFFSET UNITYSDK_OFFSET(0xE9ED7A0)
#define UNITYENGINE_UI_CLIPMASK_HGFFIHAPDLJ_OFFSET UNITYSDK_OFFSET(0xE9EC520)
#define UNITYENGINE_UI_CLIPMASK_ICHIGOANCML_OFFSET UNITYSDK_OFFSET(0xE9EE050)
#define UNITYENGINE_UI_CLIPMASK_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xE9ED190)
#define UNITYENGINE_UI_CLIPMASK_LIFHLFMPNGL_OFFSET UNITYSDK_OFFSET(0xE9ED5B0)
#define UNITYENGINE_UI_CLIPMASK_MODIFYMESH_1_OFFSET UNITYSDK_OFFSET(0xE9EC5C0)
#define UNITYENGINE_UI_CLIPMASK_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0xE9EC5B0)
#define UNITYENGINE_UI_CLIPMASK_ONENABLE_OFFSET UNITYSDK_OFFSET(0xE9ECF60)

namespace UnityEngine::UI
{
	inline static constexpr unsigned int ClipMask_TypeDefinitionIndex = 47731;

	class ClipMask : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::UnityEngine::RectTransform* clipRectTransform; // 0x20
		::UnityEngine::RectTransform* FPAJPFIBHGN; // 0x28
		::UnityEngine::UI::RawImage* CFNAFKGPNJJ; // 0x30
		::UnityEngine::UI::Image* CCHBLMAJPKP; // 0x38
		::UnityEngine::Vector3 MCLJEGPIAJO; // 0x40
		::UnityEngine::Vector3 CEBEBDKKIAJ; // 0x4C
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_EPDBHLNONLD()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("UnityEngine.UI", "ClipMask")->GetStaticField(0x14050);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_MFCJMJKCFJE()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("UnityEngine.UI", "ClipMask")->GetStaticField(0x14058);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_CCTOR_OFFSET))();
		}

		::UnityEngine::RectTransform* CICJNKDNMNF()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_CICJNKDNMNF_OFFSET))(this);
		}

		::UnityEngine::UI::RawImage* ANGOIOFGDMF()
		{
			return ((::UnityEngine::UI::RawImage*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_ANGOIOFGDMF_OFFSET))(this);
		}

		::UnityEngine::UI::Image* HGFFIHAPDLJ()
		{
			return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_HGFFIHAPDLJ_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::Mesh* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_MODIFYMESH_OFFSET))(this, a1);
		}

		::System::Void ModifyMesh_1(::UnityEngine::UI::VertexHelper* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_MODIFYMESH_1_OFFSET))(this, a1);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_ONENABLE_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_LATEUPDATE_OFFSET))(this);
		}

		::System::Void CGCJFLMAKCF(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_CGCJFLMAKCF_OFFSET))(this, a1, a2);
		}

		::System::Void LIFHLFMPNGL(::UnityEngine::Rect a1, ::UnityEngine::Vector2 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_LIFHLFMPNGL_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector4 EOAGKKAIAGM(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector4(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_EOAGKKAIAGM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DCJHDFHKINI(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_DCJHDFHKINI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ICHIGOANCML(::UnityEngine::UI::VertexHelper* a1, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>* a2, ::UnityEngine::Vector4 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*, ::UnityEngine::Pooled::PooledList_1<::UnityEngine::UIVertex>*, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_CLIPMASK_ICHIGOANCML_OFFSET))(this, a1, a2, a3);
		}

	};
}
