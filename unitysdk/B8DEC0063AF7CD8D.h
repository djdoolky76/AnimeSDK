#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define B8DEC0063AF7CD8D_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x17F11F0)
#define B8DEC0063AF7CD8D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17F12B0)
#define B8DEC0063AF7CD8D__CTOR_OFFSET UNITYSDK_OFFSET(0x17B7770)

inline static constexpr unsigned int B8DEC0063AF7CD8D_TypeDefinitionIndex = 1027;

class B8DEC0063AF7CD8D : public ::A375536B9B082594
{
public:
	::System::Boolean A709DBECEB87D1C3; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E3745817B46098F1; // 0x14
	::System::Boolean A79F61F267484D8C; // 0x20

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + B8DEC0063AF7CD8D_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B8DEC0063AF7CD8D__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::B8DEC0063AF7CD8D* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::B8DEC0063AF7CD8D*))((::PBYTE)hIl2Cpp + B8DEC0063AF7CD8D__CTOR_1_OFFSET))(this, BEEE7A5A60941632);
	}
};
