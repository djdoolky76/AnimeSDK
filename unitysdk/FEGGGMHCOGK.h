#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class MonopolyTriggerMoveToNextMap; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define FEGGGMHCOGK_AAFEFOMGDOM_OFFSET UNITYSDK_OFFSET(0x16602D00)
#define FEGGGMHCOGK_CTOR_OFFSET UNITYSDK_OFFSET(0x16602BC0)
#define FEGGGMHCOGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16602E10)
#define FEGGGMHCOGK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16602BD0)
#define FEGGGMHCOGK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16602DC0)
#define FEGGGMHCOGK_TICK_OFFSET UNITYSDK_OFFSET(0x16602E50)

inline static constexpr unsigned int FEGGGMHCOGK_TypeDefinitionIndex = 59483;

	class FEGGGMHCOGK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::MonopolyTriggerMoveToNextMap* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::MonopolyTriggerMoveToNextMap* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::MonopolyTriggerMoveToNextMap*))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void AAFEFOMGDOM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_AAFEFOMGDOM_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FEGGGMHCOGK_TICK_OFFSET))(this, a1);
		}

	};
