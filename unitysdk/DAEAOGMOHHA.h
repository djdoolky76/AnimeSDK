#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KDLIDKMMNOA.h"
class BLPBNHJNGID;

#define DAEAOGMOHHA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x19942BB0)
#define DAEAOGMOHHA_CTOR_OFFSET UNITYSDK_OFFSET(0x19942C00)

inline static constexpr unsigned int DAEAOGMOHHA_TypeDefinitionIndex = 64057;

	class DAEAOGMOHHA : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAEAOGMOHHA_CTOR_OFFSET))(this);
		}

		::BLPBNHJNGID* BPLPBPMEODA(::KDLIDKMMNOA a1)
		{
			return ((::BLPBNHJNGID*(*)(::PVOID, ::KDLIDKMMNOA))((::PBYTE)hIl2Cpp + DAEAOGMOHHA_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
