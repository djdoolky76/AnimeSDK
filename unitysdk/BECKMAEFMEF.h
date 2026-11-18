#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class BuddyCollider;
class ECBJHDFMMEA;
namespace UnityEngine::UI { class Image; }

#define BECKMAEFMEF_AIHCLNJCFLD_OFFSET UNITYSDK_OFFSET(0xF7953E0)
#define BECKMAEFMEF_BJAEFMJEHDK_OFFSET UNITYSDK_OFFSET(0xF795360)
#define BECKMAEFMEF_BJBMHIAKELH_OFFSET UNITYSDK_OFFSET(0xF7956C0)
#define BECKMAEFMEF_DBNPHDJAJEN_OFFSET UNITYSDK_OFFSET(0xF7953D0)
#define BECKMAEFMEF_GHMPMMCIOAK_OFFSET UNITYSDK_OFFSET(0xF795370)
#define BECKMAEFMEF_LDAALPNDLNP_OFFSET UNITYSDK_OFFSET(0xF795380)
#define BECKMAEFMEF__CTOR_OFFSET UNITYSDK_OFFSET(0xF7952F0)

inline static constexpr unsigned int BECKMAEFMEF_TypeDefinitionIndex = 48579;

class BECKMAEFMEF : public ::System::Object
{
public:
	::BuddyCollider* BMCABGEMEOP; // 0x10
	::ECBJHDFMMEA* KFGFLNMNELA; // 0x18
	::UnityEngine::UI::Image* HGNICONAMLP; // 0x20
	::System::Int32 ABHBKFJKINO; // 0x28
	::UnityEngine::Vector2 MKHLBMMKCJL; // 0x2C
	::UnityEngine::Vector2 KEFMPOMFNIB; // 0x34
	::UnityEngine::Vector2 _PIFNMPIKJFD_k__BackingField; // 0x3C
	::UnityEngine::Vector2 CEFKLNGDGJH; // 0x44

	::System::Void _ctor(::UnityEngine::Vector2 KEFMPOMFNIB, ::UnityEngine::Vector2 CEFKLNGDGJH, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + BECKMAEFMEF__CTOR_OFFSET))(this, KEFMPOMFNIB, CEFKLNGDGJH, ABHBKFJKINO);
	}

	::System::Void BJAEFMJEHDK(::UnityEngine::Vector2 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BECKMAEFMEF_BJAEFMJEHDK_OFFSET))(this, EGEGIMGMJHN);
	}

	::BuddyCollider* GHMPMMCIOAK()
	{
		return ((::BuddyCollider*(*)(::PVOID))((::PBYTE)hIl2Cpp + BECKMAEFMEF_GHMPMMCIOAK_OFFSET))(this);
	}

	::System::Void LDAALPNDLNP(::UnityEngine::Vector2 KDLFPIFEKCL)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + BECKMAEFMEF_LDAALPNDLNP_OFFSET))(this, KDLFPIFEKCL);
	}

	::UnityEngine::Vector2 DBNPHDJAJEN()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + BECKMAEFMEF_DBNPHDJAJEN_OFFSET))(this);
	}

	::System::Void AIHCLNJCFLD(::ECBJHDFMMEA* GBELIHABEDH)
	{
		return ((::System::Void(*)(::PVOID, ::ECBJHDFMMEA*))((::PBYTE)hIl2Cpp + BECKMAEFMEF_AIHCLNJCFLD_OFFSET))(this, GBELIHABEDH);
	}

	::System::Boolean BJBMHIAKELH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BECKMAEFMEF_BJBMHIAKELH_OFFSET))(this);
	}
};
