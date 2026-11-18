#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IBENDELLLAO;
namespace System { class String; }

#define NADJNHBJIMH__CTOR_OFFSET UNITYSDK_OFFSET(0x170EFAF0)

inline static constexpr unsigned int NADJNHBJIMH_TypeDefinitionIndex = 88199;

class NADJNHBJIMH : public ::System::Object
{
public:
	::System::String* HAMIDAGPIFG; // 0x10
	::IBENDELLLAO* FGKDOHJJKAD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NADJNHBJIMH__CTOR_OFFSET))(this);
	}
};
