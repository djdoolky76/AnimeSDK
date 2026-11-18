#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BCJLMEJJOCB;

#define IDHEDHANGDA__CTOR_OFFSET UNITYSDK_OFFSET(0xEA17A40)

inline static constexpr unsigned int IDHEDHANGDA_TypeDefinitionIndex = 85103;

class IDHEDHANGDA : public ::System::Object
{
public:
	::BCJLMEJJOCB* MELINOJDIPK; // 0x10
	::System::Int32 BKHGHEDPHOB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDHEDHANGDA__CTOR_OFFSET))(this);
	}
};
