#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F211370)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2113B0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__SPLITBYMAXVERTEXCOUNT_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F2113C0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	class CombineMeshes___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x543F0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x543F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _SplitByMaxVertexCount_b__5_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_COMBINEMESHES___C__SPLITBYMAXVERTEXCOUNT_B__5_0_OFFSET))(this, a1);
		}

	};
}
