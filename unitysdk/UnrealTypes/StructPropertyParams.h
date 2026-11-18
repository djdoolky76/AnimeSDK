#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnrealTypes/PropertyParamsBase.h"

namespace System { template <typename T> class Func_1; }
namespace UnrealTypes { class ScriptStruct; }

#define UNREALTYPES_STRUCTPROPERTYPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B50A0)

namespace UnrealTypes
{
	inline static constexpr unsigned int StructPropertyParams_TypeDefinitionIndex = 27784;

	class StructPropertyParams : public ::UnrealTypes::PropertyParamsBase
	{
	public:
		::System::Func_1<::UnrealTypes::ScriptStruct*>* ScriptStructFunc; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNREALTYPES_STRUCTPROPERTYPARAMS__CTOR_OFFSET))(this);
		}
	};
}
