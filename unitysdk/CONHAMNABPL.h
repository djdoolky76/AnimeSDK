#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class HideLevelStage; }
namespace RPG::GameCore { class TaskContext; }

#define CONHAMNABPL_CTOR_OFFSET UNITYSDK_OFFSET(0xDCC0620)
#define CONHAMNABPL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDCC0630)
#define CONHAMNABPL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDCC0670)
#define CONHAMNABPL_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDCC0920)
#define CONHAMNABPL_TICK_OFFSET UNITYSDK_OFFSET(0xDCC0970)

inline static constexpr unsigned int CONHAMNABPL_TypeDefinitionIndex = 58151;

	class CONHAMNABPL : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::GameCore::HideLevelStage* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::HideLevelStage* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::HideLevelStage*))((::PBYTE)hIl2Cpp + CONHAMNABPL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONHAMNABPL_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONHAMNABPL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONHAMNABPL_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CONHAMNABPL_TICK_OFFSET))(this, a1);
		}

	};
