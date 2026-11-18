#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

#define NODEGRAPH_VARIANTUNIONCASTER_FLOAT_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0x12918CF0)
#define NODEGRAPH_VARIANTUNIONCASTER_FLOAT_CASTFROM_OFFSET UNITYSDK_OFFSET(0x12918BD0)
#define NODEGRAPH_VARIANTUNIONCASTER_FLOAT_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_SINGLE__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x12918F50)
#define NODEGRAPH_VARIANTUNIONCASTER_FLOAT_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x12918ED0)
#define NODEGRAPH_VARIANTUNIONCASTER_FLOAT__CTOR_OFFSET UNITYSDK_OFFSET(0x12918F40)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Float_TypeDefinitionIndex = 66931;

	class VariantUnionCaster_Float : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_FLOAT__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Single value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_FLOAT_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_FLOAT_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Single& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Single&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_FLOAT_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Single__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Single& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Single&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_FLOAT_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_SINGLE__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
