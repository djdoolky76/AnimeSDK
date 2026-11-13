#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class FNAFLGKGKII;
namespace RPG::GameCore { class LevelGraphConfig; }
namespace RPG::GameCore { class LevelGraphValueSource; }
namespace RPG::GameCore { class StartSubGraphRaw; }
namespace RPG::GameCore { class TaskContext; }

#define OPJPJKJMPNI_CTOR_OFFSET UNITYSDK_OFFSET(0x18ABDD00)
#define OPJPJKJMPNI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18ABDD80)
#define OPJPJKJMPNI_FNBDNKLMCDI_OFFSET UNITYSDK_OFFSET(0x18ABE320)
#define OPJPJKJMPNI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18ABE0A0)
#define OPJPJKJMPNI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18ABDDE0)
#define OPJPJKJMPNI_TICK_OFFSET UNITYSDK_OFFSET(0x18ABDFD0)

inline static constexpr unsigned int OPJPJKJMPNI_TypeDefinitionIndex = 54454;

	class OPJPJKJMPNI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::LevelGraphConfig* INCIKECJNHK; // 0x18
		::RPG::GameCore::StartSubGraphRaw* OFKGLJOAMLD; // 0x20
		::FNAFLGKGKII* KFEEIIIHPJM; // 0x28
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x30
		::System::Boolean MOFJALKDOAD; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StartSubGraphRaw* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StartSubGraphRaw*))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_ONTASKRESET_OFFSET))(this);
		}

		::RPG::GameCore::LevelGraphValueSource* FNBDNKLMCDI()
		{
			return ((::RPG::GameCore::LevelGraphValueSource*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPJPJKJMPNI_FNBDNKLMCDI_OFFSET))(this);
		}

	};
