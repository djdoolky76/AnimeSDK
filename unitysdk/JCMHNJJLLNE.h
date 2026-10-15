#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class StopEffectFollow; }
namespace RPG::GameCore { class TaskContext; }

#define JCMHNJJLLNE_CTOR_OFFSET UNITYSDK_OFFSET(0x165A7770)
#define JCMHNJJLLNE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x165A7780)
#define JCMHNJJLLNE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x165A77C0)
#define JCMHNJJLLNE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x165A7B00)
#define JCMHNJJLLNE_TICK_OFFSET UNITYSDK_OFFSET(0x165A7B50)

inline static constexpr unsigned int JCMHNJJLLNE_TypeDefinitionIndex = 55667;

	class JCMHNJJLLNE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::StopEffectFollow* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::StopEffectFollow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::StopEffectFollow*))((::PBYTE)hIl2Cpp + JCMHNJJLLNE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHNJJLLNE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHNJJLLNE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCMHNJJLLNE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JCMHNJJLLNE_TICK_OFFSET))(this, a1);
		}

	};
