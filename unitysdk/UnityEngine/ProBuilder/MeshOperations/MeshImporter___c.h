#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace UnityEngine::ProBuilder { class Vertex; }

#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F206990)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2069D0)
#define UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__IMPORT_B__9_0_OFFSET UNITYSDK_OFFSET(0x1F2069E0)

namespace UnityEngine::ProBuilder::MeshOperations
{
	inline static constexpr unsigned int MeshImporter___c_TypeDefinitionIndex = 44506;

	class MeshImporter___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>** StaticGet___9__9_0()
		{
			return (::System::Func_2<::UnityEngine::ProBuilder::Vertex*, ::UnityEngine::Vector3>**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x4F710);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine.ProBuilder.MeshOperations", "<>c")->GetStaticField(0x4F718);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C_CTOR_OFFSET))(this);
		}

		::UnityEngine::Vector3 _Import_b__9_0(::UnityEngine::ProBuilder::Vertex* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::ProBuilder::Vertex*))((::PBYTE)hIl2Cpp + UNITYENGINE_PROBUILDER_MESHOPERATIONS_MESHIMPORTER___C__IMPORT_B__9_0_OFFSET))(this, a1);
		}

	};
}
