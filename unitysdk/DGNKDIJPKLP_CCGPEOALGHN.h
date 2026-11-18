#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define DGNKDIJPKLP_CCGPEOALGHN_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16B9C6F0)
#define DGNKDIJPKLP_CCGPEOALGHN__CTOR_OFFSET UNITYSDK_OFFSET(0x16B9C6E0)

inline static constexpr unsigned int DGNKDIJPKLP_CCGPEOALGHN_TypeDefinitionIndex = 73389;

class DGNKDIJPKLP_CCGPEOALGHN : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_CCGPEOALGHN__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DGNKDIJPKLP_CCGPEOALGHN_PNGOHNLELDJ_OFFSET))(this);
	}
};
