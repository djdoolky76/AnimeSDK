#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StackRedStance; }
namespace RPG::GameCore { class TaskContext; }

#define AJMFGJMGIJH_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC0C40)
#define AJMFGJMGIJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x12CC0C50)
#define AJMFGJMGIJH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x12CC0D40)
#define AJMFGJMGIJH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x12CC0C90)
#define AJMFGJMGIJH_TICK_OFFSET UNITYSDK_OFFSET(0x12CC0CE0)

inline static constexpr unsigned int AJMFGJMGIJH_TypeDefinitionIndex = 55647;

	class AJMFGJMGIJH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::StackRedStance* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StackRedStance* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StackRedStance*))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMFGJMGIJH_ONTASKBEGIN_OFFSET))(this);
		}

	};
