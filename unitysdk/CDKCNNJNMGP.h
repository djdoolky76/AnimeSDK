#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class SetMainLightOffset; }
namespace RPG::GameCore { class TaskContext; }

#define CDKCNNJNMGP_CTOR_OFFSET UNITYSDK_OFFSET(0xC76B790)
#define CDKCNNJNMGP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC76BD50)
#define CDKCNNJNMGP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC76B7A0)
#define CDKCNNJNMGP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xC76BCA0)
#define CDKCNNJNMGP_TICK_OFFSET UNITYSDK_OFFSET(0xC76BCF0)

inline static constexpr unsigned int CDKCNNJNMGP_TypeDefinitionIndex = 56412;

	class CDKCNNJNMGP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::SetMainLightOffset* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetMainLightOffset* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetMainLightOffset*))((::PBYTE)hIl2Cpp + CDKCNNJNMGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKCNNJNMGP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKCNNJNMGP_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CDKCNNJNMGP_TICK_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKCNNJNMGP_DISPOSE_OFFSET))(this);
		}

	};
