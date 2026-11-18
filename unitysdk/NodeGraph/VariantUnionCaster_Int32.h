#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

#define NODEGRAPH_VARIANTUNIONCASTER_INT32_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0x14F4E620)
#define NODEGRAPH_VARIANTUNIONCASTER_INT32_CASTFROM_OFFSET UNITYSDK_OFFSET(0x14F4E500)
#define NODEGRAPH_VARIANTUNIONCASTER_INT32_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_INT32__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x14F4E860)
#define NODEGRAPH_VARIANTUNIONCASTER_INT32_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x14F4E7E0)
#define NODEGRAPH_VARIANTUNIONCASTER_INT32__CTOR_OFFSET UNITYSDK_OFFSET(0x14F4E850)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Int32_TypeDefinitionIndex = 60350;

	class VariantUnionCaster_Int32 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT32__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Int32 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT32_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT32_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Int32& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Int32&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT32_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Int32__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Int32& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Int32&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_INT32_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_INT32__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
