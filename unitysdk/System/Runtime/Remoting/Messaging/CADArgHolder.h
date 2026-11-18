#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_RUNTIME_REMOTING_MESSAGING_CADARGHOLDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF82A20)

namespace System::Runtime::Remoting::Messaging
{
	inline static constexpr unsigned int CADArgHolder_TypeDefinitionIndex = 1331;

	class CADArgHolder : public ::System::Object
	{
	public:
		::System::Int32 index; // 0x10

		::System::Void _ctor(::System::Int32 i)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_REMOTING_MESSAGING_CADARGHOLDER__CTOR_OFFSET))(this, i);
		}
	};
}
