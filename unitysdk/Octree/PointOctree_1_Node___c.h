#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2> class Func_2; }

namespace Octree
{
	inline static constexpr unsigned int PointOctree_1_Node___c_TypeDefinitionIndex = 66465;

	template <typename T>
	class PointOctree_1_Node___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(PointOctree_1_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::Object*, T>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Object*, T>**)Il2CppClass::FromTypeDefinitionIndex(PointOctree_1_Node___c_TypeDefinitionIndex)->GetStaticField(0x0);
		}
	};
}
