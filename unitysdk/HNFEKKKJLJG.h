#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class LNLJFDBENMF;
namespace RPG::GameCore { class TaskContext; }

#define HNFEKKKJLJG_CTOR_OFFSET UNITYSDK_OFFSET(0x15D92D00)
#define HNFEKKKJLJG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D92E90)
#define HNFEKKKJLJG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D92D10)
#define HNFEKKKJLJG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15D92DE0)
#define HNFEKKKJLJG_TICK_OFFSET UNITYSDK_OFFSET(0x15D92E30)

inline static constexpr unsigned int HNFEKKKJLJG_TypeDefinitionIndex = 52801;

	class HNFEKKKJLJG : public ::GELIALJDFBL
	{
	public:
		::LNLJFDBENMF* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LNLJFDBENMF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LNLJFDBENMF*))((::PBYTE)hIl2Cpp + HNFEKKKJLJG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFEKKKJLJG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFEKKKJLJG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HNFEKKKJLJG_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFEKKKJLJG_DISPOSE_OFFSET))(this);
		}

	};
