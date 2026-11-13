#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/PropertyModifyFunction.h"
namespace RPG::GameCore { class JsonEnum; }
namespace RPG::GameCore { class PVEGameStatistics; }

#define JKLKDPKEEPH_CTOR_OFFSET UNITYSDK_OFFSET(0x17B26910)
#define JKLKDPKEEPH_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x17B26350)
#define JKLKDPKEEPH_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x17B26340)
#define JKLKDPKEEPH_HBIFBEDEAIA_OFFSET UNITYSDK_OFFSET(0x17B26880)
#define JKLKDPKEEPH_MANUALLYSTATISTIC_OFFSET UNITYSDK_OFFSET(0x17B26640)

inline static constexpr unsigned int JKLKDPKEEPH_TypeDefinitionIndex = 57215;

	class JKLKDPKEEPH : public ::LHHEGNEBMLN
	{
	public:
		::RPG::GameCore::FixPoint LAPLACLGGHB; // 0x48
		::RPG::GameCore::FixPoint GMDJCPPJABE; // 0x50
		::RPG::GameCore::FixPoint AAKMJDFLJPE; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKDPKEEPH_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + JKLKDPKEEPH_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + JKLKDPKEEPH_GENSTATISTICS_OFFSET))(this, a1);
		}

		::System::Void ManuallyStatistic(::RPG::GameCore::JsonEnum* a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::JsonEnum*, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JKLKDPKEEPH_MANUALLYSTATISTIC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HBIFBEDEAIA(::RPG::GameCore::FixPoint a1, ::RPG::GameCore::PropertyModifyFunction a2, ::RPG::GameCore::FixPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint, ::RPG::GameCore::PropertyModifyFunction, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JKLKDPKEEPH_HBIFBEDEAIA_OFFSET))(this, a1, a2, a3);
		}

	};
