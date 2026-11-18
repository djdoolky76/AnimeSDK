#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define PKLNLIGIKFF_DAKMEEEKBGL_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1B9EACB0)
#define PKLNLIGIKFF_DAKMEEEKBGL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9EACA0)

inline static constexpr unsigned int PKLNLIGIKFF_DAKMEEEKBGL_TypeDefinitionIndex = 61664;

class PKLNLIGIKFF_DAKMEEEKBGL : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_DAKMEEEKBGL__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKLNLIGIKFF_DAKMEEEKBGL_PNGOHNLELDJ_OFFSET))(this);
	}
};
