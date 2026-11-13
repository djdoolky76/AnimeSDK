#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitFixedDeltaSecond; }

#define KCKCCNJCFCK_CTOR_OFFSET UNITYSDK_OFFSET(0x1A487170)
#define KCKCCNJCFCK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A487180)
#define KCKCCNJCFCK_GET_FORCESKIP_OFFSET UNITYSDK_OFFSET(0x1A4871C0)
#define KCKCCNJCFCK_ONSKIP_OFFSET UNITYSDK_OFFSET(0x1A487300)
#define KCKCCNJCFCK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A4871D0)
#define KCKCCNJCFCK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1A487230)
#define KCKCCNJCFCK_TICK_OFFSET UNITYSDK_OFFSET(0x1A487280)

inline static constexpr unsigned int KCKCCNJCFCK_TypeDefinitionIndex = 60161;

	class KCKCCNJCFCK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Single BOBKAKEJPEI; // 0x20
		::System::Single DKOFFPPGEFI; // 0x24
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitFixedDeltaSecond* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitFixedDeltaSecond*))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_DISPOSE_OFFSET))(this);
		}

		::System::Boolean get_ForceSkip()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_GET_FORCESKIP_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_TICK_OFFSET))(this, a1);
		}

		::System::Void OnSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCKCCNJCFCK_ONSKIP_OFFSET))(this);
		}

	};
