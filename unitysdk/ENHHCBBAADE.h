#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGOCNIIBML.h"
#include "unitysdk/NABLDKDACBG.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define ENHHCBBAADE_APIPOELHMBP_OFFSET UNITYSDK_OFFSET(0x1712FF90)
#define ENHHCBBAADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1712FF30)

inline static constexpr unsigned int ENHHCBBAADE_TypeDefinitionIndex = 39474;

class ENHHCBBAADE : public ::NABLDKDACBG
{
public:
	::BBGOCNIIBML FKIOJDJCLPA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHHCBBAADE__CTOR_OFFSET))(this);
	}

	::MoleMole::EntityHandle APIPOELHMBP()
	{
		return ((::MoleMole::EntityHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + ENHHCBBAADE_APIPOELHMBP_OFFSET))(this);
	}
};
