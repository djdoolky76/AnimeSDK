#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define F53C75F2467AF104_F3748D0F31D6B4EF_OFFSET UNITYSDK_OFFSET(0x3955290)
#define F53C75F2467AF104__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F53C75F2467AF104_TypeDefinitionIndex = 12423;

class F53C75F2467AF104 : public ::System::Object
{
public:
	static ::System::String* F3748D0F31D6B4EF(::System::String* FD6BEC6563AC7110, ::System::String* E97E8D008427A296)
	{
		return ((::System::String*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + F53C75F2467AF104_F3748D0F31D6B4EF_OFFSET))(FD6BEC6563AC7110, E97E8D008427A296);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F53C75F2467AF104__CTOR_OFFSET))(this);
	}
};
