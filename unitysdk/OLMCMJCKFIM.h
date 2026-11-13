#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class MonopolyCheckHasFinishedQuiz; }
namespace RPG::GameCore { class TaskContext; }

#define OLMCMJCKFIM_CTOR_OFFSET UNITYSDK_OFFSET(0x178B1440)
#define OLMCMJCKFIM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x178B17B0)
#define OLMCMJCKFIM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x178B1540)
#define OLMCMJCKFIM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x178B1760)
#define OLMCMJCKFIM_TICK_OFFSET UNITYSDK_OFFSET(0x178B1920)

inline static constexpr unsigned int OLMCMJCKFIM_TypeDefinitionIndex = 59472;

	class OLMCMJCKFIM : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyCheckHasFinishedQuiz* OFKGLJOAMLD; // 0x20
		::KFELGAIGHAP* IJBFOGOBMLE; // 0x28
		::KFELGAIGHAP* APPJBNPGGMI; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyCheckHasFinishedQuiz*))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OLMCMJCKFIM_TICK_OFFSET))(this, a1);
		}

	};
