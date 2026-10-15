#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }

#define GFGMMPIDNGI_CTOR_OFFSET UNITYSDK_OFFSET(0x159F7210)
#define GFGMMPIDNGI_KPIDBBLMOEJ_OFFSET UNITYSDK_OFFSET(0x159F7130)

inline static constexpr unsigned int GFGMMPIDNGI_TypeDefinitionIndex = 53022;

	class GFGMMPIDNGI : public ::System::Object
	{
	public:
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* EABKOHGCHFP; // 0x10
		::System::Single BFPEKOGAALP; // 0x18
		::System::Single ENHAHMOIFEI; // 0x1C
		::System::Single LMNMIOJBPPE; // 0x20
		::System::Single PMEDPCIPCIH; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGMMPIDNGI_CTOR_OFFSET))(this);
		}

		::System::Single KPIDBBLMOEJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GFGMMPIDNGI_KPIDBBLMOEJ_OFFSET))(this);
		}

	};
