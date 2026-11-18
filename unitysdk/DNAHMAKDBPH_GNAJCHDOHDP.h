#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DNAHMAKDBPH_GNAJCHDOHDP_CHGJBHPEDFJ_OFFSET UNITYSDK_OFFSET(0x13469760)
#define DNAHMAKDBPH_GNAJCHDOHDP__CTOR_OFFSET UNITYSDK_OFFSET(0x13469750)

inline static constexpr unsigned int DNAHMAKDBPH_GNAJCHDOHDP_TypeDefinitionIndex = 68295;

class DNAHMAKDBPH_GNAJCHDOHDP : public ::System::Object
{
public:
	::HOCDHMEPPEG MMCKPLBLCIL; // 0x10
	::System::Boolean BNPLDAKGABH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_GNAJCHDOHDP__CTOR_OFFSET))(this);
	}

	::System::Void CHGJBHPEDFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNAHMAKDBPH_GNAJCHDOHDP_CHGJBHPEDFJ_OFFSET))(this);
	}
};
