#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

namespace System { class String; }

#define EPIC_ONLINESERVICES_ALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x29E6340)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int AllocationException_TypeDefinitionIndex = 15833;

	class AllocationException : public ::System::Exception
	{
	public:
		::System::Void _ctor(::System::String* B083BE7841B347C4)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_ALLOCATIONEXCEPTION__CTOR_OFFSET))(this, B083BE7841B347C4);
		}
	};
}
