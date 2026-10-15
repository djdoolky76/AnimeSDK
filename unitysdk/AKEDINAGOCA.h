#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class ADFHDGEHFIP;
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class TaskContext; }

#define AKEDINAGOCA_CTOR_OFFSET UNITYSDK_OFFSET(0x12CCD3A0)
#define AKEDINAGOCA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CCD750)
#define AKEDINAGOCA_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x12CCD920)
#define AKEDINAGOCA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CCD430)
#define AKEDINAGOCA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CCD700)
#define AKEDINAGOCA_TICK_OFFSET UNITYSDK_OFFSET(0x12CCD820)

inline static constexpr unsigned int AKEDINAGOCA_TypeDefinitionIndex = 47101;

	class AKEDINAGOCA : public ::GELIALJDFBL
	{
	public:
		::ADFHDGEHFIP* OFKGLJOAMLD; // 0x18
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x20
		::KFELGAIGHAP* CKMKMCAOLOG; // 0x28
		::System::Boolean CNJONCPOHJL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ADFHDGEHFIP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ADFHDGEHFIP*))((::PBYTE)hIl2Cpp + AKEDINAGOCA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEDINAGOCA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEDINAGOCA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEDINAGOCA_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKEDINAGOCA_TICK_OFFSET))(this, a1);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEDINAGOCA_JNIKOAEAEHB_OFFSET))(this);
		}

	};
