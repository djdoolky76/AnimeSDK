#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHAHGICCGN;
class JCFJKEOJPPE;

#define JCFJKEOJPPE_CHFFDGAEDOF_FCDLBLHPNCD_OFFSET UNITYSDK_OFFSET(0x1872E8E0)
#define JCFJKEOJPPE_CHFFDGAEDOF__CTOR_OFFSET UNITYSDK_OFFSET(0x1872E8D0)

inline static constexpr unsigned int JCFJKEOJPPE_CHFFDGAEDOF_TypeDefinitionIndex = 47004;

class JCFJKEOJPPE_CHFFDGAEDOF : public ::System::Object
{
public:
	::JCFJKEOJPPE* KLHPEBKNIFB; // 0x10
	::BPHAHGICCGN* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CHFFDGAEDOF__CTOR_OFFSET))(this);
	}

	::System::Void FCDLBLHPNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_CHFFDGAEDOF_FCDLBLHPNCD_OFFSET))(this);
	}
};
