#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define JAFPMLCADPA_KICPIPHALLB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x19891DE0)
#define JAFPMLCADPA_KICPIPHALLB__CTOR_OFFSET UNITYSDK_OFFSET(0x19891DD0)

inline static constexpr unsigned int JAFPMLCADPA_KICPIPHALLB_TypeDefinitionIndex = 53842;

class JAFPMLCADPA_KICPIPHALLB : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFPMLCADPA_KICPIPHALLB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAFPMLCADPA_KICPIPHALLB_PNGOHNLELDJ_OFFSET))(this);
	}
};
