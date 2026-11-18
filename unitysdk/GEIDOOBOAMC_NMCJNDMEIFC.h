#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define GEIDOOBOAMC_NMCJNDMEIFC_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x179E4140)
#define GEIDOOBOAMC_NMCJNDMEIFC__CTOR_OFFSET UNITYSDK_OFFSET(0x179E4130)

inline static constexpr unsigned int GEIDOOBOAMC_NMCJNDMEIFC_TypeDefinitionIndex = 54485;

class GEIDOOBOAMC_NMCJNDMEIFC : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_NMCJNDMEIFC__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEIDOOBOAMC_NMCJNDMEIFC_PNGOHNLELDJ_OFFSET))(this);
	}
};
