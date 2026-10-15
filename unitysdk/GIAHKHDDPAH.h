#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class UINotifyMonopolyEventStart; }

#define GIAHKHDDPAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15A22640)
#define GIAHKHDDPAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A22760)
#define GIAHKHDDPAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A22650)
#define GIAHKHDDPAH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A22710)
#define GIAHKHDDPAH_TICK_OFFSET UNITYSDK_OFFSET(0x15A226B0)

inline static constexpr unsigned int GIAHKHDDPAH_TypeDefinitionIndex = 58838;

	class GIAHKHDDPAH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::UINotifyMonopolyEventStart* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::UINotifyMonopolyEventStart* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::UINotifyMonopolyEventStart*))((::PBYTE)hIl2Cpp + GIAHKHDDPAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHKHDDPAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIAHKHDDPAH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHKHDDPAH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIAHKHDDPAH_DISPOSE_OFFSET))(this);
		}

	};
