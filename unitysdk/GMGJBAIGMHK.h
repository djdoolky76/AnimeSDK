#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define GMGJBAIGMHK_CTOR_OFFSET UNITYSDK_OFFSET(0x16A55020)
#define GMGJBAIGMHK_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x16A54AC0)
#define GMGJBAIGMHK_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x16A54AB0)
#define GMGJBAIGMHK_HBIFBEDEAIA_OFFSET UNITYSDK_OFFSET(0x16A54F90)
#define GMGJBAIGMHK_MANUALLYSTATISTIC_OFFSET UNITYSDK_OFFSET(0x16A54DA0)

inline static constexpr unsigned int GMGJBAIGMHK_TypeDefinitionIndex = 57216;

	class GMGJBAIGMHK : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::FixPoint CMANCKIBBHP; // 0x48
		::RPG::GameCore::FixPoint BLECGLCDDCE; // 0x50
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

		::System::Void ManuallyStatistic(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_MANUALLYSTATISTIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBIFBEDEAIA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + GMGJBAIGMHK_HBIFBEDEAIA_OFFSET))(this, a1, a2, a3);
		}

	};
