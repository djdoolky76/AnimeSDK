#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/ObjectPropertyParams.h"

namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_CLASSPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29EA10)

namespace UnrealTypes
{
	inline static constexpr unsigned int ClassPropertyParams_TypeDefinitionIndex = 27783;

	class ClassPropertyParams : public ::UnrealTypes::ObjectPropertyParams
	{
	public:
		::System::Func_1<::UnrealTypes::Class*>* MetaClassFunc; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_CLASSPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
