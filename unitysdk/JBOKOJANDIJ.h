#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SaveModelWhenDead; }
namespace RPG::GameCore { class TaskContext; }

#define JBOKOJANDIJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16568410)
#define JBOKOJANDIJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16568420)
#define JBOKOJANDIJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165684C0)
#define JBOKOJANDIJ_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16568610)
#define JBOKOJANDIJ_TICK_OFFSET UNITYSDK_OFFSET(0x16568460)

inline static constexpr unsigned int JBOKOJANDIJ_TypeDefinitionIndex = 56387;

	class JBOKOJANDIJ : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SaveModelWhenDead* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SaveModelWhenDead* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SaveModelWhenDead*))((::PBYTE)hIl2Cpp + JBOKOJANDIJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOKOJANDIJ_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBOKOJANDIJ_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOKOJANDIJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBOKOJANDIJ_ONTASKRESET_OFFSET))(this);
		}

	};
