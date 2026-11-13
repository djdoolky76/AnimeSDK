#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class ClientInputData; }
namespace RPG::Client { class ModelUI3DModeConstraint; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET UNITYSDK_OFFSET(0x1AA12930)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA12C20)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA12070)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0x1AA12A90)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET UNITYSDK_OFFSET(0x1AA120C0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1AA124D0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET UNITYSDK_OFFSET(0x1AA121F0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET UNITYSDK_OFFSET(0x1AA12400)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET UNITYSDK_OFFSET(0x1AA12880)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET UNITYSDK_OFFSET(0x1AA12A40)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET UNITYSDK_OFFSET(0x1AA12480)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET UNITYSDK_OFFSET(0x1AA12AA0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET UNITYSDK_OFFSET(0x1AA12540)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET UNITYSDK_OFFSET(0x1AA12680)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET UNITYSDK_OFFSET(0x1AA127C0)
#define RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET UNITYSDK_OFFSET(0x1AA12AB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int UI3DModelRotateComponent_TypeDefinitionIndex = 58777;

	class UI3DModelRotateComponent : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::UnityEngine::Transform* _RotateTarget; // 0x18
		::RPG::Client::ClientInputData* _InputDataRef; // 0x20
		::System::Collections::Generic::List_1<::RPG::Client::ModelUI3DModeConstraint*>* _modelUI3DModeConstraints; // 0x28
		::UnityEngine::Transform* _CameraTrans; // 0x30
		::System::Single _BeginBlendEular; // 0x38
		::UnityEngine::Vector3 _CacheEuler; // 0x3C
		::System::Boolean _EnableDragRotate_k__BackingField; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single _BeginBlendStamp; // 0x4C
		// static const ::System::Object BLEND_DURATION; // 0x0
		// static const ::System::Object _ROTATE_SCALE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_DISPOSE_OFFSET))(this);
		}

		::System::Void InitComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_INITCOMPONENT_OFFSET))(this);
		}

		::System::Void OnModelArtLoaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTLOADED_OFFSET))(this);
		}

		::System::Void OnModelArtUnloaded()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_ONMODELARTUNLOADED_OFFSET))(this);
		}

		::System::Void SetRotateTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETROTATETARGET_OFFSET))(this, a1);
		}

		::System::Void LateUpdate(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_LATEUPDATE_OFFSET))(this, a1);
		}

		::System::Void ResetToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_RESETTOORIGIN_OFFSET))(this);
		}

		::System::Void BlendToOrigin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_BLENDTOORIGIN_OFFSET))(this);
		}

		::System::Void SetCameraTrans(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SETCAMERATRANS_OFFSET))(this, a1);
		}

		::System::Boolean get_EnableDragRotate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_GET_ENABLEDRAGROTATE_OFFSET))(this);
		}

		::System::Void set_EnableDragRotate(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT_SET_ENABLEDRAGROTATE_OFFSET))(this, a1);
		}

		::System::Void _UpdateRotation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__UPDATEROTATION_OFFSET))(this);
		}

		::System::Void _TickBlend()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKBLEND_OFFSET))(this);
		}

		::System::Void _TickDrag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKDRAG_OFFSET))(this);
		}

		::System::Void _TickModelConstraints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_UI3DMODELROTATECOMPONENT__TICKMODELCONSTRAINTS_OFFSET))(this);
		}

	};
}
