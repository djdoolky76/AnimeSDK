#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerPamActionPhaseTalk; }

#define OCMIAGACFME_CTOR_OFFSET UNITYSDK_OFFSET(0xBD699C0)
#define OCMIAGACFME_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBD699D0)
#define OCMIAGACFME_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBD69A10)
#define OCMIAGACFME_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBD69A60)
#define OCMIAGACFME_TICK_OFFSET UNITYSDK_OFFSET(0xBD69AB0)

inline static constexpr unsigned int OCMIAGACFME_TypeDefinitionIndex = 58982;

	class OCMIAGACFME : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + OCMIAGACFME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIAGACFME_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIAGACFME_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCMIAGACFME_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OCMIAGACFME_TICK_OFFSET))(this, a1);
		}

	};
