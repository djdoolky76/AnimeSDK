#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitConditionString; }
namespace System { class Object; }
namespace System { class String; }

#define ODKMIIMEEPG_CTOR_OFFSET UNITYSDK_OFFSET(0x1760E820)
#define ODKMIIMEEPG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1760E850)
#define ODKMIIMEEPG_OGFFKNGOIFL_OFFSET UNITYSDK_OFFSET(0x1760EAD0)
#define ODKMIIMEEPG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1760E890)
#define ODKMIIMEEPG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1760E9A0)
#define ODKMIIMEEPG_TICK_OFFSET UNITYSDK_OFFSET(0x1760EA70)

inline static constexpr unsigned int ODKMIIMEEPG_TypeDefinitionIndex = 60150;

	class ODKMIIMEEPG : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::WaitConditionString* OFKGLJOAMLD; // 0x20
		::System::String* IFDOLFKAOLA; // 0x28
		::System::UInt32 CFKLLAOPMOG; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitConditionString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitConditionString*))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_TICK_OFFSET))(this, a1);
		}

		::System::Void OGFFKNGOIFL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ODKMIIMEEPG_OGFFKNGOIFL_OFFSET))(this, a1);
		}

	};
