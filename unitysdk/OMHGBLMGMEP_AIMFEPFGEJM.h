#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OMHGBLMGMEP_AIMFEPFGEJM_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x14F905D0)
#define OMHGBLMGMEP_AIMFEPFGEJM__CTOR_OFFSET UNITYSDK_OFFSET(0x14F905C0)

inline static constexpr unsigned int OMHGBLMGMEP_AIMFEPFGEJM_TypeDefinitionIndex = 52053;

class OMHGBLMGMEP_AIMFEPFGEJM : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_AIMFEPFGEJM__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMHGBLMGMEP_AIMFEPFGEJM_PNGOHNLELDJ_OFFSET))(this);
	}
};
