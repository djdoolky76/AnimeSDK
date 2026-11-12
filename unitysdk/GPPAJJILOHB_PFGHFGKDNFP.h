#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class TimeRewindMaterialOverlayConfig; }

#define GPPAJJILOHB_PFGHFGKDNFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x16AED7B0)
#define GPPAJJILOHB_PFGHFGKDNFP_CTOR_OFFSET UNITYSDK_OFFSET(0x16AED800)

inline static constexpr unsigned int GPPAJJILOHB_PFGHFGKDNFP_TypeDefinitionIndex = 62219;

	class GPPAJJILOHB_PFGHFGKDNFP : public ::System::Object
	{
	public:
		::RPG::GameCore::TimeRewindMaterialOverlayConfig* ABAINBONPEP; // 0x10
		::System::Single OECIKCPBBOE; // 0x18
		::System::Single MPLADBKEPNC; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_PFGHFGKDNFP_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPAJJILOHB_PFGHFGKDNFP_CLEAR_OFFSET))(this);
		}

	};
