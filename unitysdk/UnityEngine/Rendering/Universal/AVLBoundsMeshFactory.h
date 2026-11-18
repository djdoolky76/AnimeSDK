#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/Universal/LightShape.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Mesh; }

#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ADDQUAD_OFFSET UNITYSDK_OFFSET(0x1E362C80)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ADDTRI_OFFSET UNITYSDK_OFFSET(0x1E362B60)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDBOXINTO_OFFSET UNITYSDK_OFFSET(0x1E3613E0)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDCONEINTO_OFFSET UNITYSDK_OFFSET(0x1E360BB0)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDFRUSTUMINTO_OFFSET UNITYSDK_OFFSET(0x1E360F10)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDFRUSTUMOBLIQUE_OFFSET UNITYSDK_OFFSET(0x1E362A00)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDSPHEREINTO_OFFSET UNITYSDK_OFFSET(0x1E361820)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILD_OFFSET UNITYSDK_OFFSET(0x1E360980)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_COMMIT_OFFSET UNITYSDK_OFFSET(0x1E362830)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ORIENTOUTWARD_OFFSET UNITYSDK_OFFSET(0x1E362D30)
#define UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E363310)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int AVLBoundsMeshFactory_TypeDefinitionIndex = 26350;

	class AVLBoundsMeshFactory : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Int32>** StaticGet_s_tris()
		{
			return (::System::Collections::Generic::List_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(AVLBoundsMeshFactory_TypeDefinitionIndex)->GetStaticField(0x23F90);
		}
		static ::System::Collections::Generic::List_1<::UnityEngine::Vector3>** StaticGet_s_verts()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(AVLBoundsMeshFactory_TypeDefinitionIndex)->GetStaticField(0x23F98);
		}
		// static const ::System::Int32 SphereSlices = 0x10; // 0x0
		// static const ::System::Int32 SphereStacks = 0xC; // 0x0
		// static const ::System::Int32 ConeSegments = 0x14; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY__CCTOR_OFFSET))();
		}

		static ::System::Void Build(::UnityEngine::Mesh* mesh, ::UnityEngine::Rendering::Universal::LightShape shape, ::System::Single range, ::UnityEngine::Vector2 rect, ::System::Single primaryAngleDeg, ::System::Single spreadTanX, ::System::Single spreadTanY)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::UnityEngine::Rendering::Universal::LightShape, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILD_OFFSET))(mesh, shape, range, rect, primaryAngleDeg, spreadTanX, spreadTanY);
		}

		static ::System::Void BuildFrustumOblique(::UnityEngine::Mesh* mesh, ::System::Single range, ::UnityEngine::Vector2 rect, ::System::Single spreadTanX, ::System::Single spreadTanY, ::System::Single shearX, ::System::Single shearY)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*, ::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDFRUSTUMOBLIQUE_OFFSET))(mesh, range, rect, spreadTanX, spreadTanY, shearX, shearY);
		}

		static ::System::Void BuildSphereInto(::System::Single radius)
		{
			return ((::System::Void(*)(::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDSPHEREINTO_OFFSET))(radius);
		}

		static ::System::Void BuildConeInto(::System::Single range, ::System::Single primaryAngleDeg)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDCONEINTO_OFFSET))(range, primaryAngleDeg);
		}

		static ::System::Void BuildFrustumInto(::System::Single range, ::UnityEngine::Vector2 rect, ::System::Single spreadTanX, ::System::Single spreadTanY, ::System::Single shearX, ::System::Single shearY)
		{
			return ((::System::Void(*)(::System::Single, ::UnityEngine::Vector2, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDFRUSTUMINTO_OFFSET))(range, rect, spreadTanX, spreadTanY, shearX, shearY);
		}

		static ::System::Void BuildBoxInto(::System::Single hx, ::System::Single hy, ::System::Single hz)
		{
			return ((::System::Void(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_BUILDBOXINTO_OFFSET))(hx, hy, hz);
		}

		static ::System::Void AddTri(::System::Int32 a, ::System::Int32 b, ::System::Int32 c)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ADDTRI_OFFSET))(a, b, c);
		}

		static ::System::Void AddQuad(::System::Int32 a, ::System::Int32 b, ::System::Int32 c, ::System::Int32 d)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ADDQUAD_OFFSET))(a, b, c, d);
		}

		static ::System::Void OrientOutward()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_ORIENTOUTWARD_OFFSET))();
		}

		static ::System::Void Commit(::UnityEngine::Mesh* mesh)
		{
			return ((::System::Void(*)(::UnityEngine::Mesh*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_AVLBOUNDSMESHFACTORY_COMMIT_OFFSET))(mesh);
		}
	};
}
