#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class OABDHILOOOC;
namespace RPG::GameCore { class TaskContext; }

#define ONENFFPEKKO_CTOR_OFFSET UNITYSDK_OFFSET(0xC84F480)
#define ONENFFPEKKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC84F490)
#define ONENFFPEKKO_NMHNOOFKPLN_OFFSET UNITYSDK_OFFSET(0xC84F6E0)
#define ONENFFPEKKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC84F560)
#define ONENFFPEKKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC84F510)
#define ONENFFPEKKO_TICK_OFFSET UNITYSDK_OFFSET(0xC84F680)

inline static constexpr unsigned int ONENFFPEKKO_TypeDefinitionIndex = 54425;

	class ONENFFPEKKO : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::OABDHILOOOC* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OABDHILOOOC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OABDHILOOOC*))((::PBYTE)hIl2Cpp + ONENFFPEKKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENFFPEKKO_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENFFPEKKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENFFPEKKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ONENFFPEKKO_TICK_OFFSET))(this, a1);
		}

		::System::Void NMHNOOFKPLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONENFFPEKKO_NMHNOOFKPLN_OFFSET))(this);
		}

	};
