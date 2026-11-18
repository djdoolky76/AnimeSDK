#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KLEKPGJKAIB_BODMDDAINMD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x1521F640)
#define KLEKPGJKAIB_BODMDDAINMD__CTOR_OFFSET UNITYSDK_OFFSET(0x1521F630)

inline static constexpr unsigned int KLEKPGJKAIB_BODMDDAINMD_TypeDefinitionIndex = 42549;

class KLEKPGJKAIB_BODMDDAINMD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_BODMDDAINMD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLEKPGJKAIB_BODMDDAINMD_PNGOHNLELDJ_OFFSET))(this);
	}
};
