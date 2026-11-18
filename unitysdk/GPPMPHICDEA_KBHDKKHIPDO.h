#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GPPMPHICDEA_HCEIGOMAOGG;
namespace System { class Action; }

#define GPPMPHICDEA_KBHDKKHIPDO_LIBHKGELGHK_OFFSET UNITYSDK_OFFSET(0x10FFBBB0)
#define GPPMPHICDEA_KBHDKKHIPDO__CTOR_OFFSET UNITYSDK_OFFSET(0x10FFBBA0)

inline static constexpr unsigned int GPPMPHICDEA_KBHDKKHIPDO_TypeDefinitionIndex = 42681;

class GPPMPHICDEA_KBHDKKHIPDO : public ::System::Object
{
public:
	::System::Action* MHGPLJJHILJ; // 0x10
	::GPPMPHICDEA_HCEIGOMAOGG* KGFKHBMEKBL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KBHDKKHIPDO__CTOR_OFFSET))(this);
	}

	::System::Void LIBHKGELGHK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPMPHICDEA_KBHDKKHIPDO_LIBHKGELGHK_OFFSET))(this);
	}
};
