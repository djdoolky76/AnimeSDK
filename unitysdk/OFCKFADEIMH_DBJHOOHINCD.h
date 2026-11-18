#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define OFCKFADEIMH_DBJHOOHINCD_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE0F55C0)
#define OFCKFADEIMH_DBJHOOHINCD__CTOR_OFFSET UNITYSDK_OFFSET(0xE0F55B0)

inline static constexpr unsigned int OFCKFADEIMH_DBJHOOHINCD_TypeDefinitionIndex = 59238;

class OFCKFADEIMH_DBJHOOHINCD : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCKFADEIMH_DBJHOOHINCD__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFCKFADEIMH_DBJHOOHINCD_PNGOHNLELDJ_OFFSET))(this);
	}
};
