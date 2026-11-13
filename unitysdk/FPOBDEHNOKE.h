#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class CloseRogueNousPages; }
namespace RPG::GameCore { class TaskContext; }

#define FPOBDEHNOKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1B8524E0)
#define FPOBDEHNOKE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B8524F0)
#define FPOBDEHNOKE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B852530)
#define FPOBDEHNOKE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B8525F0)
#define FPOBDEHNOKE_TICK_OFFSET UNITYSDK_OFFSET(0x1B852640)

inline static constexpr unsigned int FPOBDEHNOKE_TypeDefinitionIndex = 59268;

	class FPOBDEHNOKE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::CloseRogueNousPages* OFKGLJOAMLD; // 0x20
		// static const ::System::String* DNDBFANMBKD; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CloseRogueNousPages* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CloseRogueNousPages*))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FPOBDEHNOKE_TICK_OFFSET))(this, a1);
		}

	};
