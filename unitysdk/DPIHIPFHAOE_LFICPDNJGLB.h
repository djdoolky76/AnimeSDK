#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DPIHIPFHAOE_LFICPDNJGLB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x10614260)
#define DPIHIPFHAOE_LFICPDNJGLB__CTOR_OFFSET UNITYSDK_OFFSET(0x10614250)

inline static constexpr unsigned int DPIHIPFHAOE_LFICPDNJGLB_TypeDefinitionIndex = 44559;

class DPIHIPFHAOE_LFICPDNJGLB : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_LFICPDNJGLB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPIHIPFHAOE_LFICPDNJGLB_PNGOHNLELDJ_OFFSET))(this);
	}
};
