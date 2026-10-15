#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowSDFText; }
namespace RPG::GameCore { class TaskContext; }

#define NAENCDGADHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA96B50)
#define NAENCDGADHI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBA96B60)
#define NAENCDGADHI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA96BA0)
#define NAENCDGADHI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBA97300)
#define NAENCDGADHI_TICK_OFFSET UNITYSDK_OFFSET(0xBA97350)

inline static constexpr unsigned int NAENCDGADHI_TypeDefinitionIndex = 53286;

	class NAENCDGADHI : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ShowSDFText* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		// static const ::System::String* KGAAMPNKJMP; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowSDFText* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowSDFText*))((::PBYTE)hIl2Cpp + NAENCDGADHI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENCDGADHI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENCDGADHI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAENCDGADHI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAENCDGADHI_TICK_OFFSET))(this, a1);
		}

	};
