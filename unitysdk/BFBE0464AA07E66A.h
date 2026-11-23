#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B7B8795FB90C86A7.h"
#include "unitysdk/E865F6F8B8B44C1E.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define BFBE0464AA07E66A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x237EC90)
#define BFBE0464AA07E66A__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int BFBE0464AA07E66A_TypeDefinitionIndex = 3494;

class BFBE0464AA07E66A : public ::B7B8795FB90C86A7
{
public:
	::E865F6F8B8B44C1E F948A4727E3B7A64; // 0x10
	::UnityEngine::Vector3 EE8B505B9D2B1840; // 0x18
	::UnityEngine::Vector3 A0FE9BD88AEBF8D9; // 0x24
	::System::Boolean F982D44596732BEA; // 0x30

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BFBE0464AA07E66A*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BFBE0464AA07E66A*&))((::PBYTE)hIl2Cpp + BFBE0464AA07E66A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFBE0464AA07E66A__CTOR_OFFSET))(this);
	}
};
