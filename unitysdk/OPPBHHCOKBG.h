#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"

#define OPPBHHCOKBG_MJFHPEBFAID_OFFSET UNITYSDK_OFFSET(0x16F96570)

inline static constexpr unsigned int OPPBHHCOKBG_TypeDefinitionIndex = 82086;

class OPPBHHCOKBG : public ::System::Object
{
public:
	static ::System::Boolean MJFHPEBFAID(::MoleMole::EntityHandle HPADNAEINPK)
	{
		return ((::System::Boolean(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + OPPBHHCOKBG_MJFHPEBFAID_OFFSET))(HPADNAEINPK);
	}
};
