#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IFHEHPMAKEB;
namespace System { class Exception; }
namespace System { class TimeoutException; }
namespace System::Runtime::Serialization { class SerializationException; }

#define IBNBIDCJLPM_EFAILFIJDCP_OFFSET UNITYSDK_OFFSET(0x181A4F30)
#define IBNBIDCJLPM_HICFJMEOEJM_OFFSET UNITYSDK_OFFSET(0x181A5050)
#define IBNBIDCJLPM_OCCMKIAAACI_OFFSET UNITYSDK_OFFSET(0x181A4E10)
#define IBNBIDCJLPM__CTOR_OFFSET UNITYSDK_OFFSET(0x181A5170)

inline static constexpr unsigned int IBNBIDCJLPM_TypeDefinitionIndex = 87805;

class IBNBIDCJLPM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBNBIDCJLPM__CTOR_OFFSET))(this);
	}

	::IFHEHPMAKEB* OCCMKIAAACI(::System::Runtime::Serialization::SerializationException* BENPBLMOAKD)
	{
		return ((::IFHEHPMAKEB*(*)(::PVOID, ::System::Runtime::Serialization::SerializationException*))((::PBYTE)hIl2Cpp + IBNBIDCJLPM_OCCMKIAAACI_OFFSET))(this, BENPBLMOAKD);
	}

	::IFHEHPMAKEB* EFAILFIJDCP(::System::TimeoutException* BENPBLMOAKD)
	{
		return ((::IFHEHPMAKEB*(*)(::PVOID, ::System::TimeoutException*))((::PBYTE)hIl2Cpp + IBNBIDCJLPM_EFAILFIJDCP_OFFSET))(this, BENPBLMOAKD);
	}

	::IFHEHPMAKEB* HICFJMEOEJM(::System::Exception* BENPBLMOAKD)
	{
		return ((::IFHEHPMAKEB*(*)(::PVOID, ::System::Exception*))((::PBYTE)hIl2Cpp + IBNBIDCJLPM_HICFJMEOEJM_OFFSET))(this, BENPBLMOAKD);
	}
};
