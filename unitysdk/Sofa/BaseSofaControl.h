#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/FPBBBGGNCIF.h"
class EIAPGPIHHKO;
class EKOGCACGADH;
namespace Sofa { class BaseSofaControl; }
namespace Sofa { class BaseSofaWindow; }
namespace System { class IDisposable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE973250)
#define SOFA_BASESOFACONTROL_BIND_OFFSET UNITYSDK_OFFSET(0xE973840)
#define SOFA_BASESOFACONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xE9739C0)
#define SOFA_BASESOFACONTROL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xE9733C0)
#define SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE973010)
#define SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET UNITYSDK_OFFSET(0xE972FC0)
#define SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET UNITYSDK_OFFSET(0xE9731B0)
#define SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE973030)
#define SOFA_BASESOFACONTROL_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE973550)
#define SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET UNITYSDK_OFFSET(0xE973020)
#define SOFA_BASESOFACONTROL__ADDCHILD_OFFSET UNITYSDK_OFFSET(0xE973660)
#define SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0xE973930)
#define SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__27_0_OFFSET UNITYSDK_OFFSET(0xE9739F0)
#define SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0xE9735E0)
#define SOFA_BASESOFACONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE973620)
#define SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0xE9735A0)
#define SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET UNITYSDK_OFFSET(0xE973750)

namespace Sofa
{
	inline static constexpr unsigned int BaseSofaControl_TypeDefinitionIndex = 49681;

	class BaseSofaControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Object* _DataContext_k__BackingField; // 0x18
		::System::Boolean _Disposed; // 0x20
		::System::Byte _padding0[0x7];
		::EKOGCACGADH* _AssetLoader; // 0x28
		::EIAPGPIHHKO* _ControlHostInstance; // 0x30
		::Sofa::BaseSofaWindow* OwnerWindow; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* get_ViewTransform()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET_VIEWTRANSFORM_OFFSET))(this);
		}

		::System::Object* get_DataContext()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET_DATACONTEXT_OFFSET))(this);
		}

		::System::Void set_DataContext(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_SET_DATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void InitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_INITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void BindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_BINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _AddChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ADDCHILD_OFFSET))(this, a1);
		}

		::System::Void _RemoveChild(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__REMOVECHILD_OFFSET))(this, a1);
		}

		::System::IDisposable* Bind(::System::Object* a1, ::FPBBBGGNCIF a2)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Object*, ::FPBBBGGNCIF))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_BIND_OFFSET))(this, a1, a2);
		}

		::System::Void _AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::EIAPGPIHHKO* get__ControlHost()
		{
			return ((::EIAPGPIHHKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL_GET__CONTROLHOST_OFFSET))(this);
		}

		::System::Void _get__ControlHost_b__27_0(::Sofa::BaseSofaControl* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Sofa::BaseSofaControl*))((::PBYTE)hIl2Cpp + SOFA_BASESOFACONTROL__GET__CONTROLHOST_B__27_0_OFFSET))(this, a1);
		}

	};
}
