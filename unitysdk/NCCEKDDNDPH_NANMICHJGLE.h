#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NCCEKDDNDPH_NANMICHJGLE_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xE183740)
#define NCCEKDDNDPH_NANMICHJGLE__CTOR_OFFSET UNITYSDK_OFFSET(0xE183730)

inline static constexpr unsigned int NCCEKDDNDPH_NANMICHJGLE_TypeDefinitionIndex = 64112;

class NCCEKDDNDPH_NANMICHJGLE : public ::System::Object
{
public:
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x10
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x18
	::System::String* GDGGMIJHAJJ; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_NANMICHJGLE__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCCEKDDNDPH_NANMICHJGLE_PNGOHNLELDJ_OFFSET))(this);
	}
};
