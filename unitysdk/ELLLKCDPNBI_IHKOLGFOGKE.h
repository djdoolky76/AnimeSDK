#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }

#define ELLLKCDPNBI_IHKOLGFOGKE_AJJMOIHDCAO_OFFSET UNITYSDK_OFFSET(0x3E3FD00)
#define ELLLKCDPNBI_IHKOLGFOGKE_LCBBKEGGIKN_OFFSET UNITYSDK_OFFSET(0x3E3FDA0)
#define ELLLKCDPNBI_IHKOLGFOGKE_OGILFIKNGKA_OFFSET UNITYSDK_OFFSET(0x3E3FD50)

inline static constexpr unsigned int ELLLKCDPNBI_IHKOLGFOGKE_TypeDefinitionIndex = 49217;

	struct alignas(8) ELLLKCDPNBI_IHKOLGFOGKE
	{
		::System::String* GFNAPNFFGPJ; // 0x10
		::System::Int32 MIPCILCJBMP; // 0x18
		::System::Boolean JBDPKIJKMIO; // 0x1C
		::System::Boolean AJJMOIHDCAO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLLKCDPNBI_IHKOLGFOGKE_AJJMOIHDCAO_OFFSET))(this);
		}

		::System::Int32 OGILFIKNGKA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLLKCDPNBI_IHKOLGFOGKE_OGILFIKNGKA_OFFSET))(this);
		}

		::System::Int32 LCBBKEGGIKN()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELLLKCDPNBI_IHKOLGFOGKE_LCBBKEGGIKN_OFFSET))(this);
		}

	};
