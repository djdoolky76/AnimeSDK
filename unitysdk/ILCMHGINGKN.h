#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TravelShipHideUI; }

#define ILCMHGINGKN_CTOR_OFFSET UNITYSDK_OFFSET(0x164A82D0)
#define ILCMHGINGKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A82E0)
#define ILCMHGINGKN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x164A8380)
#define ILCMHGINGKN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x164A84B0)
#define ILCMHGINGKN_TICK_OFFSET UNITYSDK_OFFSET(0x164A8320)

inline static constexpr unsigned int ILCMHGINGKN_TypeDefinitionIndex = 53438;

	class ILCMHGINGKN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::RPG::GameCore::TravelShipHideUI* IGHAHBNLIJA; // 0x20
		::System::UInt32 MGLEPKGFODH; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TravelShipHideUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TravelShipHideUI*))((::PBYTE)hIl2Cpp + ILCMHGINGKN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCMHGINGKN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ILCMHGINGKN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCMHGINGKN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILCMHGINGKN_ONTASKRESET_OFFSET))(this);
		}

	};
