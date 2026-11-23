#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F666CF35B42C3E20_A16C8ED92C989C9B_OFFSET UNITYSDK_OFFSET(0x394E290)
#define F666CF35B42C3E20__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F666CF35B42C3E20_TypeDefinitionIndex = 12430;

class F666CF35B42C3E20 : public ::System::Object
{
public:
	::System::Void A16C8ED92C989C9B(::System::String* B083BE7841B347C4, ::System::Single B431FFDFE9D1D5B1, ::System::Boolean E2C4E8B47FED2C5D)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + F666CF35B42C3E20_A16C8ED92C989C9B_OFFSET))(this, B083BE7841B347C4, B431FFDFE9D1D5B1, E2C4E8B47FED2C5D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F666CF35B42C3E20__CTOR_OFFSET))(this);
	}
};
