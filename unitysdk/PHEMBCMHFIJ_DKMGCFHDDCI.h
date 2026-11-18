#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PHEMBCMHFIJ_DKMGCFHDDCI_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x178CD0A0)
#define PHEMBCMHFIJ_DKMGCFHDDCI__CTOR_OFFSET UNITYSDK_OFFSET(0x178CD090)

inline static constexpr unsigned int PHEMBCMHFIJ_DKMGCFHDDCI_TypeDefinitionIndex = 84591;

class PHEMBCMHFIJ_DKMGCFHDDCI : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_DKMGCFHDDCI__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHEMBCMHFIJ_DKMGCFHDDCI_PNGOHNLELDJ_OFFSET))(this);
	}
};
