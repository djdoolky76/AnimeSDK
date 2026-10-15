#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/SlicePlane.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class MeshFilter; }

#define RPG_CLIENT_PLANESLICE_CAJFGOIOKGF_OFFSET UNITYSDK_OFFSET(0xDB69DC0)
#define RPG_CLIENT_PLANESLICE_CTOR_OFFSET UNITYSDK_OFFSET(0xDB6D2C0)
#define RPG_CLIENT_PLANESLICE_ONDRAWGIZMOS_OFFSET UNITYSDK_OFFSET(0xDB6D040)

namespace RPG::Client
{
	inline static constexpr unsigned int PlaneSlice_TypeDefinitionIndex = 70698;

	class PlaneSlice : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Material* Mat; // 0x18
		::RPG::Client::SlicePlane Plane; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::MeshFilter*>* SliceTargets; // 0x38
		::System::Boolean ShowGizmos; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single GizmosSize; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_CTOR_OFFSET))(this);
		}

		::System::Void CAJFGOIOKGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_CAJFGOIOKGF_OFFSET))(this);
		}

		::System::Void OnDrawGizmos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PLANESLICE_ONDRAWGIZMOS_OFFSET))(this);
		}

	};
}
