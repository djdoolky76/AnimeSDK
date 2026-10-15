#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RetargetList; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OHGPIBIJEMD_CTOR_OFFSET UNITYSDK_OFFSET(0xBE62BF0)
#define OHGPIBIJEMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE62DC0)
#define OHGPIBIJEMD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE62FC0)
#define OHGPIBIJEMD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE63780)
#define OHGPIBIJEMD_TICK_OFFSET UNITYSDK_OFFSET(0xBE63480)

inline static constexpr unsigned int OHGPIBIJEMD_TypeDefinitionIndex = 55321;

	class OHGPIBIJEMD : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* FNLJDEPHGFK; // 0x18
		::RPG::GameCore::RetargetList* OFKGLJOAMLD; // 0x20
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* BLOMOEJJCIK; // 0x28
		::GELIALJDFBL* LLHKOFLJFCH; // 0x30
		::KFELGAIGHAP* ABLEHPJLDDM; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RetargetList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RetargetList*))((::PBYTE)hIl2Cpp + OHGPIBIJEMD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGPIBIJEMD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGPIBIJEMD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OHGPIBIJEMD_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHGPIBIJEMD_ONTASKRESET_OFFSET))(this);
		}

	};
