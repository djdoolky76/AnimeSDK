#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CharacterAtlasFace; }
namespace System { class String; }

#define EOOAMCPDPCE_LDAFJHHLMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x16B2E670)

inline static constexpr unsigned int EOOAMCPDPCE_LDAFJHHLMNP_TypeDefinitionIndex = 58384;

	class EOOAMCPDPCE_LDAFJHHLMNP : public ::System::Object
	{
	public:
		::System::String* NAJMIHJAHIM; // 0x10
		::RPG::Client::CharacterAtlasFace* KCKBEDBOFPN; // 0x18
		::System::Nullable_1<::System::Int32> LIOLHKEJBMA; // 0x20
		::System::Int32 CPHCMPEPGFF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOOAMCPDPCE_LDAFJHHLMNP_CTOR_OFFSET))(this);
		}

	};
