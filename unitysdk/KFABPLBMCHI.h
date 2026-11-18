#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define KFABPLBMCHI_JFKDLJBMAEC_OFFSET UNITYSDK_OFFSET(0x1A2C50D0)
#define KFABPLBMCHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2C50E0)

inline static constexpr unsigned int KFABPLBMCHI_TypeDefinitionIndex = 57364;

class KFABPLBMCHI : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFABPLBMCHI__CTOR_OFFSET))(this);
	}

	::System::String* JFKDLJBMAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFABPLBMCHI_JFKDLJBMAEC_OFFSET))(this);
	}
};
