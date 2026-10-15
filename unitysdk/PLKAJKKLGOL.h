#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MatchThreePropType.h"
#include "unitysdk/System/Object.h"
class DBELNCKIDFH;

#define PLKAJKKLGOL_BEMEBBALIKK_OFFSET UNITYSDK_OFFSET(0x1C9C84D0)
#define PLKAJKKLGOL_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9C85D0)
#define PLKAJKKLGOL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1C9C81D0)
#define PLKAJKKLGOL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9C8620)
#define PLKAJKKLGOL_JBIOGKPHKKC_OFFSET UNITYSDK_OFFSET(0x1C9C82D0)
#define PLKAJKKLGOL_KMGPABAGLJK_OFFSET UNITYSDK_OFFSET(0x1C9C83D0)
#define PLKAJKKLGOL_MJGKNFEILLI_OFFSET UNITYSDK_OFFSET(0x1C9C80D0)

inline static constexpr unsigned int PLKAJKKLGOL_TypeDefinitionIndex = 42287;

	class PLKAJKKLGOL : public ::System::Object
	{
	public:
		::DBELNCKIDFH* EABKOHGCHFP; // 0x10
		::System::UInt32 CMNNGJKFIOM; // 0x18
		::System::UInt32 DGGCFDKJDPO; // 0x1C
		::System::Boolean BCDBBCEILIC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_CTOR_OFFSET))(this);
		}

		::System::UInt32 MJGKNFEILLI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_MJGKNFEILLI_OFFSET))(this);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_CMFGFDOOFFI_OFFSET))(this);
		}

		::RPG::GameCore::MatchThreePropType JBIOGKPHKKC()
		{
			return ((::RPG::GameCore::MatchThreePropType(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_JBIOGKPHKKC_OFFSET))(this);
		}

		::System::UInt32 KMGPABAGLJK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_KMGPABAGLJK_OFFSET))(this);
		}

		::System::UInt32 BEMEBBALIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_BEMEBBALIKK_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLKAJKKLGOL_CLEAR_OFFSET))(this);
		}

	};
