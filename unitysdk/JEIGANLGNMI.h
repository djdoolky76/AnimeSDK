#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
class NENMILNIFAB;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define JEIGANLGNMI_CTOR_OFFSET UNITYSDK_OFFSET(0xB96F360)
#define JEIGANLGNMI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB96F540)
#define JEIGANLGNMI_JKLBJMCPCME_OFFSET UNITYSDK_OFFSET(0xB96F810)
#define JEIGANLGNMI_MJDDMNAKPME_1_OFFSET UNITYSDK_OFFSET(0xB96F930)
#define JEIGANLGNMI_MJDDMNAKPME_OFFSET UNITYSDK_OFFSET(0xB96F7A0)
#define JEIGANLGNMI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB96F3F0)
#define JEIGANLGNMI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB96F4F0)
#define JEIGANLGNMI_TICK_OFFSET UNITYSDK_OFFSET(0xB96F6A0)

inline static constexpr unsigned int JEIGANLGNMI_TypeDefinitionIndex = 59758;

	class JEIGANLGNMI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::KFELGAIGHAP* MPKAFEJFNKN; // 0x20
		::NENMILNIFAB* IGHAHBNLIJA; // 0x28
		::System::Boolean GHDJKMOFAPI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NENMILNIFAB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NENMILNIFAB*))((::PBYTE)hIl2Cpp + JEIGANLGNMI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIGANLGNMI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIGANLGNMI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIGANLGNMI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JEIGANLGNMI_TICK_OFFSET))(this, a1);
		}

		::System::Void JKLBJMCPCME(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JEIGANLGNMI_JKLBJMCPCME_OFFSET))(this, a1);
		}

		::System::Boolean MJDDMNAKPME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JEIGANLGNMI_MJDDMNAKPME_OFFSET))(this);
		}

		static ::System::Boolean MJDDMNAKPME_1(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JEIGANLGNMI_MJDDMNAKPME_1_OFFSET))(a1);
		}

	};
