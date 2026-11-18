#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NDCDOAKPMJK__CTOR_OFFSET UNITYSDK_OFFSET(0x1ADFAB00)

inline static constexpr unsigned int NDCDOAKPMJK_TypeDefinitionIndex = 75907;

class NDCDOAKPMJK : public ::System::Object
{
public:
	::System::String* FCBDPCEKHOM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NDCDOAKPMJK__CTOR_OFFSET))(this);
	}
};
