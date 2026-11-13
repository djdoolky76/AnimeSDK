#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/ProBuilder/SimpleTuple_2.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD6F6210)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD6F6250)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET UNITYSDK_OFFSET(0xD6F6260)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET UNITYSDK_OFFSET(0xD6F62A0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET UNITYSDK_OFFSET(0xD6F62C0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET UNITYSDK_OFFSET(0xD6F62E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET UNITYSDK_OFFSET(0xD6F6280)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int Bevel___c_TypeDefinitionIndex = 45553;

	class Bevel___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66640);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66648);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>** StaticGet___9__0_6()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>, ::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66650);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_2()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66658);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66660);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__0_3()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x66668);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_0_OFFSET))(this, a1);
		}

		::System::Int32 _BevelEdges_b__0_6(::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<::System::Int32>*>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_6_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_1_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_2_OFFSET))(this, a1);
		}

		::UnityEngine::ProBuilder::Face* _BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_BEVEL___C__BEVELEDGES_B__0_3_OFFSET))(this, a1);
		}

	};
}
