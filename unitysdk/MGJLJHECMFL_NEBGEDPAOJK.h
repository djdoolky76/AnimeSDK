#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class CMFICBDLJKB;
class LHIOGJMEIEI;

#define MGJLJHECMFL_NEBGEDPAOJK_MGMICJAGMGF_OFFSET UNITYSDK_OFFSET(0x14D81580)
#define MGJLJHECMFL_NEBGEDPAOJK__CTOR_OFFSET UNITYSDK_OFFSET(0x14D81570)

inline static constexpr unsigned int MGJLJHECMFL_NEBGEDPAOJK_TypeDefinitionIndex = 80049;

class MGJLJHECMFL_NEBGEDPAOJK : public ::System::Object
{
public:
	::LHIOGJMEIEI* IMLLDOHDCNC; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGJLJHECMFL_NEBGEDPAOJK__CTOR_OFFSET))(this);
	}

	::System::Boolean MGMICJAGMGF(::CMFICBDLJKB* LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::CMFICBDLJKB*))((::PBYTE)hIl2Cpp + MGJLJHECMFL_NEBGEDPAOJK_MGMICJAGMGF_OFFSET))(this, LJBPECKCCEA);
	}
};
