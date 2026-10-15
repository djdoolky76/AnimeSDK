#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHHANDLES___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1F5330)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1F5370)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET UNITYSDK_OFFSET(0x1F1F53D0)
#define UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET UNITYSDK_OFFSET(0x1F1F5380)

namespace UnityEngine::ProBuilder
{
	class MeshHandles___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder", "<>c")->GetStaticField(0x53830);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "<>c")->GetStaticField(0x53838);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__10_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder", "<>c")->GetStaticField(0x53840);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMesh_b__9_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESH_B__9_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _CreateFaceMeshFromFaces_b__10_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHHANDLES___C__CREATEFACEMESHFROMFACES_B__10_0_OFFSET))(this, a1);
		}

	};
}
