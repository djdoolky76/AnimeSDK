#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/MeshBVHBakeLevel.h"

namespace System { template <typename T1, typename T2> class Converter_2; }

#define UNITYENGINE_MESH___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E96CDB0)
#define UNITYENGINE_MESH___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E96CDF0)
#define UNITYENGINE_MESH___C__GET_BVHBAKELEVELS_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E96CE00)
#define UNITYENGINE_MESH___C__SET_BVHBAKELEVELS_B__84_0_OFFSET UNITYSDK_OFFSET(0x1E96CE10)

namespace UnityEngine
{
	inline static constexpr unsigned int Mesh___c_TypeDefinitionIndex = 5266;

	class Mesh___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(Mesh___c_TypeDefinitionIndex)->GetStaticField(0x5100);
		}
		static ::System::Converter_2<::System::Byte, ::UnityEngine::MeshBVHBakeLevel>** StaticGet___9__83_0()
		{
			return (::System::Converter_2<::System::Byte, ::UnityEngine::MeshBVHBakeLevel>**)Il2CppClass::FromTypeDefinitionIndex(Mesh___c_TypeDefinitionIndex)->GetStaticField(0x5108);
		}
		static ::System::Converter_2<::UnityEngine::MeshBVHBakeLevel, ::System::Byte>** StaticGet___9__84_0()
		{
			return (::System::Converter_2<::UnityEngine::MeshBVHBakeLevel, ::System::Byte>**)Il2CppClass::FromTypeDefinitionIndex(Mesh___c_TypeDefinitionIndex)->GetStaticField(0x5110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_MESH___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH___C__CTOR_OFFSET))(this);
		}

		::UnityEngine::MeshBVHBakeLevel _get_bvhBakeLevels_b__83_0(::System::Byte level)
		{
			return ((::UnityEngine::MeshBVHBakeLevel(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH___C__GET_BVHBAKELEVELS_B__83_0_OFFSET))(this, level);
		}

		::System::Byte _set_bvhBakeLevels_b__84_0(::UnityEngine::MeshBVHBakeLevel level)
		{
			return ((::System::Byte(*)(::PVOID, ::UnityEngine::MeshBVHBakeLevel))((::PBYTE)hIl2Cpp + UNITYENGINE_MESH___C__SET_BVHBAKELEVELS_B__84_0_OFFSET))(this, level);
		}
	};
}
