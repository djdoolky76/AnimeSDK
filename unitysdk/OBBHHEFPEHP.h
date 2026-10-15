#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class IDELJGCBBGK;

#define OBBHHEFPEHP_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD2FDA0)
#define OBBHHEFPEHP_CTOR_OFFSET UNITYSDK_OFFSET(0xBD2FE10)

inline static constexpr unsigned int OBBHHEFPEHP_TypeDefinitionIndex = 62617;

	class OBBHHEFPEHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBBHHEFPEHP_CTOR_OFFSET))(this);
		}

		::IDELJGCBBGK* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::IDELJGCBBGK*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + OBBHHEFPEHP_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
