#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define DFHBFNDNJED_CTOR_OFFSET UNITYSDK_OFFSET(0x1B393400)
#define DFHBFNDNJED_GET_FORCEUNLOCKALLCOMICS_OFFSET UNITYSDK_OFFSET(0x1B3933E0)
#define DFHBFNDNJED_SET_FORCEUNLOCKALLCOMICS_OFFSET UNITYSDK_OFFSET(0x1B3933F0)

inline static constexpr unsigned int DFHBFNDNJED_TypeDefinitionIndex = 77021;

	class DFHBFNDNJED : public ::System::Object
	{
	public:
		::System::Boolean _ForceUnlockAllComics_k__BackingField; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHBFNDNJED_CTOR_OFFSET))(this);
		}

		::System::Boolean get_ForceUnlockAllComics()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DFHBFNDNJED_GET_FORCEUNLOCKALLCOMICS_OFFSET))(this);
		}

		::System::Void set_ForceUnlockAllComics(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DFHBFNDNJED_SET_FORCEUNLOCKALLCOMICS_OFFSET))(this, a1);
		}

	};
