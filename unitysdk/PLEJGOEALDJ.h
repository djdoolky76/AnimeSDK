#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class InitGridFightStatisticsBinding; }
namespace RPG::GameCore { class TaskContext; }

#define PLEJGOEALDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18875390)
#define PLEJGOEALDJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18875780)
#define PLEJGOEALDJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18875500)

inline static constexpr unsigned int PLEJGOEALDJ_TypeDefinitionIndex = 56307;

	class PLEJGOEALDJ
	{
	public:
		::KFELGAIGHAP* BEFADEOKIME; // 0x28
		::KFELGAIGHAP* KDMEBFOHHBM; // 0x30
		::KFELGAIGHAP* JCLEENONPGI; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::InitGridFightStatisticsBinding* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::InitGridFightStatisticsBinding*))((::PBYTE)hIl2Cpp + PLEJGOEALDJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEJGOEALDJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLEJGOEALDJ_DISPOSE_OFFSET))(this);
		}

	};
