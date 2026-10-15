#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define NAKLLNKNLLD_ICACFJPGOJD_OFFSET UNITYSDK_OFFSET(0x1EF50)

inline static constexpr unsigned int NAKLLNKNLLD_TypeDefinitionIndex = 54444;

	struct alignas(4) NAKLLNKNLLD
	{
		::System::Boolean LPDDABKJPFH; // 0x10
		::System::Boolean JOEKHIDNIFP; // 0x11
		::System::Byte _padding0[0x6];
		::RPG::GameCore::FixPoint JAKKCFHICNK; // 0x18
		::System::Boolean ICACFJPGOJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAKLLNKNLLD_ICACFJPGOJD_OFFSET))(this);
		}

	};
