#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Runtime::InteropServices
{
	class ErrorWrapper : public ::System::Object
	{
	public:
		::System::Int32 m_ErrorCode; // 0x10
	};
}
