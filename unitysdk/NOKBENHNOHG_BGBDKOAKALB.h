#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define NOKBENHNOHG_BGBDKOAKALB_PNGOHNLELDJ_OFFSET UNITYSDK_OFFSET(0xFD15620)
#define NOKBENHNOHG_BGBDKOAKALB__CTOR_OFFSET UNITYSDK_OFFSET(0xFD15610)

inline static constexpr unsigned int NOKBENHNOHG_BGBDKOAKALB_TypeDefinitionIndex = 52981;

class NOKBENHNOHG_BGBDKOAKALB : public ::System::Object
{
public:
	::System::Action_1<::System::Single>* JOLIEKHCGDJ; // 0x10
	::System::String* GDGGMIJHAJJ; // 0x18
	::System::Action_1<::System::String*>* MGAKJHJAGJI; // 0x20
	::System::Single HBFKHANEEND; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBENHNOHG_BGBDKOAKALB__CTOR_OFFSET))(this);
	}

	::System::Void PNGOHNLELDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOKBENHNOHG_BGBDKOAKALB_PNGOHNLELDJ_OFFSET))(this);
	}
};
