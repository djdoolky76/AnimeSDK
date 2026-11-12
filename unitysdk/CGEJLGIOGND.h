#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonopolyCheckSwitchMap; }
namespace RPG::GameCore { class TaskContext; }

#define CGEJLGIOGND_CTOR_OFFSET UNITYSDK_OFFSET(0xD634F40)
#define CGEJLGIOGND_DISPOSE_OFFSET UNITYSDK_OFFSET(0xD635620)
#define CGEJLGIOGND_IIDOKGPPLNH_OFFSET UNITYSDK_OFFSET(0xD635120)
#define CGEJLGIOGND_KGPFDMBIGEO_OFFSET UNITYSDK_OFFSET(0xD635290)
#define CGEJLGIOGND_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xD6353F0)
#define CGEJLGIOGND_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xD635540)
#define CGEJLGIOGND_PNIIIOFJBIC_OFFSET UNITYSDK_OFFSET(0xD635340)
#define CGEJLGIOGND_TICK_OFFSET UNITYSDK_OFFSET(0xD6356F0)

inline static constexpr unsigned int CGEJLGIOGND_TypeDefinitionIndex = 59474;

	class CGEJLGIOGND : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* DENDFLNKMLH; // 0x18
		::KFELGAIGHAP* CMMPAANPDKL; // 0x20
		::RPG::GameCore::MonopolyCheckSwitchMap* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* KMBLBLPDHDI; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::KFELGAIGHAP* NBBPEAJLNED; // 0x40
		::KFELGAIGHAP* NNJOKIJLKKG; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckSwitchMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckSwitchMap*))((::PBYTE)hIl2Cpp + CGEJLGIOGND_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean IIDOKGPPLNH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_IIDOKGPPLNH_OFFSET))(this);
		}

		::System::Boolean KGPFDMBIGEO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_KGPFDMBIGEO_OFFSET))(this);
		}

		::System::Boolean PNIIIOFJBIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_PNIIIOFJBIC_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGEJLGIOGND_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CGEJLGIOGND_TICK_OFFSET))(this, a1);
		}

	};
