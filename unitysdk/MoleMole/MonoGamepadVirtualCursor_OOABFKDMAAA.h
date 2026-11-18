#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

class LGMMGPPLLHN;

#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOABFKDMAAA_HAOHPKMEFMP_OFFSET UNITYSDK_OFFSET(0x745DA0)
#define MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOABFKDMAAA_MJIMNNFEKNB_OFFSET UNITYSDK_OFFSET(0x745D50)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGamepadVirtualCursor_OOABFKDMAAA_TypeDefinitionIndex = 59847;

	struct alignas(8) MonoGamepadVirtualCursor_OOABFKDMAAA
	{
		::UnityEngine::Vector3 EFKNDPBOGME; // 0x10
		::UnityEngine::Vector3 JBAJIKMGHJA; // 0x1C
		::UnityEngine::Vector3 IGACMIGNEAP; // 0x28
		::UnityEngine::Vector3 FBIFOJHJHAF; // 0x34
		::UnityEngine::Vector3 CMPFFODPMOC; // 0x40
		::UnityEngine::Vector3 ILCCJHMJNBG; // 0x4C
		::System::Single POFJOIMEINJ; // 0x58
		::System::Int32 JHECBMCJNGJ; // 0x5C
		::System::Boolean BPECPPJFIMK; // 0x60
		::System::Byte _padding0[0x7];
		::LGMMGPPLLHN* JNGDADACCCH; // 0x68

		::System::Boolean MJIMNNFEKNB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOABFKDMAAA_MJIMNNFEKNB_OFFSET))(this);
		}

		/*
		::System::Boolean HAOHPKMEFMP(::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA LIBPKNHDIGP)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::MonoGamepadVirtualCursor_OOABFKDMAAA))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGAMEPADVIRTUALCURSOR_OOABFKDMAAA_HAOHPKMEFMP_OFFSET))(this, LIBPKNHDIGP);
		}
		*/
	};
}
