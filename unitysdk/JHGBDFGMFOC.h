#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class ShowUINodes; }
namespace RPG::GameCore { class TaskContext; }

#define JHGBDFGMFOC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1ACA10)
#define JHGBDFGMFOC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB1ACA20)
#define JHGBDFGMFOC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1ACA60)
#define JHGBDFGMFOC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB1ACCE0)
#define JHGBDFGMFOC_TICK_OFFSET UNITYSDK_OFFSET(0xB1ACD30)

inline static constexpr unsigned int JHGBDFGMFOC_TypeDefinitionIndex = 58706;

	class JHGBDFGMFOC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::ShowUINodes* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ShowUINodes* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ShowUINodes*))((::PBYTE)hIl2Cpp + JHGBDFGMFOC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGBDFGMFOC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGBDFGMFOC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHGBDFGMFOC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JHGBDFGMFOC_TICK_OFFSET))(this, a1);
		}

	};
