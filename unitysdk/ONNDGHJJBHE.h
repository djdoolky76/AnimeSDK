#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
class EKFMIDBJDIA;
class FOOIINCDBFA;
class HJCOLAEIJFM;
namespace RPG::GameCore { class ST_Main_NavigateToAward; }
namespace RPG::GameCore { class TaskContext; }

#define ONNDGHJJBHE_BFJBKDGAJMO_OFFSET UNITYSDK_OFFSET(0xBF5F4E0)
#define ONNDGHJJBHE_CFHADGDMCKA_OFFSET UNITYSDK_OFFSET(0xBF5F640)
#define ONNDGHJJBHE_CTOR_OFFSET UNITYSDK_OFFSET(0xBF5EBF0)
#define ONNDGHJJBHE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF5EC20)
#define ONNDGHJJBHE_IFCNMIBPBOI_OFFSET UNITYSDK_OFFSET(0xBF5F310)
#define ONNDGHJJBHE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF5ED90)
#define ONNDGHJJBHE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF5F1A0)
#define ONNDGHJJBHE_OOGCMLCLMJF_OFFSET UNITYSDK_OFFSET(0xBF5F590)

	class ONNDGHJJBHE
	{
	public:
		::HJCOLAEIJFM* FEOHEEMDCGN; // 0x28
		::FOOIINCDBFA* AGJDABDMMEH; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_NavigateToAward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_NavigateToAward*))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void IFCNMIBPBOI(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_IFCNMIBPBOI_OFFSET))(this, a1);
		}

		::System::Void BFJBKDGAJMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_BFJBKDGAJMO_OFFSET))(this);
		}

		::System::Void OOGCMLCLMJF(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_OOGCMLCLMJF_OFFSET))(this, a1);
		}

		::System::Void CFHADGDMCKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONNDGHJJBHE_CFHADGDMCKA_OFFSET))(this);
		}

	};
