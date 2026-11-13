#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetUpPamAIDialogue; }
namespace RPG::GameCore { class TaskContext; }

#define ACNPKFGMLLI_CTOR_OFFSET UNITYSDK_OFFSET(0x18299580)
#define ACNPKFGMLLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18299590)
#define ACNPKFGMLLI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x182995D0)
#define ACNPKFGMLLI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18299B50)
#define ACNPKFGMLLI_TICK_OFFSET UNITYSDK_OFFSET(0x18299BA0)

inline static constexpr unsigned int ACNPKFGMLLI_TypeDefinitionIndex = 60250;

	class ACNPKFGMLLI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		// static const ::System::String* MEGLFLCPEPB; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetUpPamAIDialogue* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetUpPamAIDialogue*))((::PBYTE)hIl2Cpp + ACNPKFGMLLI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNPKFGMLLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNPKFGMLLI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACNPKFGMLLI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ACNPKFGMLLI_TICK_OFFSET))(this, a1);
		}

	};
