#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define KHOLLIGHNLK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D6A1C90)

inline static constexpr unsigned int KHOLLIGHNLK_TypeDefinitionIndex = 93653;

class KHOLLIGHNLK : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOLLIGHNLK__CTOR_OFFSET))(this);
	}
};
