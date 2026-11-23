#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ED2E6327DCF098BC;
namespace System::Security::Cryptography { class RSA; }

#define FA1BBC5DA1BD53DF_E00E45129BC7A4F8_OFFSET UNITYSDK_OFFSET(0x3DEE3E0)

inline static constexpr unsigned int FA1BBC5DA1BD53DF_TypeDefinitionIndex = 20139;

class FA1BBC5DA1BD53DF : public ::System::Object
{
public:
	static ::System::Security::Cryptography::RSA* E00E45129BC7A4F8(::ED2E6327DCF098BC* B622B633606B109B)
	{
		return ((::System::Security::Cryptography::RSA*(*)(::ED2E6327DCF098BC*))((::PBYTE)hIl2Cpp + FA1BBC5DA1BD53DF_E00E45129BC7A4F8_OFFSET))(B622B633606B109B);
	}
};
