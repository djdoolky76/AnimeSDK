#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Epic/OnlineServices/AllocationException.h"

namespace System { class Type; }

#define EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET UNITYSDK_OFFSET(0x2978550)

namespace Epic::OnlineServices
{
	inline static constexpr unsigned int CachedTypeAllocationException_TypeDefinitionIndex = 15510;

	class CachedTypeAllocationException : public ::Epic::OnlineServices::AllocationException
	{
	public:
		::System::Void _ctor(::System::IntPtr BF3A584683910405, ::System::Type* FC52AAF7904192F6, ::System::Type* EC1E0B66912F629D)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Type*, ::System::Type*))((::PBYTE)hIl2Cpp + EPIC_ONLINESERVICES_CACHEDTYPEALLOCATIONEXCEPTION__CTOR_OFFSET))(this, BF3A584683910405, FC52AAF7904192F6, EC1E0B66912F629D);
		}
	};
}
