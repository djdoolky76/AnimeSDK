#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CGDBCIMEPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x145B5300)

inline static constexpr unsigned int CGDBCIMEPFM_TypeDefinitionIndex = 51615;

class CGDBCIMEPFM : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGDBCIMEPFM__CTOR_OFFSET))(this);
	}
};
