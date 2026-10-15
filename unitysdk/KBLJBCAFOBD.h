#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class AddPamMenuItem; }
namespace RPG::GameCore { class TaskContext; }

#define KBLJBCAFOBD_CTOR_OFFSET UNITYSDK_OFFSET(0xB3124A0)
#define KBLJBCAFOBD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3124B0)
#define KBLJBCAFOBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB3124F0)
#define KBLJBCAFOBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB3128A0)
#define KBLJBCAFOBD_TICK_OFFSET UNITYSDK_OFFSET(0xB3128F0)

inline static constexpr unsigned int KBLJBCAFOBD_TypeDefinitionIndex = 58974;

	class KBLJBCAFOBD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AddPamMenuItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AddPamMenuItem*))((::PBYTE)hIl2Cpp + KBLJBCAFOBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLJBCAFOBD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLJBCAFOBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBLJBCAFOBD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KBLJBCAFOBD_TICK_OFFSET))(this, a1);
		}

	};
