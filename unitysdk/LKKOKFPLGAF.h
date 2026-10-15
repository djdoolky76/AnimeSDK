#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MonopolyMapCell; }

#define LKKOKFPLGAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8E1BD0)

inline static constexpr unsigned int LKKOKFPLGAF_TypeDefinitionIndex = 42553;

	class LKKOKFPLGAF : public ::System::Object
	{
	public:
		::RPG::GameCore::MonopolyMapCell* LFOMNMOOGKJ; // 0x10
		::System::UInt32 AHNBPKAGAIL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKKOKFPLGAF_CTOR_OFFSET))(this);
		}

	};
