#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define PINBHKFHPAL_IBBNKBIKNDI_ABBKACNLBPE_OFFSET UNITYSDK_OFFSET(0x14BA0150)
#define PINBHKFHPAL_IBBNKBIKNDI_EBNFBKBDOJE_OFFSET UNITYSDK_OFFSET(0x14B9FFC0)
#define PINBHKFHPAL_IBBNKBIKNDI_JICHGBDCBDC_OFFSET UNITYSDK_OFFSET(0x14BA0060)
#define PINBHKFHPAL_IBBNKBIKNDI_JICJDEHLNGA_OFFSET UNITYSDK_OFFSET(0x14BA01B0)
#define PINBHKFHPAL_IBBNKBIKNDI_JIGOHHLMNKK_OFFSET UNITYSDK_OFFSET(0x14B9FFD0)
#define PINBHKFHPAL_IBBNKBIKNDI__CTOR_OFFSET UNITYSDK_OFFSET(0x14B9FFA0)

inline static constexpr unsigned int PINBHKFHPAL_IBBNKBIKNDI_TypeDefinitionIndex = 38708;

class PINBHKFHPAL_IBBNKBIKNDI : public ::System::Object
{
public:
	::System::Action* PLGLKDMLBLE; // 0x10
	::System::Boolean JMBFCGDKKBE; // 0x18
	::System::Boolean GBJOLGBMOFJ; // 0x19
	::System::Boolean MLAFEJGLHPL; // 0x1A

	::System::Void _ctor(::System::Action* DMPEOJCCCLO, ::System::Boolean KIIBJPFODED, ::System::Boolean HCPBICENANJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI__CTOR_OFFSET))(this, DMPEOJCCCLO, KIIBJPFODED, HCPBICENANJ);
	}

	::System::Boolean EBNFBKBDOJE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI_EBNFBKBDOJE_OFFSET))(this);
	}

	::System::Void JIGOHHLMNKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI_JIGOHHLMNKK_OFFSET))(this);
	}

	::System::Boolean JICHGBDCBDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI_JICHGBDCBDC_OFFSET))(this);
	}

	::System::Void ABBKACNLBPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI_ABBKACNLBPE_OFFSET))(this);
	}

	::System::Boolean JICJDEHLNGA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PINBHKFHPAL_IBBNKBIKNDI_JICJDEHLNGA_OFFSET))(this);
	}
};
