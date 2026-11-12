#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class GELIALJDFBL;
namespace RPG::GameCore { class AdvNpcTrackedSearch; }
namespace RPG::GameCore { class TaskContext; }

#define GIJGIEKECAC_CTOR_OFFSET UNITYSDK_OFFSET(0x16979540)
#define GIJGIEKECAC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x169795D0)
#define GIJGIEKECAC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x169797A0)
#define GIJGIEKECAC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16979880)
#define GIJGIEKECAC_TICK_OFFSET UNITYSDK_OFFSET(0x169796A0)

inline static constexpr unsigned int GIJGIEKECAC_TypeDefinitionIndex = 53551;

	class GIJGIEKECAC : public ::GELIALJDFBL
	{
	public:
		::GELIALJDFBL* CCEPGAAOOOG; // 0x18
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x20
		::RPG::GameCore::AdvNpcTrackedSearch* IGHAHBNLIJA; // 0x28
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
