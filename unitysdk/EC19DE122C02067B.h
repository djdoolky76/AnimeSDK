#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/GUID.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/E68AA4EB51923C98/EA9CDA2B67DE8BA8.h"

#define EC19DE122C02067B__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int EC19DE122C02067B_TypeDefinitionIndex = 7553;

class EC19DE122C02067B : public ::E379DE61A548837D
{
public:
	::ABC::Config::GUID BBDA55B8B235A7F7; // 0x38
	::System::Single E51947CEDE6059D3; // 0x48
	::E68AA4EB51923C98::EA9CDA2B67DE8BA8 B020021781A00455; // 0x4C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EC19DE122C02067B__CTOR_OFFSET))(this);
	}
};
