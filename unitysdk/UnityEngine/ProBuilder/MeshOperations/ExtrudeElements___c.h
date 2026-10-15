#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Face; }
namespace UnityEngine::ProBuilder { class FaceRebuildData; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F22C240)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F22C280)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__DETACHFACES_B__3_0_OFFSET UNITYSDK_OFFSET(0x1F22C290)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__EXTRUDEPERFACE_B__4_0_OFFSET UNITYSDK_OFFSET(0x1F22C2B0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int ExtrudeElements___c_TypeDefinitionIndex = 44498;

	class ExtrudeElements___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x547D0);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x547D8);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x547E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::ProBuilder::Face* _DetachFaces_b__3_0(::UnityEngine::ProBuilder::FaceRebuildData* a1)
		{
			return ((::UnityEngine::ProBuilder::Face*(*)(::PVOID, ::UnityEngine::ProBuilder::FaceRebuildData*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__DETACHFACES_B__3_0_OFFSET))(this, a1);
		}

		::System::Int32 _ExtrudePerFace_b__4_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_EXTRUDEELEMENTS___C__EXTRUDEPERFACE_B__4_0_OFFSET))(this, a1);
		}

	};
}
