#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define KKCDPIJCADB_CTOR_OFFSET UNITYSDK_OFFSET(0x1733BB80)
#define KKCDPIJCADB_GBHIMOKPIJG_OFFSET UNITYSDK_OFFSET(0x1733B9E0)
#define KKCDPIJCADB_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x1733B070)
#define KKCDPIJCADB_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x1733ADC0)
#define KKCDPIJCADB_GJAMEKJEODP_OFFSET UNITYSDK_OFFSET(0x1733AF20)
#define KKCDPIJCADB_HBIFBEDEAIA_OFFSET UNITYSDK_OFFSET(0x1733B7B0)
#define KKCDPIJCADB_KEDJBIJAPKI_OFFSET UNITYSDK_OFFSET(0x1733B840)
#define KKCDPIJCADB_KLFBMJEDIBJ_OFFSET UNITYSDK_OFFSET(0x1733ADD0)
#define KKCDPIJCADB_MANUALLYSTATISTIC_OFFSET UNITYSDK_OFFSET(0x1733B4A0)

inline static constexpr unsigned int KKCDPIJCADB_TypeDefinitionIndex = 57217;

	class KKCDPIJCADB : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::FixPoint JINHBGPEDBI; // 0x48
		::RPG::GameCore::FixPoint EHPABAGCNEN; // 0x50
		::RPG::GameCore::FixPoint DJMFFNFNKLF; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::UInt32 KLFBMJEDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_KLFBMJEDIBJ_OFFSET))(this);
		}

		::System::UInt32 GJAMEKJEODP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_GJAMEKJEODP_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + KKCDPIJCADB_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void ManuallyStatistic(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KKCDPIJCADB_MANUALLYSTATISTIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBIFBEDEAIA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + KKCDPIJCADB_HBIFBEDEAIA_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KEDJBIJAPKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_KEDJBIJAPKI_OFFSET))(this);
		}

		::System::Void GBHIMOKPIJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKCDPIJCADB_GBHIMOKPIJG_OFFSET))(this);
		}

	};
