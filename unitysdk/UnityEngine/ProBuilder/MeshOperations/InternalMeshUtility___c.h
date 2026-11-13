#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xD71B0E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C_CTOR_OFFSET UNITYSDK_OFFSET(0xD71B120)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0xD71B130)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET UNITYSDK_OFFSET(0xD71B1E0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET UNITYSDK_OFFSET(0xD71B290)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET UNITYSDK_OFFSET(0xD71B550)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET UNITYSDK_OFFSET(0xD71B340)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET UNITYSDK_OFFSET(0xD71B3F0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET UNITYSDK_OFFSET(0xD71B4A0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int InternalMeshUtility___c_TypeDefinitionIndex = 45575;

	class InternalMeshUtility___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67030);
		}

		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67038);
		}

		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>** StaticGet___9__1_2()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector2>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67040);
		}

		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67048);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67050);
		}

		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Vector3>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67058);
		}

		static ::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>** StaticGet___9__1_1()
		{
			return (::System::Func_2<::UnityEngine::Mesh*, ::Il2CppArray<::UnityEngine::Color>*>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67060);
		}

		static ::System::Func_2<::System::Boolean, ::System::Boolean>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::System::Boolean, ::System::Boolean>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x67068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C_CTOR_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _CreateMeshWithTransform_b__1_0(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* _CreateMeshWithTransform_b__1_1(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _CreateMeshWithTransform_b__1_2(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__CREATEMESHWITHTRANSFORM_B__1_2_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* _ResetPbObjectWithMeshFilter_b__2_0(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_0_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Color>* _ResetPbObjectWithMeshFilter_b__2_1(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Color>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_1_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector2>* _ResetPbObjectWithMeshFilter_b__2_2(::UnityEngine::Mesh* a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector2>*(*)(::PVOID, ::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__RESETPBOBJECTWITHMESHFILTER_B__2_2_OFFSET))(this, a1);
		}

		::System::Boolean _FilterUnusedSubmeshIndexes_b__3_0(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_INTERNALMESHUTILITY___C__FILTERUNUSEDSUBMESHINDEXES_B__3_0_OFFSET))(this, a1);
		}

	};
}
