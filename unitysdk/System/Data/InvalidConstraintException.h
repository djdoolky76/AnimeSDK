#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/DataException.h"
#include "unitysdk/System/Runtime/Serialization/StreamingContext.h"

namespace System { class String; }
namespace System::Runtime::Serialization { class SerializationInfo; }

#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F297830)
#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F2978F0)
#define SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1F2977E0)

namespace System::Data
{
	inline static constexpr unsigned int InvalidConstraintException_TypeDefinitionIndex = 37240;

	class InvalidConstraintException : public ::System::Data::DataException
	{
	public:
		::System::Void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_OFFSET))(this, info, context);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_1_OFFSET))(this);
		}

		::System::Void _ctor_2(::System::String* s)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_INVALIDCONSTRAINTEXCEPTION__CTOR_2_OFFSET))(this, s);
		}
	};
}
