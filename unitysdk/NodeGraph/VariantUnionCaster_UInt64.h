#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

#define NODEGRAPH_VARIANTUNIONCASTER_UINT64_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0xFD50B40)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT64_CASTFROM_OFFSET UNITYSDK_OFFSET(0xFD50A30)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT64_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_UINT64__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xFD50D80)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT64_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0xFD50CF0)
#define NODEGRAPH_VARIANTUNIONCASTER_UINT64__CTOR_OFFSET UNITYSDK_OFFSET(0xFD50D70)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_UInt64_TypeDefinitionIndex = 88317;

	class VariantUnionCaster_UInt64 : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT64__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::UInt64 value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT64_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT64_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::UInt64& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::UInt64&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT64_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_UInt64__TryCastTo(::NodeGraph::VariantUnion& value, ::System::UInt64& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::UInt64&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_UINT64_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_UINT64__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
