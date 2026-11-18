#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NodeGraph/VariantUnion.h"

#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_1_OFFSET UNITYSDK_OFFSET(0x15FBCF20)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_OFFSET UNITYSDK_OFFSET(0x15FBCDF0)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_BOOLEAN__TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x15FBD1A0)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL_TRYCASTTO_OFFSET UNITYSDK_OFFSET(0x15FBD120)
#define NODEGRAPH_VARIANTUNIONCASTER_BOOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15FBD190)

namespace NodeGraph
{
	inline static constexpr unsigned int VariantUnionCaster_Bool_TypeDefinitionIndex = 86563;

	class VariantUnionCaster_Bool : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL__CTOR_OFFSET))(this);
		}

		::NodeGraph::VariantUnion CastFrom(::System::Boolean value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_OFFSET))(this, value);
		}

		::NodeGraph::VariantUnion CastFrom_1(::System::Object* value)
		{
			return ((::NodeGraph::VariantUnion(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_CASTFROM_1_OFFSET))(this, value);
		}

		::System::Boolean TryCastTo(::NodeGraph::VariantUnion& value, ::System::Boolean& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_TRYCASTTO_OFFSET))(this, value, v);
		}

		::System::Boolean NodeGraph_IVariantUnionCaster_System_Boolean__TryCastTo(::NodeGraph::VariantUnion& value, ::System::Boolean& v)
		{
			return ((::System::Boolean(*)(::PVOID, ::NodeGraph::VariantUnion&, ::System::Boolean&))((::PBYTE)hIl2Cpp + NODEGRAPH_VARIANTUNIONCASTER_BOOL_NODEGRAPH_IVARIANTUNIONCASTER_SYSTEM_BOOLEAN__TRYCASTTO_OFFSET))(this, value, v);
		}
	};
}
