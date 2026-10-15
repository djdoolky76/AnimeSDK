#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define HAIIEOAOHPK_CTOR_OFFSET UNITYSDK_OFFSET(0x15B6CE50)
#define HAIIEOAOHPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15B6CE60)
#define HAIIEOAOHPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B6CEA0)
#define HAIIEOAOHPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15B6D270)
#define HAIIEOAOHPK_TICK_OFFSET UNITYSDK_OFFSET(0x15B6D2C0)

inline static constexpr unsigned int HAIIEOAOHPK_TypeDefinitionIndex = 57864;

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
