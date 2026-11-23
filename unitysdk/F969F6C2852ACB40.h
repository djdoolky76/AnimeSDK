#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A375536B9B082594.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F969F6C2852ACB40_A4CFF253D56ECB2D_OFFSET UNITYSDK_OFFSET(0x1872C30)
#define F969F6C2852ACB40__CTOR_1_OFFSET UNITYSDK_OFFSET(0x17B7770)
#define F969F6C2852ACB40__CTOR_OFFSET UNITYSDK_OFFSET(0x1872CE0)

inline static constexpr unsigned int F969F6C2852ACB40_TypeDefinitionIndex = 1272;

class F969F6C2852ACB40 : public ::A375536B9B082594
{
public:
	::System::Boolean A709DBECEB87D1C3; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E3745817B46098F1; // 0x14

	::System::Void _ctor(::F969F6C2852ACB40* BEEE7A5A60941632)
	{
		return ((::System::Void(*)(::PVOID, ::F969F6C2852ACB40*))((::PBYTE)hIl2Cpp + F969F6C2852ACB40__CTOR_OFFSET))(this, BEEE7A5A60941632);
	}

	::A375536B9B082594* A4CFF253D56ECB2D()
	{
		return ((::A375536B9B082594*(*)(::PVOID))((::PBYTE)hIl2Cpp + F969F6C2852ACB40_A4CFF253D56ECB2D_OFFSET))(this);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F969F6C2852ACB40__CTOR_1_OFFSET))(this);
	}
};
