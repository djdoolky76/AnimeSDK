#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HCEJJBEOOEL;
class IKKDCFLLIOF;

#define HCEJJBEOOEL_LIONLIKMBGN_DIHNDNDPOKL_OFFSET UNITYSDK_OFFSET(0x15B3B700)
#define HCEJJBEOOEL_LIONLIKMBGN__CTOR_OFFSET UNITYSDK_OFFSET(0x15B3B6F0)

inline static constexpr unsigned int HCEJJBEOOEL_LIONLIKMBGN_TypeDefinitionIndex = 78736;

class HCEJJBEOOEL_LIONLIKMBGN : public ::System::Object
{
public:
	::IKKDCFLLIOF* OEDEIANBGHL; // 0x10
	::HCEJJBEOOEL* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEJJBEOOEL_LIONLIKMBGN__CTOR_OFFSET))(this);
	}

	::System::Void DIHNDNDPOKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCEJJBEOOEL_LIONLIKMBGN_DIHNDNDPOKL_OFFSET))(this);
	}
};
