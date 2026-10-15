#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class EnterAetherGym; }
namespace RPG::GameCore { class TaskContext; }

#define DIIMGLLHFLH_CTOR_OFFSET UNITYSDK_OFFSET(0xF205AB0)
#define DIIMGLLHFLH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xF205AC0)
#define DIIMGLLHFLH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xF205B00)
#define DIIMGLLHFLH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xF205B90)
#define DIIMGLLHFLH_TICK_OFFSET UNITYSDK_OFFSET(0xF205BE0)

inline static constexpr unsigned int DIIMGLLHFLH_TypeDefinitionIndex = 52750;

	class DIIMGLLHFLH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::EnterAetherGym* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::EnterAetherGym* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::EnterAetherGym*))((::PBYTE)hIl2Cpp + DIIMGLLHFLH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIMGLLHFLH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIMGLLHFLH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIMGLLHFLH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DIIMGLLHFLH_TICK_OFFSET))(this, a1);
		}

	};
