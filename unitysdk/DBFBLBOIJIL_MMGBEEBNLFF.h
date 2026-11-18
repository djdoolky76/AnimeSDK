#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define DBFBLBOIJIL_MMGBEEBNLFF__CTOR_OFFSET UNITYSDK_OFFSET(0x15355740)

inline static constexpr unsigned int DBFBLBOIJIL_MMGBEEBNLFF_TypeDefinitionIndex = 75808;

class DBFBLBOIJIL_MMGBEEBNLFF : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBFBLBOIJIL_MMGBEEBNLFF__CTOR_OFFSET))(this);
	}
};
