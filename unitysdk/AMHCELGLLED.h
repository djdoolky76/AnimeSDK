#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ABMNAENMFJL.h"
class KCLIKAPODAD;

#define AMHCELGLLED_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15573510)
#define AMHCELGLLED_CTOR_OFFSET UNITYSDK_OFFSET(0x155735E0)

inline static constexpr unsigned int AMHCELGLLED_TypeDefinitionIndex = 62838;

	class AMHCELGLLED : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMHCELGLLED_CTOR_OFFSET))(this);
		}

		::KCLIKAPODAD* BPLPBPMEODA(::ABMNAENMFJL a1)
		{
			return ((::KCLIKAPODAD*(*)(::PVOID, ::ABMNAENMFJL))((::PBYTE)hIl2Cpp + AMHCELGLLED_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
