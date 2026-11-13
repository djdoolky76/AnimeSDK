#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector4.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine::ProBuilder { class Face; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD72D2E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD72D320)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__GETUVS_B__2_0_OFFSET UNITYSDK_OFFSET(0xD72D330)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_0_OFFSET UNITYSDK_OFFSET(0xD72D350)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_1_OFFSET UNITYSDK_OFFSET(0xD72D440)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__11_0_OFFSET UNITYSDK_OFFSET(0xD72D620)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__9_0_OFFSET UNITYSDK_OFFSET(0xD72D530)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__SEWUVS_B__4_1_OFFSET UNITYSDK_OFFSET(0xD72D340)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int UVEditing___c_TypeDefinitionIndex = 45595;

	class UVEditing___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Vector4, ::UnityEngine::Vector2>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x678E0);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x678E8);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__8_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x678F0);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x678F8);
		}

		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>** StaticGet___9__4_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>, ::System::Int32>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67900);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67908);
		}

		static ::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>** StaticGet___9__8_1()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector2 _GetUVs_b__2_0(::UnityEngine::Vector4 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector4))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__GETUVS_B__2_0_OFFSET))(this, a1);
		}

		::System::Int32 _SewUVs_b__4_1(::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32> a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__SEWUVS_B__4_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesAuto_b__8_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesAuto_b__8_1(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESAUTO_B__8_1_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesBox_b__9_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__9_0_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* _ProjectFacesBox_b__11_0(::UnityEngine::ProBuilder::Face* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID, ::UnityEngine::ProBuilder::Face*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_UVEDITING___C__PROJECTFACESBOX_B__11_0_OFFSET))(this, a1);
		}

	};
}
