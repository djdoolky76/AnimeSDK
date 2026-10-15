#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class MatchThreeV2ChangePropContainerVisible; }
namespace RPG::GameCore { class TaskContext; }

#define ANAOMIAPAII_CTOR_OFFSET UNITYSDK_OFFSET(0x15591D10)
#define ANAOMIAPAII_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15591D20)
#define ANAOMIAPAII_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15591D60)
#define ANAOMIAPAII_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15591DE0)
#define ANAOMIAPAII_TICK_OFFSET UNITYSDK_OFFSET(0x15591E20)

inline static constexpr unsigned int ANAOMIAPAII_TypeDefinitionIndex = 58209;

	class ANAOMIAPAII : public ::GELIALJDFBL
	{
	public:
		::RPG::Client::MatchThreeV2ChangePropContainerVisible* IGHAHBNLIJA; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::MatchThreeV2ChangePropContainerVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::MatchThreeV2ChangePropContainerVisible*))((::PBYTE)hIl2Cpp + ANAOMIAPAII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAOMIAPAII_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAOMIAPAII_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAOMIAPAII_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ANAOMIAPAII_TICK_OFFSET))(this, a1);
		}

	};
