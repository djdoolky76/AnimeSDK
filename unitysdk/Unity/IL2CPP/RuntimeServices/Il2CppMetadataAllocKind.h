#pragma once
#include "unitysdk/unitysdk.h"

namespace Unity::IL2CPP::RuntimeServices
{
	inline static constexpr unsigned int Il2CppMetadataAllocKind_TypeDefinitionIndex = 6980;

	enum class Il2CppMetadataAllocKind : ::System::Int32
	{
		ExtraMethodInfo = 8,
		MethodInfo = 3,
		FieldInfo = 7,
		PropertyInfo = 6,
		String = 9,
		StringLiteral = 10,
		Vtable = 2,
		Inflated = 16,
		MethodRGCTX = 12,
		Class = 1,
		Miscellaneous = 0,
		GenericClass = 13,
		GenericMethod = 14,
		GenericInst = 15,
		ParameterInfo = 4,
		EventInfo = 5,
		ClassRGCTX = 11,
	};
}
