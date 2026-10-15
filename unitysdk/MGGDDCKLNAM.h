#pragma once
#include "unitysdk/unitysdk.h"
class BJHMBGLPOLB;
namespace RPG::GameCore { class GameEntity; }

inline static constexpr unsigned int MGGDDCKLNAM_TypeDefinitionIndex = 55990;

	struct alignas(8) MGGDDCKLNAM
	{
		::BJHMBGLPOLB* KDFKDNLNDHN; // 0x10
		::System::Int32 GPPLENBLBAN; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* MCLLALGABAB; // 0x20
	};
