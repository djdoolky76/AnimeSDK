#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define LDJMJMJLBGG_BFLCDGBKAOJ_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1A2EE010)
#define LDJMJMJLBGG_BFLCDGBKAOJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EE000)

inline static constexpr unsigned int LDJMJMJLBGG_BFLCDGBKAOJ_TypeDefinitionIndex = 90526;

class LDJMJMJLBGG_BFLCDGBKAOJ : public ::System::Object
{
public:
	::System::String* GDGGMIJHAJJ; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_BFLCDGBKAOJ__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDJMJMJLBGG_BFLCDGBKAOJ_PNGOHNLELDJ_OFFSET))(this);
	}
};
