#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class Class; }

#define UNREALTYPES_OBJECTPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E29EA20)

namespace UnrealTypes
{
	inline static constexpr unsigned int ObjectPropertyParams_TypeDefinitionIndex = 27782;

	class ObjectPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Func_1<::UnrealTypes::Class*>* ClassFunc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_OBJECTPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
