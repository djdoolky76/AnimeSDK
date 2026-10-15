#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }

#define IRI2_PACKVERTEXTYPE_AHPLJNOCMFN_OFFSET UNITYSDK_OFFSET(0x16527EB0)
#define IRI2_PACKVERTEXTYPE_EPHPLJDKAPE_OFFSET UNITYSDK_OFFSET(0x2E842F0)
#define IRI2_PACKVERTEXTYPE_FELJOCJOOHJ_1_OFFSET UNITYSDK_OFFSET(0x165280C0)
#define IRI2_PACKVERTEXTYPE_FELJOCJOOHJ_OFFSET UNITYSDK_OFFSET(0x165280B0)
#define IRI2_PACKVERTEXTYPE_NGFADEFHPAH_1_OFFSET UNITYSDK_OFFSET(0x2E842D0)
#define IRI2_PACKVERTEXTYPE_NGFADEFHPAH_OFFSET UNITYSDK_OFFSET(0x2E84280)

namespace IRI2
{
	inline static constexpr unsigned int PackVertexType_TypeDefinitionIndex = 49662;

	struct alignas(4) PackVertexType
	{
		::UnityEngine::Vector3 Position; // 0x10
		::System::UInt32 PackUV; // 0x1C
		::UnityEngine::Vector4 Tangent; // 0x20
		::System::Void NGFADEFHPAH(::Il2CppArray<::UnityEngine::Vector4>* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_NGFADEFHPAH_OFFSET))(this, a1, a2);
		}

		::System::Void NGFADEFHPAH_1(::System::Object* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::Int32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_NGFADEFHPAH_1_OFFSET))(this, a1, a2);
		}

		::System::Void EPHPLJDKAPE(::Il2CppArray<::UnityEngine::Vector4>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_EPHPLJDKAPE_OFFSET))(this, a1);
		}

		static ::System::Int32 AHPLJNOCMFN()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_AHPLJNOCMFN_OFFSET))();
		}

		static ::System::Single FELJOCJOOHJ(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_FELJOCJOOHJ_OFFSET))(a1);
		}

		static ::System::UInt32 FELJOCJOOHJ_1(::System::Single a1)
		{
			return ((::System::UInt32(*)(::System::Single))((::PBYTE)hIl2Cpp + IRI2_PACKVERTEXTYPE_FELJOCJOOHJ_1_OFFSET))(a1);
		}

	};
}
