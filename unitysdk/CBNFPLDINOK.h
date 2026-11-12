#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class MiniGameHundredFloorBlockConfig; }

#define CBNFPLDINOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA5DA50)

inline static constexpr unsigned int CBNFPLDINOK_TypeDefinitionIndex = 44374;

	class CBNFPLDINOK : public ::System::Object
	{
	public:
		::RPG::GameCore::MiniGameHundredFloorBlockConfig* EABKOHGCHFP; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBNFPLDINOK_CTOR_OFFSET))(this);
		}

	};
