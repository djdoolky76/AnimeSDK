#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GMGJDEHGNGK;
namespace RPG::GameCore { class TaskContext; }

#define KJCABLMOJJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB435500)
#define KJCABLMOJJC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB435510)
#define KJCABLMOJJC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB435560)
#define KJCABLMOJJC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB435C70)
#define KJCABLMOJJC_TICK_OFFSET UNITYSDK_OFFSET(0xB435CC0)

inline static constexpr unsigned int KJCABLMOJJC_TypeDefinitionIndex = 52873;

	class KJCABLMOJJC : public ::GELIALJDFBL
	{
	public:
		::GMGJDEHGNGK* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMGJDEHGNGK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMGJDEHGNGK*))((::PBYTE)hIl2Cpp + KJCABLMOJJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJCABLMOJJC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KJCABLMOJJC_TICK_OFFSET))(this, a1);
		}

	};
