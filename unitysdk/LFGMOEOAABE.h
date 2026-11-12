#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LINMDMNCLHK;
namespace RPG::GameCore { class TaskContext; }

#define LFGMOEOAABE_CTOR_OFFSET UNITYSDK_OFFSET(0xBEFF3B0)
#define LFGMOEOAABE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEFF3C0)
#define LFGMOEOAABE_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBEFF400)
#define LFGMOEOAABE_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xBEFF8F0)
#define LFGMOEOAABE_TICK_OFFSET UNITYSDK_OFFSET(0xBEFF940)

inline static constexpr unsigned int LFGMOEOAABE_TypeDefinitionIndex = 53840;

	class LFGMOEOAABE : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x18
		::LINMDMNCLHK* IGHAHBNLIJA; // 0x20
		// static const ::System::String* HMAEOILGGDF; // 0x0
		// static const ::System::String* JEICJEGKJMF; // 0x0
		// static const ::System::String* AHNIPENAEHO; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LINMDMNCLHK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LINMDMNCLHK*))((::PBYTE)hIl2Cpp + LFGMOEOAABE_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGMOEOAABE_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGMOEOAABE_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFGMOEOAABE_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFGMOEOAABE_TICK_OFFSET))(this, a1);
		}

	};
