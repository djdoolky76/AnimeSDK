#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define GIJGIEKECAC_CTOR_OFFSET UNITYSDK_OFFSET(0x15A32B60)
#define GIJGIEKECAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A32BF0)
#define GIJGIEKECAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A32E20)
#define GIJGIEKECAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15A32F00)
#define GIJGIEKECAC_TICK_OFFSET UNITYSDK_OFFSET(0x15A32CC0)

inline static constexpr unsigned int GIJGIEKECAC_TypeDefinitionIndex = 52445;

	class GIJGIEKECAC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdvNpcTrackedSearch* IGHAHBNLIJA; // 0x18
		::GELIALJDFBL* CCEPGAAOOOG; // 0x20
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvNpcTrackedSearch* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvNpcTrackedSearch*))((::PBYTE)hIl2Cpp + GIJGIEKECAC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJGIEKECAC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GIJGIEKECAC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJGIEKECAC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GIJGIEKECAC_ONTASKRESET_OFFSET))(this);
		}

	};
