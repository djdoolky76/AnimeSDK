#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define BINARYTRACINGCORE_SOURCE_TRACINGREAD_UNITVIEWREADEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1FA31960)

namespace BinaryTracingCore::Source::TracingRead
{
	inline static constexpr unsigned int UnitViewReadException_TypeDefinitionIndex = 34150;

	class UnitViewReadException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BINARYTRACINGCORE_SOURCE_TRACINGREAD_UNITVIEWREADEXCEPTION__CTOR_OFFSET))(this, message);
		}
	};
}
