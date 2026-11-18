#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

#define NODEGRAPH_VARIANTUNIONCASTER_OBJECT_CASTFROM_OFFSET UNITYSDK_OFFSET(0x15F55A20)
#define NODEGRAPH_VARIANTUNIONCASTER_OBJECT_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_OBJECT__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x15F55B20)
#define NODEGRAPH_VARIANTUNIONCASTER_OBJECT_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x15F55AA0)
#define NODEGRAPH_VARIANTUNIONCASTER_OBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x15F55B10)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Object_TypeDefinitionIndex = 86085;

	class VariantUnionCaster_Object : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_OBJECT__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_OBJECT_CASTFROM_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Object*& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Object*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_OBJECT_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Object__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Object*& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Object*&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_OBJECT_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_OBJECT__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
