#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowSkillTextDialog; }
namespace RPG::GameCore { class TaskContext; }

#define KHJIMGONNPP_CTOR_OFFSET UNITYSDK_OFFSET(0xB40B130)
#define KHJIMGONNPP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB40B140)
#define KHJIMGONNPP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB40B180)
#define KHJIMGONNPP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB40B220)
#define KHJIMGONNPP_TICK_OFFSET UNITYSDK_OFFSET(0xB40B270)

inline static constexpr unsigned int KHJIMGONNPP_TypeDefinitionIndex = 56458;

	class KHJIMGONNPP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowSkillTextDialog* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSkillTextDialog* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSkillTextDialog*))((::PBYTE)hIl2Cpp + KHJIMGONNPP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJIMGONNPP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJIMGONNPP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJIMGONNPP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KHJIMGONNPP_TICK_OFFSET))(this, a1);
		}

	};
