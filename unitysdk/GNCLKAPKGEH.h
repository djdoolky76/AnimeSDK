#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/LockHPStrength.h"
namespace System { class String; }

inline static constexpr unsigned int GNCLKAPKGEH_TypeDefinitionIndex = 57744;

	struct alignas(8) GNCLKAPKGEH
	{
		::System::String* JNJCCHFBKPB; // 0x10
		::RPG::GameCore::LockHPStrength AIDNPNEBLII; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint GELAMLPPBKE; // 0x20
	};
