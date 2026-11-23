#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define E6BAD62D4B17D54E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E6BAD62D4B17D54E_TypeDefinitionIndex = 917;

class E6BAD62D4B17D54E : public ::E379DE61A548837D
{
public:
	::UnityEngine::Vector3 F35540D578D5D440; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6BAD62D4B17D54E__CTOR_OFFSET))(this);
	}
};
