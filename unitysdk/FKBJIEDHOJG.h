#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class BNBOAMEBAOE;
class GELIALJDFBL;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowGuideDetailDialog; }
namespace RPG::GameCore { class TaskContext; }

#define FKBJIEDHOJG_CTOR_OFFSET UNITYSDK_OFFSET(0x1AA900C0)
#define FKBJIEDHOJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AA900D0)
#define FKBJIEDHOJG_HAOLDBDKAOK_OFFSET UNITYSDK_OFFSET(0x1AA90B30)
#define FKBJIEDHOJG_IGFJINFPDFL_OFFSET UNITYSDK_OFFSET(0x1AA90160)
#define FKBJIEDHOJG_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x1AA909F0)
#define FKBJIEDHOJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1AA90110)
#define FKBJIEDHOJG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1AA908D0)
#define FKBJIEDHOJG_TICK_OFFSET UNITYSDK_OFFSET(0x1AA90920)
#define FKBJIEDHOJG___SHOWGUIDEDETAILDIALOG_B__5_0_OFFSET UNITYSDK_OFFSET(0x1AA90B80)

inline static constexpr unsigned int FKBJIEDHOJG_TypeDefinitionIndex = 59919;

	class FKBJIEDHOJG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::GELIALJDFBL* JLMAKNFAEBH; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::RPG::GameCore::ShowGuideDetailDialog* OFKGLJOAMLD; // 0x30
		::System::Boolean JIFFHICKNBO; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuideDetailDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuideDetailDialog*))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_TICK_OFFSET))(this, a1);
		}

		::System::Void IGFJINFPDFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_IGFJINFPDFL_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_JNIKOAEAEHB_OFFSET))(this);
		}

		::System::Void HAOLDBDKAOK(::BNBOAMEBAOE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BNBOAMEBAOE*))((::PBYTE)hIl2Cpp + FKBJIEDHOJG_HAOLDBDKAOK_OFFSET))(this, a1);
		}

		::System::Void __ShowGuideDetailDialog_b__5_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKBJIEDHOJG___SHOWGUIDEDETAILDIALOG_B__5_0_OFFSET))(this);
		}

	};
