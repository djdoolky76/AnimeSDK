#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFKJNDCNILF.h"
#include "unitysdk/RPG/GameCore/FloorCustomValueSetSource.h"

namespace RPG::Client
{
	inline static constexpr unsigned int FloorCustomValue_1_TypeDefinitionIndex = 62084;

	template <typename T>
	class FloorCustomValue_1 : public ::EFKJNDCNILF
	{
	public:
		::System::Boolean _IsLock; // 0x0
		::RPG::GameCore::FloorCustomValueSetSource _LockSource; // 0x0
		::System::Boolean _NeedRecoverWhenUnlock; // 0x0
		T _RecoverValueWhenUnlock; // 0x0
		T _Value; // 0x0
	};
}
