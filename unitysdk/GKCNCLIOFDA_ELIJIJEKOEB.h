#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OOIFBABMIGP.h"
namespace System { class String; }

#define GKCNCLIOFDA_ELIJIJEKOEB_CTOR_OFFSET UNITYSDK_OFFSET(0x2E7D5B0)
#define GKCNCLIOFDA_ELIJIJEKOEB_GET_MEMBER_OFFSET UNITYSDK_OFFSET(0x2E7D5E0)
#define GKCNCLIOFDA_ELIJIJEKOEB_GET_ROLENAME_OFFSET UNITYSDK_OFFSET(0x1D30)

inline static constexpr unsigned int GKCNCLIOFDA_ELIJIJEKOEB_TypeDefinitionIndex = 53522;

	struct alignas(8) GKCNCLIOFDA_ELIJIJEKOEB
	{
		::System::String* _RoleName_k__BackingField; // 0x10
		::OOIFBABMIGP _Member_k__BackingField; // 0x18
		::System::Void _ctor(::System::String* a1, ::OOIFBABMIGP a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::OOIFBABMIGP))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_ELIJIJEKOEB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::String* get_RoleName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_ELIJIJEKOEB_GET_ROLENAME_OFFSET))(this);
		}

		::OOIFBABMIGP get_Member()
		{
			return ((::OOIFBABMIGP(*)(::PVOID))((::PBYTE)hIl2Cpp + GKCNCLIOFDA_ELIJIJEKOEB_GET_MEMBER_OFFSET))(this);
		}

	};
