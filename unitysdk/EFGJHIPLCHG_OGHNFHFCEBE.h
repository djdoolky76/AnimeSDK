#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define EFGJHIPLCHG_OGHNFHFCEBE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0x16992D80)
#define EFGJHIPLCHG_OGHNFHFCEBE__CTOR_OFFSET UNITYSDK_OFFSET(0x16992D70)

inline static constexpr unsigned int EFGJHIPLCHG_OGHNFHFCEBE_TypeDefinitionIndex = 73542;

class EFGJHIPLCHG_OGHNFHFCEBE : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_OGHNFHFCEBE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFGJHIPLCHG_OGHNFHFCEBE_PNGOHNLELDJ_OFFSET))(this);
	}
};
