#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16533360)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_HCDFMDOINHE_OFFSET UNITYSDK_OFFSET(0x16532BC0)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_MFCDKJIHDEH_OFFSET UNITYSDK_OFFSET(0x165332C0)
#define IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_PCNAKDOLCCD_OFFSET UNITYSDK_OFFSET(0x16532B70)

inline static constexpr unsigned int IRI_BaseBuildingCustomData_IndependentRenderObj_TypeDefinitionIndex = 47163;

	class IRI_BaseBuildingCustomData_IndependentRenderObj : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* RendererMatrixList; // 0x10
		::UnityEngine::GameObject* Prefab; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* GameObjList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_CTOR_OFFSET))(this);
		}

		::System::Void PCNAKDOLCCD(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_PCNAKDOLCCD_OFFSET))(this, a1);
		}

		::System::Void HCDFMDOINHE(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_HCDFMDOINHE_OFFSET))(this, a1, a2);
		}

		::System::Void MFCDKJIHDEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI_BASEBUILDINGCUSTOMDATA_INDEPENDENTRENDEROBJ_MFCDKJIHDEH_OFFSET))(this);
		}

	};
