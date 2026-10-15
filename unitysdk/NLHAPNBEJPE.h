#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class PauseGameModeToState; }
namespace RPG::GameCore { class TaskContext; }

#define NLHAPNBEJPE_CTOR_OFFSET UNITYSDK_OFFSET(0xBC6BAB0)
#define NLHAPNBEJPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC6BAC0)
#define NLHAPNBEJPE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBC6BB00)
#define NLHAPNBEJPE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBC6BBA0)
#define NLHAPNBEJPE_TICK_OFFSET UNITYSDK_OFFSET(0xBC6BBF0)

inline static constexpr unsigned int NLHAPNBEJPE_TypeDefinitionIndex = 58248;

	class NLHAPNBEJPE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::PauseGameModeToState* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::PauseGameModeToState* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::PauseGameModeToState*))((::PBYTE)hIl2Cpp + NLHAPNBEJPE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHAPNBEJPE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHAPNBEJPE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NLHAPNBEJPE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NLHAPNBEJPE_TICK_OFFSET))(this, a1);
		}

	};
