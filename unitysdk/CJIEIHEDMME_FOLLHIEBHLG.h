#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALLEODOOADP;
class AOJKLCGGPAK;

#define CJIEIHEDMME_FOLLHIEBHLG_HJHNKADNEAJ_OFFSET UNITYSDK_OFFSET(0x11552700)
#define CJIEIHEDMME_FOLLHIEBHLG__CTOR_OFFSET UNITYSDK_OFFSET(0x115526F0)

inline static constexpr unsigned int CJIEIHEDMME_FOLLHIEBHLG_TypeDefinitionIndex = 59366;

class CJIEIHEDMME_FOLLHIEBHLG : public ::System::Object
{
public:
	::ALLEODOOADP* PLBEAIIJADM; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJIEIHEDMME_FOLLHIEBHLG__CTOR_OFFSET))(this);
	}

	::System::Boolean HJHNKADNEAJ(::AOJKLCGGPAK* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::AOJKLCGGPAK*))((::PBYTE)hIl2Cpp + CJIEIHEDMME_FOLLHIEBHLG_HJHNKADNEAJ_OFFSET))(this, HAAEBCOBKFF);
	}
};
