#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define GMGJBAIGMHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15AD2860)
#define GMGJBAIGMHK_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x15AD2300)
#define GMGJBAIGMHK_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x15AD22F0)
#define GMGJBAIGMHK_HBIFBEDEAIA_OFFSET UNITYSDK_OFFSET(0x15AD27D0)
#define GMGJBAIGMHK_KNJKPFCPKAH_OFFSET UNITYSDK_OFFSET(0x15AD25E0)

inline static constexpr unsigned int GMGJBAIGMHK_TypeDefinitionIndex = 56013;

	class GMGJBAIGMHK : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::FixPoint CMANCKIBBHP; // 0x38
		::RPG::GameCore::FixPoint BLECGLCDDCE; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void KNJKPFCPKAH(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_KNJKPFCPKAH_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBIFBEDEAIA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_HBIFBEDEAIA_OFFSET))(this, a1, a2, a3);
		}

	};
