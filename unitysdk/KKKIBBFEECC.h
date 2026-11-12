#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class IAAOMMGICFK;
class LNIODOGCLAH;
namespace RPG::GameCore { class TaskContext; }

#define KKKIBBFEECC_CTOR_OFFSET UNITYSDK_OFFSET(0xBD1B1C0)
#define KKKIBBFEECC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD1B1D0)
#define KKKIBBFEECC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD1B270)
#define KKKIBBFEECC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD1B220)
#define KKKIBBFEECC_TICK_OFFSET UNITYSDK_OFFSET(0xBD1B430)

inline static constexpr unsigned int KKKIBBFEECC_TypeDefinitionIndex = 53812;

	class KKKIBBFEECC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::IAAOMMGICFK* HOADGOKCPDG; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNIODOGCLAH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNIODOGCLAH*))((::PBYTE)hIl2Cpp + KKKIBBFEECC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKIBBFEECC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKIBBFEECC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKKIBBFEECC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KKKIBBFEECC_TICK_OFFSET))(this, a1);
		}

	};
