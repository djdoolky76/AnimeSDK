#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class GameObject; }

#define BLFLGFPPOIN_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x14C4E580)
#define BLFLGFPPOIN_HONMDMHAKNN_OFFSET UNITYSDK_OFFSET(0x14C4E410)
#define BLFLGFPPOIN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x14C4E3C0)
#define BLFLGFPPOIN_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x14C4E350)
#define BLFLGFPPOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14C4E340)

inline static constexpr unsigned int BLFLGFPPOIN_TypeDefinitionIndex = 48444;

class BLFLGFPPOIN : public ::System::Object
{
public:
	::UnityEngine::GameObject* OPDIDCBAPGP; // 0x10
	::System::Single MLKLCEKJGPE; // 0x18
	::System::Single HACJFKBLODH; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLGFPPOIN__CTOR_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PBCAAADNEPK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLFLGFPPOIN_PLPONJAKNEB_OFFSET))(this, PBCAAADNEPK);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLGFPPOIN_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean HONMDMHAKNN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLFLGFPPOIN_HONMDMHAKNN_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::UnityEngine::GameObject* JMDHBJMNBCP, ::System::Single IAPDECBJNKB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Single))((::PBYTE)hIl2Cpp + BLFLGFPPOIN_BBOMJDBNHIC_OFFSET))(this, JMDHBJMNBCP, IAPDECBJNKB);
	}
};
