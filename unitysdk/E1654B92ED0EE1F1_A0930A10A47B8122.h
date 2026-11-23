#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define E1654B92ED0EE1F1_A0930A10A47B8122_BEFB708641FAF671_OFFSET UNITYSDK_OFFSET(0x17D8700)
#define E1654B92ED0EE1F1_A0930A10A47B8122__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E1654B92ED0EE1F1_A0930A10A47B8122_TypeDefinitionIndex = 348;

class E1654B92ED0EE1F1_A0930A10A47B8122 : public ::System::Object
{
public:
	::System::Action* B8553DC7C901A1F1; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E1654B92ED0EE1F1_A0930A10A47B8122__CTOR_OFFSET))(this);
	}

	::System::Void BEFB708641FAF671(::System::Boolean B9071C2364AEB939)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E1654B92ED0EE1F1_A0930A10A47B8122_BEFB708641FAF671_OFFSET))(this, B9071C2364AEB939);
	}
};
