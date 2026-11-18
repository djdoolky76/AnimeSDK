#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMCBFPPHGIF.h"
#include "unitysdk/LDLKJEBLIHH.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define BDBNJOHGEDN_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x7CE880)
#define BDBNJOHGEDN_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x7CE890)

inline static constexpr unsigned int BDBNJOHGEDN_TypeDefinitionIndex = 75655;

struct alignas(4) BDBNJOHGEDN
{
	::MoleMole::EntityHandle KEHECMCDLFC; // 0x10
	::BMCBFPPHGIF INFGIKLILIE; // 0x20
	::LDLKJEBLIHH JDPGFDMLBEK; // 0x24

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBNJOHGEDN_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BDBNJOHGEDN_JDAPDDEOCEA_OFFSET))(this);
	}
};
