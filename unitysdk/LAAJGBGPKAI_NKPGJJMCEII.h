#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LAAJGBGPKAI_NKPGJJMCEII_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1864FB70)
#define LAAJGBGPKAI_NKPGJJMCEII__CTOR_OFFSET UNITYSDK_OFFSET(0x1864FB60)

inline static constexpr unsigned int LAAJGBGPKAI_NKPGJJMCEII_TypeDefinitionIndex = 84451;

class LAAJGBGPKAI_NKPGJJMCEII : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_NKPGJJMCEII__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAAJGBGPKAI_NKPGJJMCEII_PNGOHNLELDJ_OFFSET))(this);
	}
};
