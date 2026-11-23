#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"

#define AC2616DA2619F181__CTOR_OFFSET UNITYSDK_OFFSET(0x1680EC0)

inline static constexpr unsigned int AC2616DA2619F181_TypeDefinitionIndex = 403;

class AC2616DA2619F181 : public ::E379DE61A548837D
{
public:
	::System::Single A09BDFB58F03FB5D; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC2616DA2619F181__CTOR_OFFSET))(this);
	}
};
