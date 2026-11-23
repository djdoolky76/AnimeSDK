#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EEB516C3073B704E.h"

#define E5E6906ABA8ABF15_A1E97155B145443C_OFFSET UNITYSDK_OFFSET(0x23E27D0)
#define E5E6906ABA8ABF15__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E5E6906ABA8ABF15_TypeDefinitionIndex = 3947;

class E5E6906ABA8ABF15 : public ::System::Object
{
public:
	static ::UnityEngine::EEB516C3073B704E* StaticGet_F69EE67D8F0040D8()
	{
		return (::UnityEngine::EEB516C3073B704E*)Il2CppClass::FromTypeDefinitionIndex(E5E6906ABA8ABF15_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::Void A1E97155B145443C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + E5E6906ABA8ABF15_A1E97155B145443C_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E5E6906ABA8ABF15__CTOR_OFFSET))(this);
	}
};
