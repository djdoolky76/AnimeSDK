#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ShowFistClubMissionPage; }
namespace RPG::GameCore { class TaskContext; }

#define DOOCDKHJCPM_AIEGALJHOFE_OFFSET UNITYSDK_OFFSET(0x11FEF0A0)
#define DOOCDKHJCPM_CTOR_OFFSET UNITYSDK_OFFSET(0x11FEEDB0)
#define DOOCDKHJCPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x11FEEE40)
#define DOOCDKHJCPM_JNIKOAEAEHB_OFFSET UNITYSDK_OFFSET(0x11FEF1F0)
#define DOOCDKHJCPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x11FEEF70)
#define DOOCDKHJCPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x11FEF1A0)
#define DOOCDKHJCPM_TICK_OFFSET UNITYSDK_OFFSET(0x11FEEF10)

inline static constexpr unsigned int DOOCDKHJCPM_TypeDefinitionIndex = 58650;

	class DOOCDKHJCPM : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* NJMIOBMMCPH; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::ShowFistClubMissionPage* OFKGLJOAMLD; // 0x28
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFistClubMissionPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFistClubMissionPage*))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void AIEGALJHOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_AIEGALJHOFE_OFFSET))(this);
		}

		::System::Void JNIKOAEAEHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOCDKHJCPM_JNIKOAEAEHB_OFFSET))(this);
		}

	};
