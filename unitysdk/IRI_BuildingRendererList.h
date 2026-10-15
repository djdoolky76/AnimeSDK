#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
#include "unitysdk/IAJPMNLEFLJ.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IRI_BUILDINGRENDERERLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x16533620)
#define IRI_BUILDINGRENDERERLIST_KPGEKGPDKCK_OFFSET UNITYSDK_OFFSET(0x165335C0)
#define IRI_BUILDINGRENDERERLIST_OFNJFAEPOKO_OFFSET UNITYSDK_OFFSET(0x16533470)

	class IRI_BuildingRendererList : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Object*>* RendererList; // 0x18
		::UnityEngine::Bounds RenderBounds; // 0x20
		::System::Int32 MatrixDataVersion; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_CTOR_OFFSET))(this);
		}

		::System::Void OFNJFAEPOKO(::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_OFNJFAEPOKO_OFFSET))(this, a1);
		}

		::IAJPMNLEFLJ KPGEKGPDKCK()
		{
			return ((::IAJPMNLEFLJ(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BUILDINGRENDERERLIST_KPGEKGPDKCK_OFFSET))(this);
		}

	};
