#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IRI2/PackVertexType.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }

#define IRI2_MESHCLUSTERINFO_NIOAMPCPLPM_1_OFFSET UNITYSDK_OFFSET(0x2E841F0)
#define IRI2_MESHCLUSTERINFO_NIOAMPCPLPM_OFFSET UNITYSDK_OFFSET(0x2E841E0)
#define IRI2_MESHCLUSTERINFO_PLGIIKHDPJM_OFFSET UNITYSDK_OFFSET(0x2E841C0)

namespace IRI2
{
	struct alignas(8) MeshClusterInfo
	{
		::Il2CppArray<::System::UInt32>* ClusterIndexData; // 0x10
		::Il2CppArray<::IRI2::PackVertexType>* ClusterVertexData; // 0x18
		::UnityEngine::Bounds ClusterAABB; // 0x20
		::UnityEngine::Vector4 ClusterConeNormal; // 0x38
		::System::Int32 PLGIIKHDPJM()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_PLGIIKHDPJM_OFFSET))(this);
		}

		::System::Void NIOAMPCPLPM(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_NIOAMPCPLPM_OFFSET))(this, a1);
		}

		::System::Void NIOAMPCPLPM_1(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_MESHCLUSTERINFO_NIOAMPCPLPM_1_OFFSET))(this, a1, a2);
		}

	};
}
