#pragma once
#include "unitysdk/unitysdk.h"
namespace System::Runtime::Remoting::Messaging { class CADMethodReturnMessage; }

namespace System::Runtime::Remoting::Channels
{
	struct alignas(8) CrossAppDomainSink_ProcessMessageRes
	{
		::Il2CppArray<::System::Byte>* arrResponse; // 0x10
		::System::Runtime::Remoting::Messaging::CADMethodReturnMessage* cadMrm; // 0x18
	};
}
