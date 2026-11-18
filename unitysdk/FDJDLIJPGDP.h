#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define FDJDLIJPGDP__CTOR_OFFSET UNITYSDK_OFFSET(0xBB38530)

inline static constexpr unsigned int FDJDLIJPGDP_TypeDefinitionIndex = 90371;

class FDJDLIJPGDP : public ::System::Object
{
public:
	::System::Int32 KOPONDLAANH; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDJDLIJPGDP__CTOR_OFFSET))(this);
	}
};
