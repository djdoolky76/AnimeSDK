#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define EE88CD3EAA14E2D5_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x17B7670)
#define EE88CD3EAA14E2D5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B7720)
#define EE88CD3EAA14E2D5__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7770)

inline static constexpr unsigned int EE88CD3EAA14E2D5_TypeDefinitionIndex = 941;

class EE88CD3EAA14E2D5 : public ::A375536B9B082594
{
public:
	::System::Boolean A709DBECEB87D1C3; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E3745817B46098F1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EE88CD3EAA14E2D5__CTOR_OFFSET))(this);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + EE88CD3EAA14E2D5_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor_1(::EE88CD3EAA14E2D5* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::EE88CD3EAA14E2D5*))((::PBYTE)hIl2Cpp + EE88CD3EAA14E2D5__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
