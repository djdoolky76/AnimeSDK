#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"

class E90228E1C3695596;

#define E374A6A29FDEF3A3__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E374A6A29FDEF3A3_TypeDefinitionIndex = 8499;

class E374A6A29FDEF3A3 : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID ACC4695EBAE594B8; // 0x38
	::E90228E1C3695596* E503CF3EAE138E9D; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E374A6A29FDEF3A3__CTOR_OFFSET))(this);
	}
};
