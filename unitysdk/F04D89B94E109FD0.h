#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class Material; }

#define F04D89B94E109FD0_B73A03A1567EFCAA_OFFSET UNITYSDK_OFFSET(0x2854D50)
#define F04D89B94E109FD0_F3F8C187A181D859_OFFSET UNITYSDK_OFFSET(0x2854CD0)

inline static constexpr unsigned int F04D89B94E109FD0_TypeDefinitionIndex = 16025;

class F04D89B94E109FD0 : public ::System::Object
{
public:
	static ::System::Void F3F8C187A181D859(::UnityEngine::Material* E3AD885F703BB54B, ::System::Boolean FA424827173D214C)
	{
		return ((::System::Void(*)(::UnityEngine::Material*, ::System::Boolean))((::PBYTE)hIl2Cpp + F04D89B94E109FD0_F3F8C187A181D859_OFFSET))(E3AD885F703BB54B, FA424827173D214C);
	}

	static ::System::Boolean B73A03A1567EFCAA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + F04D89B94E109FD0_B73A03A1567EFCAA_OFFSET))();
	}
};
