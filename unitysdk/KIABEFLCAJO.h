#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/EventArgs.h"

#define KIABEFLCAJO__CTOR_OFFSET UNITYSDK_OFFSET(0x157EE060)

inline static constexpr unsigned int KIABEFLCAJO_TypeDefinitionIndex = 84594;

class KIABEFLCAJO : public ::System::EventArgs
{
public:
	::System::Int32 EKCHEBIEGNO; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KIABEFLCAJO__CTOR_OFFSET))(this);
	}
};
