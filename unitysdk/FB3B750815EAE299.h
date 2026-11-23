#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E379DE61A548837D.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FB3B750815EAE299__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FB3B750815EAE299_TypeDefinitionIndex = 175;

class FB3B750815EAE299 : public ::E379DE61A548837D
{
public:
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x38
	::UnityEngine::Quaternion A0FE9BD88AEBF8D9; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FB3B750815EAE299__CTOR_OFFSET))(this);
	}
};
