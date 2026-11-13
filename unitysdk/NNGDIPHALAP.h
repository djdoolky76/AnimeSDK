#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ActivityRaidAlleyPlacingShowUI; }
namespace RPG::GameCore { class TaskContext; }

#define NNGDIPHALAP_CTOR_OFFSET UNITYSDK_OFFSET(0x179E2FA0)
#define NNGDIPHALAP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x179E30D0)
#define NNGDIPHALAP_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x179E3560)
#define NNGDIPHALAP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x179E31A0)
#define NNGDIPHALAP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x179E3080)
#define NNGDIPHALAP_PHJJMJHMKJI_OFFSET UNITYSDK_OFFSET(0x179E31F0)
#define NNGDIPHALAP_TICK_OFFSET UNITYSDK_OFFSET(0x179E3020)

inline static constexpr unsigned int NNGDIPHALAP_TypeDefinitionIndex = 59092;

	class NNGDIPHALAP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* JKJPFJALGKO; // 0x18
		::KFELGAIGHAP* GGGKNHKPGHP; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActivityRaidAlleyPlacingShowUI*))((::PBYTE)hIl2Cpp + NNGDIPHALAP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNGDIPHALAP_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGDIPHALAP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGDIPHALAP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGDIPHALAP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void PHJJMJHMKJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGDIPHALAP_PHJJMJHMKJI_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNGDIPHALAP_JNIKOAEAEHB_OFFSET))(this);
		}

	};
