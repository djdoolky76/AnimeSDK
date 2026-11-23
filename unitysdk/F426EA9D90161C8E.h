#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B91AB201112B70EC.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define F426EA9D90161C8E__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int F426EA9D90161C8E_TypeDefinitionIndex = 9318;

class F426EA9D90161C8E : public ::B91AB201112B70EC
{
public:
	::System::Boolean EF2F54E134275D78; // 0x10
	::System::Byte _padding0[0x3];
	::UnityEngine::Vector3 E63E0F25F251B753; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F426EA9D90161C8E__CTOR_OFFSET))(this);
	}
};
