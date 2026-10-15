#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class EBBBJDPGDFG;
class OMFLEDNICFA;
namespace RPG::GameCore { class TaskContext; }

#define POEFBOIMIPM_CTOR_OFFSET UNITYSDK_OFFSET(0xC352B90)
#define POEFBOIMIPM_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC352D70)
#define POEFBOIMIPM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC352BC0)
#define POEFBOIMIPM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC352EB0)
#define POEFBOIMIPM_TICK_OFFSET UNITYSDK_OFFSET(0xC352DC0)

inline static constexpr unsigned int POEFBOIMIPM_TypeDefinitionIndex = 53718;

	class POEFBOIMIPM
	{
	public:
		::EBBBJDPGDFG* EEGKNKIBLHB; // 0x28
		::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x30
		::RPG::GameCore::FixPoint KBDPMBDJIOF; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OMFLEDNICFA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OMFLEDNICFA*))((::PBYTE)hIl2Cpp + POEFBOIMIPM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFBOIMIPM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFBOIMIPM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + POEFBOIMIPM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POEFBOIMIPM_ONTASKRESET_OFFSET))(this);
		}

	};
