#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/Generator/CGSpot.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace ToolBuddy::Pooling::Pools { template <typename T> class ArrayPool_1; }

#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_CGSPOT_OFFSET UNITYSDK_OFFSET(0x1F324C20)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_INT32_OFFSET UNITYSDK_OFFSET(0x1F324B60)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_SINGLE_OFFSET UNITYSDK_OFFSET(0x1F324BC0)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR2_OFFSET UNITYSDK_OFFSET(0x1F324A40)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR3_OFFSET UNITYSDK_OFFSET(0x1F324AA0)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR4_OFFSET UNITYSDK_OFFSET(0x1F324B00)
#define FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F324960)

namespace FluffyUnderware::Curvy::Pools
{
	inline static constexpr unsigned int ArrayPools_TypeDefinitionIndex = 37643;

	class ArrayPools : public ::System::Object
	{
	public:
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector2>** StaticGet__Vector2_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector2>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2BFE0);
		}
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::FluffyUnderware::Curvy::Generator::CGSpot>** StaticGet__CGSpot_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::FluffyUnderware::Curvy::Generator::CGSpot>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2BFE8);
		}
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Single>** StaticGet__Single_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2BFF0);
		}
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector3>** StaticGet__Vector3_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2BFF8);
		}
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Int32>** StaticGet__Int32_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2C000);
		}
		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector4>** StaticGet__Vector4_k__BackingField()
		{
			return (::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector4>**)Il2CppClass::FromTypeDefinitionIndex(ArrayPools_TypeDefinitionIndex)->GetStaticField(0x2C008);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS__CCTOR_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector2>* get_Vector2()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector2>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR2_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector3>* get_Vector3()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector3>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR3_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector4>* get_Vector4()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::UnityEngine::Vector4>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_VECTOR4_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Int32>* get_Int32()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Int32>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_INT32_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Single>* get_Single()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::System::Single>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_SINGLE_OFFSET))();
		}

		static ::ToolBuddy::Pooling::Pools::ArrayPool_1<::FluffyUnderware::Curvy::Generator::CGSpot>* get_CGSpot()
		{
			return ((::ToolBuddy::Pooling::Pools::ArrayPool_1<::FluffyUnderware::Curvy::Generator::CGSpot>*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_POOLS_ARRAYPOOLS_GET_CGSPOT_OFFSET))();
		}
	};
}
