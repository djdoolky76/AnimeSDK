#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class IODJKOGAJKC;
class LJEHNJKMIIF;

#define LJEHNJKMIIF_JMBPABFOCDB_EAJFMMIDKAH_OFFSET UNITYSDK_OFFSET(0x14DB5080)
#define LJEHNJKMIIF_JMBPABFOCDB__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB5070)

inline static constexpr unsigned int LJEHNJKMIIF_JMBPABFOCDB_TypeDefinitionIndex = 88369;

class LJEHNJKMIIF_JMBPABFOCDB : public ::System::Object
{
public:
	::IODJKOGAJKC* CGICDEAAEKJ; // 0x10
	::LJEHNJKMIIF* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_JMBPABFOCDB__CTOR_OFFSET))(this);
	}

	::System::Void EAJFMMIDKAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJEHNJKMIIF_JMBPABFOCDB_EAJFMMIDKAH_OFFSET))(this);
	}
};
