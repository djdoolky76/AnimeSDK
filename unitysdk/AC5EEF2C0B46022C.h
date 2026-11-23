#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define AC5EEF2C0B46022C_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x17035B0)
#define AC5EEF2C0B46022C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1703720)
#define AC5EEF2C0B46022C__CTOR_OFFSET UNITYSDK_OFFSET(0x17036A0)

inline static constexpr unsigned int AC5EEF2C0B46022C_TypeDefinitionIndex = 622;

class AC5EEF2C0B46022C : public ::A375536B9B082594
{
public:
	::UnityEngine::Vector2 B58B295DF1CC4C05; // 0x10

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + AC5EEF2C0B46022C_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor(::AC5EEF2C0B46022C* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::AC5EEF2C0B46022C*))((::PBYTE)hIl2Cpp + AC5EEF2C0B46022C__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AC5EEF2C0B46022C__CTOR_1_OFFSET))(this);
	}
};
