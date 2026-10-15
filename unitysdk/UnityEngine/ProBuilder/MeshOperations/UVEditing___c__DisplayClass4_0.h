#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { class KeyValuePair; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1F23FE90)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__SEWUVS_B__0_OFFSET UNITYSDK_OFFSET(0x1F242B50)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing___c__DisplayClass4_0_TypeDefinitionIndex = 44522;

	class UVEditing___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Int32 b; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _SewUVs_b__0(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__DISPLAYCLASS4_0__SEWUVS_B__0_OFFSET))(this, a1);
		}

	};
}
