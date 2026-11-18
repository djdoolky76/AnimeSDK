#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODJKOGAJKC;
class LJEHNJKMIIF;

#define LJEHNJKMIIF_PAOJEMJIEAO_OLMOFNHPNJL_OFFSET UNITYSDK_OFFSET(0x13CF3A50)
#define LJEHNJKMIIF_PAOJEMJIEAO__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF3A40)

inline static constexpr unsigned int LJEHNJKMIIF_PAOJEMJIEAO_TypeDefinitionIndex = 88371;

class LJEHNJKMIIF_PAOJEMJIEAO : public ::System::Object
{
public:
	::LJEHNJKMIIF* KLHPEBKNIFB; // 0x10
	::IODJKOGAJKC* CGICDEAAEKJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_PAOJEMJIEAO__CTOR_OFFSET))(this);
	}

	::System::Void OLMOFNHPNJL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_PAOJEMJIEAO_OLMOFNHPNJL_OFFSET))(this);
	}
};
