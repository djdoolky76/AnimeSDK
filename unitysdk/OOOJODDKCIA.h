#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowFuncBtnEffect; }
namespace RPG::GameCore { class TaskContext; }

#define OOOJODDKCIA_CTOR_OFFSET UNITYSDK_OFFSET(0xBF8CBF0)
#define OOOJODDKCIA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBF8CC00)
#define OOOJODDKCIA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBF8CC40)
#define OOOJODDKCIA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBF8CCC0)
#define OOOJODDKCIA_TICK_OFFSET UNITYSDK_OFFSET(0xBF8CD10)

inline static constexpr unsigned int OOOJODDKCIA_TypeDefinitionIndex = 53268;

	class OOOJODDKCIA : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowFuncBtnEffect* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowFuncBtnEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowFuncBtnEffect*))((::PBYTE)hIl2Cpp + OOOJODDKCIA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOJODDKCIA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOJODDKCIA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOOJODDKCIA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OOOJODDKCIA_TICK_OFFSET))(this, a1);
		}

	};
