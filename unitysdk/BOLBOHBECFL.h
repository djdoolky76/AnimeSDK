#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitStartMarbleGame; }
namespace System { class Object; }

#define BOLBOHBECFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1B5F1570)
#define BOLBOHBECFL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B5F1710)
#define BOLBOHBECFL_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0x1B5F1930)
#define BOLBOHBECFL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B5F1600)
#define BOLBOHBECFL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B5F16C0)
#define BOLBOHBECFL_TICK_OFFSET UNITYSDK_OFFSET(0x1B5F1860)

inline static constexpr unsigned int BOLBOHBECFL_TypeDefinitionIndex = 54656;

	class BOLBOHBECFL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::WaitStartMarbleGame* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::KFELGAIGHAP* EDBPHODBFCP; // 0x28
		::System::Boolean BHEIANKOOPN; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitStartMarbleGame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitStartMarbleGame*))((::PBYTE)hIl2Cpp + BOLBOHBECFL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLBOHBECFL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLBOHBECFL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOLBOHBECFL_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BOLBOHBECFL_TICK_OFFSET))(this, a1);
		}

		::System::Void NFNECIHEOAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BOLBOHBECFL_NFNECIHEOAF_OFFSET))(this, a1);
		}

	};
