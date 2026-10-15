#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MODULEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A7450)

namespace RPG::Editor
{
	class BGCurvePCG_LinearModuleGenerator_ModuleData : public ::System::Object
	{
	public:
		::UnityEngine::Mesh* Mesh; // 0x10
		::UnityEngine::Material* Mat; // 0x18
		::UnityEngine::Vector3 ModuleSize; // 0x20
		::UnityEngine::Vector3 Transform; // 0x2C
		::UnityEngine::Bounds Bounds; // 0x38
		::UnityEngine::Color GizmoColor; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::Vector2>* Ranges; // 0x60
		::System::Boolean IfNeedStartModule; // 0x68
		::System::Byte _padding0[0x7];
		::UnityEngine::GameObject* StartModule; // 0x70
		::System::Boolean IfNeedEndModule; // 0x78
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* EndModule; // 0x80
		::System::Collections::Generic::List_1<::System::Object*>* ItemDatas; // 0x88
		::System::Collections::Generic::List_1<::UnityEngine::Mesh*>* GizmoMeshs; // 0x90
		::System::Collections::Generic::List_1<::System::Object*>* StartScatterAnchors; // 0x98
		::System::Collections::Generic::List_1<::System::Object*>* EndScatterAnchors; // 0xA0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_BGCURVEPCG_LINEARMODULEGENERATOR_MODULEDATA_CTOR_OFFSET))(this);
		}

	};
}
