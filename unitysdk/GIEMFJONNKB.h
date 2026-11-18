#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputLogicEventType.h"
#include "unitysdk/System/Object.h"

class NMPEPIMNJKI;
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T> class Action_1; }

#define GIEMFJONNKB__CTOR_OFFSET UNITYSDK_OFFSET(0x18A01FF0)

inline static constexpr unsigned int GIEMFJONNKB_TypeDefinitionIndex = 60308;

class GIEMFJONNKB : public ::System::Object
{
public:
	::System::String* PONMLAPAEBJ; // 0x10
	::System::Action_3<::NMPEPIMNJKI*, ::System::Boolean, ::System::Boolean>* DIJBLCMLBNG; // 0x18
	::System::Action_1<::NMPEPIMNJKI*>* DGCGJLHGHPG; // 0x20
	::System::Boolean KHJJFIAHHPN; // 0x28
	::System::Byte _padding0[0x3];
	::MoleMole::InputLogicEventType EILODFNDLJK; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIEMFJONNKB__CTOR_OFFSET))(this);
	}
};
