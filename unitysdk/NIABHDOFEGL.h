#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEOEOOMONGN;
class HHGEPOFOLMB;

#define NIABHDOFEGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC4BCDF0)
#define NIABHDOFEGL_CTOR_OFFSET UNITYSDK_OFFSET(0xC4BD0A0)

inline static constexpr unsigned int NIABHDOFEGL_TypeDefinitionIndex = 64127;

	class NIABHDOFEGL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIABHDOFEGL_CTOR_OFFSET))(this);
		}

		::BEOEOOMONGN* BPLPBPMEODA(::HHGEPOFOLMB* a1)
		{
			return ((::BEOEOOMONGN*(*)(::PVOID, ::HHGEPOFOLMB*))((::PBYTE)hIl2Cpp + NIABHDOFEGL_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
