#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class LuaUIController; }
namespace RPG::GameCore { class OpenMusicRhythmReadyPage; }
namespace RPG::GameCore { class TaskContext; }

#define OIMGFBKNPHN_CTOR_OFFSET UNITYSDK_OFFSET(0xBE998D0)
#define OIMGFBKNPHN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE998E0)
#define OIMGFBKNPHN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBE99920)
#define OIMGFBKNPHN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBE99D20)
#define OIMGFBKNPHN_TICK_OFFSET UNITYSDK_OFFSET(0xBE99D70)

inline static constexpr unsigned int OIMGFBKNPHN_TypeDefinitionIndex = 53038;

	class OIMGFBKNPHN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::OpenMusicRhythmReadyPage* IGHAHBNLIJA; // 0x18
		::RPG::Client::LuaUIController* NNHPFIOCJLN; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Single BPLPMMOBBHJ; // 0x30
		::System::Single PGMIOKKLHIE; // 0x34
		::System::Boolean AKKBAEEOCPB; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::OpenMusicRhythmReadyPage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::OpenMusicRhythmReadyPage*))((::PBYTE)hIl2Cpp + OIMGFBKNPHN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMGFBKNPHN_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMGFBKNPHN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIMGFBKNPHN_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OIMGFBKNPHN_TICK_OFFSET))(this, a1);
		}

	};
