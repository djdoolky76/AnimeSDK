#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define KKJKAKMOCJC_NEKBDPGGECA_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x129A0830)
#define KKJKAKMOCJC_NEKBDPGGECA__CTOR_OFFSET UNITYSDK_OFFSET(0x129A0820)

inline static constexpr unsigned int KKJKAKMOCJC_NEKBDPGGECA_TypeDefinitionIndex = 66231;

class KKJKAKMOCJC_NEKBDPGGECA : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::Single HBFKHANEEND; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_NEKBDPGGECA__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKJKAKMOCJC_NEKBDPGGECA_PNGOHNLELDJ_OFFSET))(this);
	}
};
