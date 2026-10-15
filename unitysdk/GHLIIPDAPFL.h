#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BIJDPKCMABD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniGameHundredFloorConfig; }

#define GHLIIPDAPFL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CAA2210)
#define GHLIIPDAPFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CAA2260)

inline static constexpr unsigned int GHLIIPDAPFL_TypeDefinitionIndex = 43392;

	class GHLIIPDAPFL : public ::System::Object
	{
	public:
		::RPG::GameCore::MiniGameHundredFloorConfig* EABKOHGCHFP; // 0x10
		::BIJDPKCMABD NPAOBGDKLHB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLIIPDAPFL_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHLIIPDAPFL_CLEAR_OFFSET))(this);
		}

	};
