#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODHFCEALPFN;
namespace System { class Action; }
namespace System { class String; }

#define BAPHDHLHJNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E80E60)

inline static constexpr unsigned int BAPHDHLHJNP_TypeDefinitionIndex = 65819;

	class BAPHDHLHJNP : public ::System::Object
	{
	public:
		::ODHFCEALPFN* HOPJMFJMOBD; // 0x10
		::System::Action* IMDLGFPMPEK; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHDHLHJNP_CTOR_OFFSET))(this);
		}

	};
