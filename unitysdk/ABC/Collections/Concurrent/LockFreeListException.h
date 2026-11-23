#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Exception.h"

#define ABC_COLLECTIONS_CONCURRENT_LOCKFREELISTEXCEPTION_LOCKFREELINKSEXHAUSTED_OFFSET UNITYSDK_OFFSET(0x1E92CE0)

namespace ABC::Collections::Concurrent
{
	inline static constexpr unsigned int LockFreeListException_TypeDefinitionIndex = 19576;

	class LockFreeListException : public ::System::Exception
	{
	public:
		static ::System::Void LockFreeLinksExhausted(::System::Int32 A70E5C58B2C7A692)
		{
			return ((::System::Void(*)(::System::Int32))((::PBYTE)hIl2Cpp + ABC_COLLECTIONS_CONCURRENT_LOCKFREELISTEXCEPTION_LOCKFREELINKSEXHAUSTED_OFFSET))(A70E5C58B2C7A692);
		}
	};
}
