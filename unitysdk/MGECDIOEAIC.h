#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ModifyEntityBoostPoint; }
namespace RPG::GameCore { class TaskContext; }

#define MGECDIOEAIC_CTOR_OFFSET UNITYSDK_OFFSET(0xB9116F0)
#define MGECDIOEAIC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB911700)
#define MGECDIOEAIC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB911740)
#define MGECDIOEAIC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB911D50)
#define MGECDIOEAIC_TICK_OFFSET UNITYSDK_OFFSET(0xB911DA0)

inline static constexpr unsigned int MGECDIOEAIC_TypeDefinitionIndex = 55198;

	class MGECDIOEAIC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifyEntityBoostPoint* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyEntityBoostPoint* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyEntityBoostPoint*))((::PBYTE)hIl2Cpp + MGECDIOEAIC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGECDIOEAIC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGECDIOEAIC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGECDIOEAIC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MGECDIOEAIC_TICK_OFFSET))(this, a1);
		}

	};
