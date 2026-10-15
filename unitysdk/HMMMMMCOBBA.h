#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowGuide; }
namespace RPG::GameCore { class TaskContext; }

#define HMMMMMCOBBA_CTOR_OFFSET UNITYSDK_OFFSET(0x15D88240)
#define HMMMMMCOBBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D88250)
#define HMMMMMCOBBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D88290)
#define HMMMMMCOBBA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D88420)
#define HMMMMMCOBBA_TICK_OFFSET UNITYSDK_OFFSET(0x15D88470)

inline static constexpr unsigned int HMMMMMCOBBA_TypeDefinitionIndex = 58659;

	class HMMMMMCOBBA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowGuide* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowGuide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowGuide*))((::PBYTE)hIl2Cpp + HMMMMMCOBBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMMMMCOBBA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMMMMCOBBA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMMMMMCOBBA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HMMMMMCOBBA_TICK_OFFSET))(this, a1);
		}

	};
