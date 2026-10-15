#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TrainVisitorDialogueEnd; }

#define HAHLNJLNPBP_CTOR_OFFSET UNITYSDK_OFFSET(0x15B78550)
#define HAHLNJLNPBP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B78560)
#define HAHLNJLNPBP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B785A0)
#define HAHLNJLNPBP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B78830)
#define HAHLNJLNPBP_TICK_OFFSET UNITYSDK_OFFSET(0x15B78880)

inline static constexpr unsigned int HAHLNJLNPBP_TypeDefinitionIndex = 53432;

	class HAHLNJLNPBP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TrainVisitorDialogueEnd* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TrainVisitorDialogueEnd*))((::PBYTE)hIl2Cpp + HAHLNJLNPBP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHLNJLNPBP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHLNJLNPBP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAHLNJLNPBP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAHLNJLNPBP_TICK_OFFSET))(this, a1);
		}

	};
