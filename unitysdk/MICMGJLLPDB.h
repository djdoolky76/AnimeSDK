#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowTransitionLoadingUI; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define MICMGJLLPDB_AILOHLMKGBB_OFFSET UNITYSDK_OFFSET(0xB951900)
#define MICMGJLLPDB_CTOR_OFFSET UNITYSDK_OFFSET(0xB951620)
#define MICMGJLLPDB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB951630)
#define MICMGJLLPDB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB951670)
#define MICMGJLLPDB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB951850)
#define MICMGJLLPDB_TICK_OFFSET UNITYSDK_OFFSET(0xB9518A0)

inline static constexpr unsigned int MICMGJLLPDB_TypeDefinitionIndex = 58697;

	class MICMGJLLPDB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowTransitionLoadingUI* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowTransitionLoadingUI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowTransitionLoadingUI*))((::PBYTE)hIl2Cpp + MICMGJLLPDB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICMGJLLPDB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICMGJLLPDB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MICMGJLLPDB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MICMGJLLPDB_TICK_OFFSET))(this, a1);
		}

		::System::Void AILOHLMKGBB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MICMGJLLPDB_AILOHLMKGBB_OFFSET))(this, a1);
		}

	};
