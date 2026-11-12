#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class ExitTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }

#define FBCJAJPICCE_CTOR_OFFSET UNITYSDK_OFFSET(0x165AC3E0)
#define FBCJAJPICCE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165AC3F0)
#define FBCJAJPICCE_KPAOCJEJCNA_OFFSET UNITYSDK_OFFSET(0x165AC6F0)
#define FBCJAJPICCE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165AC430)
#define FBCJAJPICCE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165AC640)
#define FBCJAJPICCE_TICK_OFFSET UNITYSDK_OFFSET(0x165AC690)

inline static constexpr unsigned int FBCJAJPICCE_TypeDefinitionIndex = 59361;

	class FBCJAJPICCE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ExitTransitionLoadingUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::Client::LuaUIController* OGOFNHAGOPO; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ExitTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ExitTransitionLoadingUI*))((::PBYTE)hIl2Cpp + FBCJAJPICCE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJAJPICCE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJAJPICCE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJAJPICCE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FBCJAJPICCE_TICK_OFFSET))(this, a1);
		}

		::System::Void KPAOCJEJCNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBCJAJPICCE_KPAOCJEJCNA_OFFSET))(this);
		}

	};
