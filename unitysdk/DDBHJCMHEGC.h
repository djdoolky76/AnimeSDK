#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define DDBHJCMHEGC_HBDAKDMFDAK_OFFSET UNITYSDK_OFFSET(0x19A368C0)
#define DDBHJCMHEGC__CTOR_OFFSET UNITYSDK_OFFSET(0x19A36910)

inline static constexpr unsigned int DDBHJCMHEGC_TypeDefinitionIndex = 73911;

class DDBHJCMHEGC : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHJCMHEGC__CTOR_OFFSET))(this);
	}

	::System::String* HBDAKDMFDAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DDBHJCMHEGC_HBDAKDMFDAK_OFFSET))(this);
	}
};
