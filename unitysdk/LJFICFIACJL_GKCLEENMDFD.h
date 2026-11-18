#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LJFICFIACJL_GKCLEENMDFD_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x13CF3A90)
#define LJFICFIACJL_GKCLEENMDFD_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x13CF3AA0)
#define LJFICFIACJL_GKCLEENMDFD__CTOR_OFFSET UNITYSDK_OFFSET(0x13CF3A80)

inline static constexpr unsigned int LJFICFIACJL_GKCLEENMDFD_TypeDefinitionIndex = 82696;

class LJFICFIACJL_GKCLEENMDFD : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFICFIACJL_GKCLEENMDFD__CTOR_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFICFIACJL_GKCLEENMDFD_HCDMMJLJLAL_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJFICFIACJL_GKCLEENMDFD_KBAFCIJONFJ_OFFSET))(this);
	}
};
