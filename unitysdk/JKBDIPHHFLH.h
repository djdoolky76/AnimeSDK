#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHHEGNEBMLN.h"
#include "unitysdk/RPG/GameCore/ActivitySubModeType.h"
class GNLNKOGLFPF;
namespace RPG::GameCore { class PVEGameStatistics; }

#define JKBDIPHHFLH_CCACOCPGEPL_OFFSET UNITYSDK_OFFSET(0x17B16F60)
#define JKBDIPHHFLH_CTOR_OFFSET UNITYSDK_OFFSET(0x17B17120)
#define JKBDIPHHFLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17B16A40)
#define JKBDIPHHFLH_GENSTATISTICS_OFFSET UNITYSDK_OFFSET(0x17B17020)
#define JKBDIPHHFLH_GET_ACTIVITYSUBMODETYPE_OFFSET UNITYSDK_OFFSET(0x17B16FC0)
#define JKBDIPHHFLH_ONBATTLEINSTANCECREATED_OFFSET UNITYSDK_OFFSET(0x17B16FD0)
#define JKBDIPHHFLH_ONINITIALIZE_OFFSET UNITYSDK_OFFSET(0x17B16A90)

inline static constexpr unsigned int JKBDIPHHFLH_TypeDefinitionIndex = 57256;

	class JKBDIPHHFLH : public ::LHHEGNEBMLN
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnInitialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_ONINITIALIZE_OFFSET))(this);
		}

		::System::Void CCACOCPGEPL(::GNLNKOGLFPF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNLNKOGLFPF*))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_CCACOCPGEPL_OFFSET))(this, a1);
		}

		::RPG::GameCore::ActivitySubModeType get_ActivitySubModeType()
		{
			return ((::RPG::GameCore::ActivitySubModeType(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_GET_ACTIVITYSUBMODETYPE_OFFSET))(this);
		}

		::System::Void OnBattleInstanceCreated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_ONBATTLEINSTANCECREATED_OFFSET))(this);
		}

		::System::Void GenStatistics(::RPG::GameCore::PVEGameStatistics* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PVEGameStatistics*))((::PBYTE)hIl2Cpp + JKBDIPHHFLH_GENSTATISTICS_OFFSET))(this, a1);
		}

	};
