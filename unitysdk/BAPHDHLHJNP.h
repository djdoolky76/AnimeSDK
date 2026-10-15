#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ODHFCEALPFN;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define BAPHDHLHJNP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E74020)

inline static constexpr unsigned int BAPHDHLHJNP_TypeDefinitionIndex = 65819;

	class BAPHDHLHJNP : public ::System::Object
	{
	public:
		::System::Action_1<::System::String*>* IMDLGFPMPEK; // 0x10
		::ODHFCEALPFN* HOPJMFJMOBD; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAPHDHLHJNP_CTOR_OFFSET))(this);
		}

	};
