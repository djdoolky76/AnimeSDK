#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class MJDBJKCBKJP;
namespace RPG::GameCore { class TaskContext; }

#define CBIKNHPGGHG_CJICKPDEMNE_OFFSET UNITYSDK_OFFSET(0x18FE4110)
#define CBIKNHPGGHG_CTOR_OFFSET UNITYSDK_OFFSET(0x18FE3FA0)
#define CBIKNHPGGHG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18FE3FB0)
#define CBIKNHPGGHG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18FE4040)
#define CBIKNHPGGHG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18FE3FF0)
#define CBIKNHPGGHG_TICK_OFFSET UNITYSDK_OFFSET(0x18FE42F0)

inline static constexpr unsigned int CBIKNHPGGHG_TypeDefinitionIndex = 55109;

	class CBIKNHPGGHG : public ::GELIALJDFBL
	{
	public:
		::MJDBJKCBKJP* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::RPG::GameCore::FixPoint DKOFFPPGEFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MJDBJKCBKJP* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MJDBJKCBKJP*))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_TICK_OFFSET))(this, a1);
		}

		::System::Boolean CJICKPDEMNE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBIKNHPGGHG_CJICKPDEMNE_OFFSET))(this);
		}

	};
