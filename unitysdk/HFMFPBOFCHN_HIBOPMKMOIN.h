#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HFMFPBOFCHN_HIBOPMKMOIN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x17E46F90)
#define HFMFPBOFCHN_HIBOPMKMOIN__CTOR_OFFSET UNITYSDK_OFFSET(0x17E46F80)

inline static constexpr unsigned int HFMFPBOFCHN_HIBOPMKMOIN_TypeDefinitionIndex = 66796;

class HFMFPBOFCHN_HIBOPMKMOIN : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_HIBOPMKMOIN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFMFPBOFCHN_HIBOPMKMOIN_PNGOHNLELDJ_OFFSET))(this);
	}
};
