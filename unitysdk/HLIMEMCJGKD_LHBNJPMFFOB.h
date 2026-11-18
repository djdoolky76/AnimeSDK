#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define HLIMEMCJGKD_LHBNJPMFFOB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x15DC3900)
#define HLIMEMCJGKD_LHBNJPMFFOB__CTOR_OFFSET UNITYSDK_OFFSET(0x15DC38F0)

inline static constexpr unsigned int HLIMEMCJGKD_LHBNJPMFFOB_TypeDefinitionIndex = 38485;

class HLIMEMCJGKD_LHBNJPMFFOB : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_LHBNJPMFFOB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HLIMEMCJGKD_LHBNJPMFFOB_PNGOHNLELDJ_OFFSET))(this);
	}
};
