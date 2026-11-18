#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define LBANJFPOOIO_IBLIHEAJNBG_HCDMMJLJLAL_OFFSET UNITYSDK_OFFSET(0x15806920)
#define LBANJFPOOIO_IBLIHEAJNBG_KBAFCIJONFJ_OFFSET UNITYSDK_OFFSET(0x15806910)
#define LBANJFPOOIO_IBLIHEAJNBG__CTOR_OFFSET UNITYSDK_OFFSET(0x15806900)

inline static constexpr unsigned int LBANJFPOOIO_IBLIHEAJNBG_TypeDefinitionIndex = 77423;

class LBANJFPOOIO_IBLIHEAJNBG : public ::System::Object
{
public:
	::System::Action* POCANNAFFOA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBANJFPOOIO_IBLIHEAJNBG__CTOR_OFFSET))(this);
	}

	::System::Void KBAFCIJONFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBANJFPOOIO_IBLIHEAJNBG_KBAFCIJONFJ_OFFSET))(this);
	}

	::System::Void HCDMMJLJLAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBANJFPOOIO_IBLIHEAJNBG_HCDMMJLJLAL_OFFSET))(this);
	}
};
