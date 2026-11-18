#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BPHAHGICCGN;
class JCFJKEOJPPE;

#define JCFJKEOJPPE_LKIOAAEHNFM_AMMIKCGEAMG_OFFSET UNITYSDK_OFFSET(0x13CA7BC0)
#define JCFJKEOJPPE_LKIOAAEHNFM_ILFBFLJAEKK_OFFSET UNITYSDK_OFFSET(0x13CA7B60)
#define JCFJKEOJPPE_LKIOAAEHNFM__CTOR_OFFSET UNITYSDK_OFFSET(0x13CA7B50)

inline static constexpr unsigned int JCFJKEOJPPE_LKIOAAEHNFM_TypeDefinitionIndex = 47010;

class JCFJKEOJPPE_LKIOAAEHNFM : public ::System::Object
{
public:
	::JCFJKEOJPPE* KLHPEBKNIFB; // 0x10
	::BPHAHGICCGN* LJBPECKCCEA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_LKIOAAEHNFM__CTOR_OFFSET))(this);
	}

	::System::Void ILFBFLJAEKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_LKIOAAEHNFM_ILFBFLJAEKK_OFFSET))(this);
	}

	::System::Void AMMIKCGEAMG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCFJKEOJPPE_LKIOAAEHNFM_AMMIKCGEAMG_OFFSET))(this);
	}
};
