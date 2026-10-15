#pragma once
#include "unitysdk/unitysdk.h"

namespace System::Security::Cryptography::X509Certificates
{
	enum class StoreLocation : ::System::Int32
	{
		CurrentUser = 1,
		LocalMachine = 2,
	};
}
