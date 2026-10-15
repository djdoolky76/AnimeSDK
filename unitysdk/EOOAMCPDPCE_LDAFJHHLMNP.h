#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CharacterAtlasFace; }
namespace System { class Nullable; }
namespace System { class String; }

#define EOOAMCPDPCE_LDAFJHHLMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x155CB8E0)

inline static constexpr unsigned int EOOAMCPDPCE_LDAFJHHLMNP_TypeDefinitionIndex = 57155;

	class EOOAMCPDPCE_LDAFJHHLMNP : public ::System::Object
	{
	public:
		::RPG::Client::CharacterAtlasFace* KCKBEDBOFPN; // 0x10
		::System::String* NAJMIHJAHIM; // 0x18
		::System::Nullable* LIOLHKEJBMA; // 0x20
		::System::Int32 CPHCMPEPGFF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOAMCPDPCE_LDAFJHHLMNP_CTOR_OFFSET))(this);
		}

	};
