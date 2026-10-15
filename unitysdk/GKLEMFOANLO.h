#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamOnlineFirst; }

#define GKLEMFOANLO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A95750)
#define GKLEMFOANLO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A95760)
#define GKLEMFOANLO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A957A0)
#define GKLEMFOANLO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A95870)
#define GKLEMFOANLO_TICK_OFFSET UNITYSDK_OFFSET(0x15A958C0)

inline static constexpr unsigned int GKLEMFOANLO_TypeDefinitionIndex = 58985;

	class GKLEMFOANLO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamOnlineFirst* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamOnlineFirst*))((::PBYTE)hIl2Cpp + GKLEMFOANLO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLEMFOANLO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLEMFOANLO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKLEMFOANLO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKLEMFOANLO_TICK_OFFSET))(this, a1);
		}

	};
