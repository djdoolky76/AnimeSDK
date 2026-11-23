#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/SystemException.h"

#define SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x3D54300)

namespace System::Net
{
	inline static constexpr unsigned int InternalException_TypeDefinitionIndex = 14630;

	class InternalException : public ::System::SystemException
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_INTERNALEXCEPTION__CTOR_OFFSET))(this);
		}
	};
}
