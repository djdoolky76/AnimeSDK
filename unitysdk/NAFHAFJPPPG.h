#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowRogueShopInfoDialog; }
namespace RPG::GameCore { class TaskContext; }

#define NAFHAFJPPPG_CTOR_OFFSET UNITYSDK_OFFSET(0xBA91C90)
#define NAFHAFJPPPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA91CA0)
#define NAFHAFJPPPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA91D40)
#define NAFHAFJPPPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA91DC0)
#define NAFHAFJPPPG_TICK_OFFSET UNITYSDK_OFFSET(0xBA91CE0)

inline static constexpr unsigned int NAFHAFJPPPG_TypeDefinitionIndex = 58687;

	class NAFHAFJPPPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowRogueShopInfoDialog* OFKGLJOAMLD; // 0x20
		// static const ::System::String* EJKJOEAMMBJ; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowRogueShopInfoDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowRogueShopInfoDialog*))((::PBYTE)hIl2Cpp + NAFHAFJPPPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFHAFJPPPG_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAFHAFJPPPG_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFHAFJPPPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAFHAFJPPPG_ONTASKRESET_OFFSET))(this);
		}

	};
