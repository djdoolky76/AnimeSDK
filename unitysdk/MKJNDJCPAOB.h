#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class DispelStatus; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MKJNDJCPAOB_CTOR_OFFSET UNITYSDK_OFFSET(0xB998C60)
#define MKJNDJCPAOB_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB998D60)
#define MKJNDJCPAOB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB998E10)
#define MKJNDJCPAOB_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB999C10)
#define MKJNDJCPAOB_TICK_OFFSET UNITYSDK_OFFSET(0xB999C60)

inline static constexpr unsigned int MKJNDJCPAOB_TypeDefinitionIndex = 55005;

	class MKJNDJCPAOB : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* BNLAOKGEFLK; // 0x20
		::GELIALJDFBL* LLHKOFLJFCH; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::TurnBasedModifierInstance*>* FABICEFOKHC; // 0x30
		::RPG::GameCore::DispelStatus* OFKGLJOAMLD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::DispelStatus* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::DispelStatus*))((::PBYTE)hIl2Cpp + MKJNDJCPAOB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJNDJCPAOB_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJNDJCPAOB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJNDJCPAOB_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MKJNDJCPAOB_TICK_OFFSET))(this, a1);
		}

	};
