#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2A074C0)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int ExternalAllocationException_TypeDefinitionIndex = 15925;

	class ExternalAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr BF3A584683910405, ::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_EXTERNALALLOCATIONEXCEPTION__CTOR_OFFSET))(this, BF3A584683910405, A288CB28FC2A6DA3);
		}
	};
}
