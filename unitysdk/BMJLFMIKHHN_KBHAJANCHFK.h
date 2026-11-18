#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }

#define BMJLFMIKHHN_KBHAJANCHFK_JNJICDHALBD_OFFSET UNITYSDK_OFFSET(0x1692D030)
#define BMJLFMIKHHN_KBHAJANCHFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1692D020)

inline static constexpr unsigned int BMJLFMIKHHN_KBHAJANCHFK_TypeDefinitionIndex = 75032;

class BMJLFMIKHHN_KBHAJANCHFK : public ::System::Object
{
public:
	::System::Boolean LMFHBHHOCKM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_KBHAJANCHFK__CTOR_OFFSET))(this);
	}

	::System::Void JNJICDHALBD(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + BMJLFMIKHHN_KBHAJANCHFK_JNJICDHALBD_OFFSET))(this, KOIBHLHLMFC);
	}
};
