#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define HAIIEOAOHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x17DDA5D0)
#define HAIIEOAOHPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17DDA5E0)
#define HAIIEOAOHPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17DDA620)
#define HAIIEOAOHPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17DDA9F0)
#define HAIIEOAOHPK_TICK_OFFSET UNITYSDK_OFFSET(0x17DDAA40)

inline static constexpr unsigned int HAIIEOAOHPK_TypeDefinitionIndex = 59101;

	class HAIIEOAOHPK : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AddMenuItem* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddMenuItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddMenuItem*))((::PBYTE)hIl2Cpp + HAIIEOAOHPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIIEOAOHPK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIIEOAOHPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAIIEOAOHPK_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HAIIEOAOHPK_TICK_OFFSET))(this, a1);
		}

	};
