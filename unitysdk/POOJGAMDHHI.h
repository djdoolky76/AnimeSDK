#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOCCBMLAELL;

#define POOJGAMDHHI_CTOR_OFFSET UNITYSDK_OFFSET(0xC375D60)

inline static constexpr unsigned int POOJGAMDHHI_TypeDefinitionIndex = 80583;

	class POOJGAMDHHI : public ::System::Object
	{
	public:
		::OOCCBMLAELL* ELIMDKMMGBO; // 0x10
		::System::Void _ctor(::OOCCBMLAELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOCCBMLAELL*))((::PBYTE)hIl2Cpp + POOJGAMDHHI_CTOR_OFFSET))(this, a1);
		}

	};
